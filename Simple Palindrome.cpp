#include<bits/stdc++.h>
using namespace std;
int t,n,i=0;

void do_this(){
    vector<char>vowel={'a','e','i','o','u'};

    cin>>t; string ans;
    
    while(t--){
        ans.clear(); cin>>n; 

        while(n--){
            ans+=vowel[i]; i++;
            if(i==5){i=0;}
        }sort(ans.begin(),ans.end()); cout<<ans<<'\n';

    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    do_this();
    return 0;
}
