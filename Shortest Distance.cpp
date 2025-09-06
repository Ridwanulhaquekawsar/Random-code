#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pinf LLONG_MAX
ll n,e,a,b,c,q,src,dst; ll dis[105][105]; void init(){
    for(ll i=1; i<=n; i++){for(ll j=1; j<=n; j++){if(i==j){dis[i][j]=0;} else{dis[i][j]=pinf;}}}
}

void floyd_warshall(){
    for(ll k=1; k<=n; k++){
        for(ll i=1; i<=n; i++){
            for(ll j=1; j<=n; j++){
                if(dis[i][k]!=pinf && dis[k][j]!=pinf){dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);}
            }
        }
    }
}

void do_this(){
    cin>>n>>e; init(); while(e--){cin>>a>>b>>c; dis[a][b]=min(dis[a][b],c);} floyd_warshall(); cin>>q; while(q--){
        cin>>src>>dst; dis[src][dst]==pinf ? cout<<"-1"<<endl : cout<<dis[src][dst]<<endl;
    }
}

int main(){
    do_this();
    return 0;
}
