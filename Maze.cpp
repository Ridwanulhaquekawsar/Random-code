#include<bits/stdc++.h>
using namespace std;
int row,col,si,sj,nde_i,nde_j,di,dj,pi,pj,ci,cj; bool vis[1005][1005]; char grid[1005][1005]; vector<pair<int,int>>mov={{0,1},{0,-1},{-1,0},{1,0}}; 
pair<int,int> prnt[1005][1005]; bool isvalid(int i,int j){return i>=0 && i<row && j>=0 && j<col;}

void bfs(int si,int sj){
    queue<pair<int,int>>q({{si,sj}}); vis[si][sj]=true; while(!q.empty()){
        pi=q.front().first; pj=q.front().second; q.pop(); for(auto mv : mov){
            ci=pi+mv.first; cj=pj+mv.second; if(isvalid(ci,cj) && !vis[ci][cj] && (grid[ci][cj]=='.' || grid[ci][cj]=='D')){
                vis[ci][cj]=true; prnt[ci][cj]={pi,pj}; q.push({ci,cj});
            }
        }
    }
}

void do_this(){
    cin>>row>>col; for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){cin>>grid[i][j]; if(grid[i][j]=='R'){si=i,sj=j;}else if(grid[i][j]=='D'){di=i; dj=j;}}
    }bfs(si,sj); if(!vis[di][dj]){for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout<<grid[i][j];} cout<<endl;}}
    else{
        nde_i=prnt[di][dj].first; nde_j=prnt[di][dj].second; while(grid[nde_i][nde_j]!='R'){
            grid[nde_i][nde_j]='X'; pi=prnt[nde_i][nde_j].first; pj=prnt[nde_i][nde_j].second; nde_i=pi; nde_j=pj;
        }for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout<<grid[i][j];} cout<<endl;}
    }
}

int main(){
    do_this();
    return 0;
}
