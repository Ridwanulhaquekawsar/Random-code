#include<bits/stdc++.h>
using namespace std;
int t,a,b,c,second,first;

void do_this(){
    cin>>t; while(t--){
        cin>>a>>b>>c; first=a-1; second = (b>c ? b-1 : abs(b-c)+(c-1));
        cout<< (first==second ? 3 : (first<second ? 1 : 2)) <<endl;
    }
}

int main(){
    do_this();
    return 0;
}
