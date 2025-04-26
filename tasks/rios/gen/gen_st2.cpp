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
    for (int i = 1; i < n; ++i) {
        int x = rnd.next(1, MAX_P);
        V.push_back(x);
    }
    sort(V.begin(), V.end());
    for (int i=0; i<n; i++){
        if (i){
            printf(" ");
        }
        printf("%d", V[i]);
    }

    return 0;
}