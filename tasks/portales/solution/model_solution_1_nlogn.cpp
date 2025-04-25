#include "cstdio"
#include "set"

using namespace std;

int main (){
    int n;
    scanf("%d\n", &n);
    set<int> S;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        S.insert(x);
        set<int>::iterator low = S.lower_bound(x);
        if (low != S.begin()){
            --low;
            printf("%d\n", *low);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}
