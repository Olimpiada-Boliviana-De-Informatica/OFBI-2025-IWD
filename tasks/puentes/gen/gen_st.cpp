#include "testlib.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // iota
#include <set>
#include <utility> // pair
#include <cstdlib> // atoi

using namespace std;

// Función segura para generar un número aleatorio entre low y high
int safe_random(int low, int high) {
    if (low > high) return low;
    return rnd.next(low, high);
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int subtask = atoi(argv[1]); // subtask: 1, 2, 3 o 4

    int N, M;
    vector<pair<int, int>> edges;

    if (subtask == 1) {
        // Subtarea 1: N <= 2, M <= 1
        N = safe_random(1, 2);
        int maxM = min(1, N * (N - 1) / 2);
        if (maxM < 0) maxM = 0;
        M = safe_random(0, maxM);
    }
    else if (subtask == 2) {
        // Subtarea 2: N <= 10, M <= 10, grafo 2-conexo
        N = safe_random(2, 10);
        int maxM = min(10, N * (N - 1) / 2);
        if (maxM < N) maxM = N; // Necesario para hacer un ciclo
        M = safe_random(N, maxM);

        // Generar un grafo 2-conexo: construir un ciclo y luego agregar aristas extras
        vector<int> nodes(N);
        iota(nodes.begin(), nodes.end(), 1);
        shuffle(nodes.begin(), nodes.end());

        // Formar el ciclo
        for (int i = 0; i < N; ++i) {
            edges.push_back({nodes[i], nodes[(i + 1) % N]});
        }

        // Agregar aristas extra si es necesario
        set<pair<int, int>> edgeSet(edges.begin(), edges.end());
        while ((int)edgeSet.size() < M) {
            int u = safe_random(1, N);
            int v = safe_random(1, N);
            if (u != v) {
                if (u > v) swap(u, v);
                edgeSet.insert({u, v});
            }
        }
        edges.assign(edgeSet.begin(), edgeSet.end());
    }
    else if (subtask == 3) {
        // Subtarea 3: N <= 100, M <= 100
        N = safe_random(2, 100);
        int maxM = min(100, N * (N - 1) / 2);
        if (maxM < 0) maxM = 0;
        M = safe_random(0, maxM);

        set<pair<int, int>> edgeSet;
        while ((int)edgeSet.size() < M) {
            int u = safe_random(1, N);
            int v = safe_random(1, N);
            if (u != v) {
                if (u > v) swap(u, v);
                edgeSet.insert({u, v});
            }
        }
        edges.assign(edgeSet.begin(), edgeSet.end());
    }
    else if (subtask == 4) {
        // Subtarea 4: N <= 10, M <= 10
        N = safe_random(1, 10);
        int maxM = min(10, N * (N - 1) / 2);
        if (maxM < 0) maxM = 0;
        M = safe_random(0, maxM);

        set<pair<int, int>> edgeSet;
        while ((int)edgeSet.size() < M) {
            int u = safe_random(1, N);
            int v = safe_random(1, N);
            if (u != v) {
                if (u > v) swap(u, v);
                edgeSet.insert({u, v});
            }
        }
        edges.assign(edgeSet.begin(), edgeSet.end());
    }
    else {
        // Por si el subtask no es válido
        cerr << "Invalid subtask number: " << subtask << endl;
        exit(1);
    }

    // Imprimir el grafo
    cout << N << " " << edges.size() << "\n";
    for (size_t i = 0; i < edges.size(); ++i) {
        cout << edges[i].first << " " << edges[i].second << "\n";
    }

    return 0;
}
