class Solution {
public:
    int row,col,ci,cj,cnt=0; vector<pair<int,int>>mov={{0,1},{0,-1},{-1,0},{1,0}}; bool vis[500][500]; bool fnd; bool isvalid(int i,int j){return i>=0 && i<row && j>=0 && j<col;}

    void dfs(int si,int sj,vector<vector<int>>& grid1,vector<vector<int>>& grid2){
        for(auto mv : mov){ci=si+mv.first; cj=sj+mv.second; if(isvalid(ci,cj) && !vis[ci][cj] && grid2[ci][cj]){vis[ci][cj]=true; if(grid1[ci][cj]!=1){fnd=false;} dfs(ci,cj,grid1,grid2);}}
    }

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2){
        row=grid2.size(); col=grid2[0].size(); memset(vis,false,sizeof(vis)); for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid2[i][j]==1 && !vis[i][j]){vis[i][j]=true; fnd=true; if(grid1[i][j]!=1){fnd=false;} dfs(i,j,grid1,grid2); if(fnd){cnt++;}}
            }
        }return cnt;
    }
};
