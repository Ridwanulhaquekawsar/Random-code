#include<bits/stdc++.h>
using namespace std;

int n,q,cmd,val,serial; 
map<int,priority_queue<int>>pq;

void solve(){
    cin>>n>>q;
    
    while(q--){
        cin>>cmd;
        
        if(cmd==0){
            cin>>serial>>val;
            pq[serial].push(val);
        }
        else if(cmd==1){
            cin>>serial;
            if(!pq[serial].empty()) cout<<pq[serial].top()<<'\n';
        }
        else{
            cin>>serial;
            if(!pq[serial].empty()) pq[serial].pop();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve(); return 0;
}
