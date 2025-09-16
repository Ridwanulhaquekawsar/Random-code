#include<bits/stdc++.h>
using namespace std;
int t,n,cons_dot,dot; string s;

void  do_this(){
    cin>>t; while(t--){
        dot=0; cons_dot=0; cin>>n>>s;  for(auto c : s){
            if(c=='.'){dot++; cons_dot++; if(cons_dot==3){break;}}else{cons_dot=0;}
        }cout<<((cons_dot<3) ? dot : 2)<<endl;
    }
}

int main(){
    do_this();
    return 0;
}
