#include<bits/stdc++.h>
using namespace std;
string s; int odd,tmp,tmp1,tmp2,n;
char odd_char;

void solve(){
    cin>>s; n=s.size();
    map<char,int>char_fr;
    deque<char>dq;
    
    for(auto &c : s) char_fr[c]++;
    
    odd=0;
    for(auto &[c,fr] : char_fr){
        if(fr%2==1){
            odd++;
            odd_char=c;
        }
    }    
    
    
    if(n%2==1){
        if(odd==1){
            tmp=char_fr[odd_char];
            while(tmp--) dq.push_front(odd_char);
            
            for(auto &[c,fr] : char_fr){
                if(c!=odd_char){
                    tmp1=fr/2,tmp2=tmp1;
                    
                    while(tmp1--) dq.push_front(c);
                    while(tmp2--) dq.push_back(c);
                }
            }
            
            
            for(auto &c : dq) cout<<c;
        }
        else cout<<"NO SOLUTION";
    }
    else{
        if(odd==0){
            for(auto &[c,fr] : char_fr){
                tmp=fr/2,tmp1=tmp;
                
                while(tmp--) dq.push_front(c);
                while(tmp1--) dq.push_back(c);
            }
            
            for(auto &c : dq) cout<<c;
        }
        else cout<<"NO SOLUTION";
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
}
