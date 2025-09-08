#include<bits/stdc++.h>
using namespace std;
int n,a,b,lder1,lder2,tmp/*tmp*/; int par[1005],grp_sz[1005]; vector<pair<int,int>>path_close; vector<int>path_cons; 

void init(){for(int i=1; i<=n; i++){par[i]=-1; grp_sz[i]=1;}}

int find(int nde){if(par[nde]==-1){return nde;} return par[nde]=find(par[nde]);}

void dsu_union(){
    if(grp_sz[lder1]>=grp_sz[lder2]){par[lder2]=lder1; grp_sz[lder1]+=grp_sz[lder2];}else{
        par[lder1]=lder2; grp_sz[lder2]+=grp_sz[lder1];
    }
}

void do_this(){
    cin>>n; init(); while(cin>>a>>b){
        lder1=find(a); lder2=find(b); if(lder1==lder2){path_close.push_back({a,b});}else{dsu_union();}
    }for(int i=1; i<=n; i++){if(par[i]==-1){path_cons.push_back(i);}} /*tmp=path_close.size();*/ cout<<path_close.size()<<endl;
    tmp=0; for(auto p : path_close){
        cout<<p.first<<" "<<p.second<<" "<<path_cons[tmp]<<" "<<path_cons[tmp+1]; tmp++; cout<<endl;
    }
}

int main(){
    do_this();
    return 0;
}
