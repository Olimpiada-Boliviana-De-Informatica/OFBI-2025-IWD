#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int MIN_N = atoi(argv[1]);
    int MAX_N = atoi(argv[2]);
    int MAX_P = atoi(argv[3]);

    int n = rnd.next(MIN_N, MAX_N);
    printf("%d\n", n);
    printf("%d\n", n);

    vector<int> V;
    V.push_back(0);
    printf("%d", V[0]);
    int diff = rnd.next(1, MAX_P);
    for (int i = 1; i < n; ++i) {
        V.push_back(V[i-1] + diff);
        printf(" %d", V[i]);
    }

    return 0;
}