#include <bits/stdc++.h>
using namespace std;
vector<int> V;
int n,k;
bool comprobar(int d) {
    long long diff;
    long long sum = 0;
    int saltos = 0;
    for(int i = 0; i < n; i++){
        if (i==0)
            diff = V[i];
        else
            diff = V[i] - V[i-1];
        sum = sum + diff;
        if(diff > d) return false;
        if(sum > d){
            saltos++;
            sum=0;
        }
    }
    if (saltos > k) return false;
    return true;
}

int main (){
    cin>>n>>k;
    long long sum = 0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        V.push_back(x);
        sum+=x;
    }
    long long a = 0, b = sum;
    while(b-a != 1){
        long long  c = (b+a)/2;
        if(comprobar(c)){
            b = c;
        } else {
            a = c;
        }
    }
    printf("%d\n", b);
    return 0;
}