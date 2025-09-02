#include<bits/stdc++.h>
using namespace std;
int n,e,q,a,b,c,src,dst; long long int adj_mat[505][505];

void floydwarshall(){
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(adj_mat[i][k]!=LLONG_MAX && adj_mat[k][j]!=LLONG_MAX && adj_mat[i][k]+adj_mat[k][j]<adj_mat[i][j]){
                    adj_mat[i][j]=adj_mat[i][k]+adj_mat[k][j];
                }
            }
        }
    }
}

void do_this(){
    cin>>n>>e>>q;  for(int i=1; i<=n; i++){for(int j=1; j<=n; j++){if(i==j){adj_mat[i][j]=0;}else{adj_mat[i][j]=LLONG_MAX;}}}
    while(e--){cin>>a>>b>>c; adj_mat[a][b]=min(adj_mat[a][b],1LL*c); adj_mat[b][a]=min(adj_mat[b][a],1LL*c);} floydwarshall(); while(q--){
        cin>>src>>dst; if(adj_mat[src][dst]!=LLONG_MAX){cout<<adj_mat[src][dst]<<endl;}else{cout<<"-1"<<endl;}
    }
}

int main(){
    do_this();
    return 0;
}
