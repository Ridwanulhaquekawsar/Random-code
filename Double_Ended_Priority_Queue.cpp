#include<bits/stdc++.h>
using namespace std;

int n,q,val,cmd; multiset<int>ml;

void solve(){
    cin>>n>>q;
    
    for(int i=1; i<=n; i++){ 
        cin>>val;
        ml.insert(val);
    }    
    
    while(q--){
        cin>>cmd;
        
        if(cmd==0){
            cin>>val;
            ml.insert(val);
        }
        else if(cmd==1){
            cout<<*ml.begin()<<'\n';
            ml.erase(ml.begin());
        }
        else{
            cout<<*prev(ml.end())<<'\n';
            ml.erase(prev(ml.end()));
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve(); return 0;
}
