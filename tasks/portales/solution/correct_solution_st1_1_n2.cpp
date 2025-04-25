#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<int> V;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        V.push_back(x);
        int sol = 0;
        for(int j = 0; j < V.size(); j++) {
            if (V[j] < x && V[j] > sol){
                sol = V[j];
            } 
        }
        if (sol == 0)
            cout<<-1<<endl;
        else
            cout<<sol<<endl;
    }
    return 0;
}