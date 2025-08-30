#include<bits/stdc++.h>
using namespace std;
int t,n,arr[55],cnt1,cnt2;

void do_this(){
    cin>>t; while(t--){
        cin>>n; for(int i=0; i<n; i++){cin>>arr[i];} sort(arr,arr+n); if((arr[0]%2==0 && arr[n-1]%2==0) || (arr[0]%2==1 && arr[n-1]%2==1)){
            cout<<"0"<<endl;
        }else{
            if(arr[0]%2==0 && arr[n-1]%2!=0){
                cnt1=0; for(int i=n-1; i>=0; i--){if(arr[i]%2!=0){cnt1++;}else{break;}} cnt2=0; for(int i=0; i<n; i++){
                    if(arr[i]%2==0){cnt2++;}else{break;}
                } cout<<min(cnt1,cnt2)<<endl;
            }else{
                cnt1=0; for(int i=n-1; i>=0; i--){if(arr[i]%2==0){cnt1++;}else{break;}} cnt2=0; for(int i=0; i<n; i++){
                    if(arr[i]%2!=0){cnt2++;}else{break;}
                } cout<<min(cnt1,cnt2)<<endl;
            }
        }
        
    }
}

int main(){
    do_this();
    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------


#include<bits/stdc++.h>
using namespace std;
int t,n,i,arr[55],cnt1,cnt2;

void do_this(){
    cin>>t; while(t--){
        cin>>n; for(int i=0; i<n; i++){cin>>arr[i];} sort(arr,arr+n); if((arr[0]%2==arr[n-1]%2)){cout<<"0"<<endl;}else{
            i=0; cnt1=0; while(arr[i]%2!=arr[n-1]%2){i++; cnt1++;} i=n-1; cnt2=0; while(arr[i]%2!=arr[0]%2){i--; cnt2++;} cout<<min(cnt1,cnt2)<<endl;
        }
        
    }
}

int main(){
    do_this();
    return 0;
}

    
