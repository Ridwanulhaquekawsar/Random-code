#include<bits/stdc++.h>
using namespace std;
int par[100005],grp_sz[100005],n,e,a,b,lder1,lder2;

int find(int nde){if(par[nde]==-1){return nde;} return par[nde]=find(par[nde]);}

void dsu_union(int nde1,int nde2){
    lder1=find(nde1); lder2=find(nde2); if(grp_sz[lder1]>=grp_sz[lder2]){par[lder2]=lder1; grp_sz[lder1]+=grp_sz[lder2];}else{
        par[lder1]=lder2; grp_sz[lder2]+=grp_sz[lder1];
    }
}

void do_this(){
    memset(par,-1,sizeof(par)); memset(grp_sz,1,sizeof(grp_sz)); cin>>n>>e; vector<int>path; while(e--){
        cin>>a>>b; if(find(a)!=find(b)){dsu_union(a,b);}
    }for(int i=1; i<=n; i++){if(par[i]==-1){path.push_back(i);}} cout<<path.size()-1<<endl; for(int i=0; i<path.size()-1; i++){
        cout<<path[i]<<" "<<path[i+1]<<endl;
    }
}

int main(){
    do_this();
    return 0;
}
