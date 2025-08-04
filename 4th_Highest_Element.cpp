#include<bits/stdc++.h> 
using namespace std;

vector<int>mxhp; int cur_idx,par_idx,p,left_val,right_val,left_idx,right_idx;

void make_mxhp(int x){
    mxhp.push_back(x); cur_idx=mxhp.size()-1; while(cur_idx>0){
        par_idx=(cur_idx-1)/2; if(mxhp[par_idx]<mxhp[cur_idx]){swap(mxhp[par_idx],mxhp[cur_idx]); cur_idx=par_idx;} else{break;} 
    }
}

void dlt_mxhp(){
    mxhp[0]=mxhp.back(); mxhp.pop_back(); cur_idx=0; while(1){
        left_idx=(cur_idx*2)+1; right_idx=(cur_idx*2)+2;
        
        left_val=(left_idx<mxhp.size()) ? mxhp[left_idx] : INT_MIN;
        right_val=(right_idx<mxhp.size()) ? mxhp[right_idx] : INT_MIN;
        
        if(left_val>=right_val && left_val>mxhp[cur_idx]){
            swap(mxhp[left_idx],mxhp[cur_idx]); cur_idx=left_idx;
        }else if(right_val>left_val && right_val>mxhp[cur_idx]){swap(mxhp[right_idx],mxhp[cur_idx]); cur_idx=right_idx;} else{
            break;
        }
    }
}

int getFourthLargest(int arr[], int n){
    if(n<4){return -2147483648;} mxhp.clear(); for(int i=0; i<n; i++){make_mxhp(arr[i]);} int q=3; while(q--){dlt_mxhp();} return mxhp[0];
}
