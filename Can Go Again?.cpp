#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pinf LLONG_MAX
ll n,e,a,b,c,src,t,dst; ll dis[1005]; bool cycle;

class Edge{
    public:
       ll a,b,c;
    Edge(ll a,ll b,ll c){
        this->a=a; this->b=b; this->c=c;
    }
};

vector<Edge>edge_lst; void init(ll n){for(ll i=0; i<=n; i++){dis[i]=pinf;}}

void bellmanford(){
    for(ll i=0; i<n-1; i++){
        for(auto [a,b,c] : edge_lst){
            if(dis[a]!=pinf){dis[b]=min(dis[b],dis[a]+c);}
        }
    }for(auto [a,b,c] : edge_lst){if(dis[a]!=pinf && dis[a]+c<dis[b]){cycle=true;}}
}

void do_this(){
    cin>>n>>e; init(n); while(e--){cin>>a>>b>>c; edge_lst.push_back(Edge(a,b,c));} cin>>src>>t; dis[src]=0; cycle=false;
    bellmanford();
    while(t--){
        cin>>dst; if(!cycle){
            dis[dst]==pinf ? cout<<"Not Possible"<<endl : cout<<dis[dst]<<endl;
        }
    }if(cycle){cout<<"Negative Cycle Detected";}
}

int main(){
    do_this();
    return 0;
}
