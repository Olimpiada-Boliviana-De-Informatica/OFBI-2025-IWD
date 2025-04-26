#include <bits/stc++.h>
using namespace std;
vector<int> V;
int n,k;
bool comprobar(int c) {
    int x = 0;
    int 
    for(int i = 0; i < n; i++){
        
    }
}

int main (){
    cin>>n>>k;
    int diff_m = -1;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        V.push_back(x);
        if(i){
            int diff = V[i]-V[-1];
            if (diff > diff_m){
                diff_m = diff;
            }
        }
    }
    int a = 0, b = n;
    while(b-a != 1){
        int c = (b+a)/2;
        if(comprobar(c)){
            b = c;
        } else {
            a = c;
        }
    }
    printf("%d\n", b)
    return 0;
}