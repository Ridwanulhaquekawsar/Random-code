#include<bits/stdc++.h>
using namespace std;
int n,e,q,a,b,c,src,dst; int adj_mat[505][505];

void floydwarshall(){
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(adj_mat[i][k]!=INT_MAX && adj_mat[k][j]!=INT_MAX && adj_mat[i][k]+adj_mat[k][j]<adj_mat[i][j]){
                    adj_mat[i][j]=adj_mat[i][k]+adj_mat[k][j];
                }
            }
        }
    }
}

void do_this(){
    cin>>n>>e>>q;  for(int i=1; i<=n; i++){for(int j=1; j<=n; j++){if(i==j){adj_mat[i][j]=0;}else{adj_mat[i][j]=INT_MAX;}}}
    while(e--){cin>>a>>b>>c; adj_mat[a][b]=c; adj_mat[b][a]=c;} floydwarshall(); while(q--){
        cin>>src>>dst; if(adj_mat[src][dst]!=INT_MAX){cout<<adj_mat[src][dst]<<endl;}else{cout<<"-1"<<endl;}
    }
}

int main(){
    do_this();
    return 0;
}
