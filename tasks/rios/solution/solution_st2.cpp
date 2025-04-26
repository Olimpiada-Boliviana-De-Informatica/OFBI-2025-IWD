#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,k;
    vector<int> V;
    cin>>n;
    cin>>k;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        V.push_back(x);
    }
    int max = -1;
    for(int i=0; i<V.size()-1; i++){
        int diff = V[i+1]-V[i];
        if (diff > max){
            max = diff;
        }
    }
    cout<<max<<endl;
}