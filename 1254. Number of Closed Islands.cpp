class Solution {
public:
    int tl=0,rem,n,m,ci,cj; bool found=false; vector<pair<int,int>>mov={{0,1},{0,-1},{-1,0},{1,0}}; bool vis[105][105];

    bool isvalid(int i,int j){return i>=0 && i<n && j>=0 && j<m;}

    void dfs(int pi,int pj,vector<vector<int>>& grid){
        for(auto mv : mov){
            ci=pi+mv.first; cj=pj+mv.second; if(!isvalid(ci,cj)){found=true;}else{if(!vis[ci][cj] && grid[ci][cj]==0){vis[ci][cj]=true; dfs(ci,cj,grid);}}
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        n=grid.size(); m=grid[0].size(); memset(vis,false,sizeof(vis)); 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==0 && !vis[i][j]){vis[i][j]=true; tl++; dfs(i,j,grid); if(found){rem++; found=false;}}
            }
        }return tl-rem;
    }
};
