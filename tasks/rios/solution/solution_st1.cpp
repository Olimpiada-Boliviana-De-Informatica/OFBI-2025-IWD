#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, k;
    vector<int> V;
    cin>>n;
    cin>>k;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        V.push_back(x);
    }
    cout<<V[1]-V[0]<<endl;
}