#include<bits/stdc++.h>
using namespace std;
int n,cnt;

void do_this(){
    cin>>n; map<int,int>fr; vector<int>arr(n); int i=0,cnt=0; while(i<n){
        cin>>arr[i]; fr[arr[i]]++; i++;
    }for(auto &[key,count] : fr){
        if(fr.count(key+1)){cnt+=count;}
    }cout<<cnt;
}

int main(){
    do_this();
    return 0;
}
