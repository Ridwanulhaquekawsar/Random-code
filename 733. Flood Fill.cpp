class Solution {
public:
    vector<pair<int,int>>mov={{0,1},{0,-1},{-1,0},{1,0}}; vector<vector<int>>*image1; int old_clr,new_clr,n,m,ci,cj;

    void dfs(int si,int sj){
            (*image1)[si][sj]=new_clr; for(auto mv : mov){
                ci=si+mv.first; cj=sj+mv.second; if(!(ci<0 || ci>=n || cj<0 || cj>=m) && (*image1)[ci][cj]==old_clr){dfs(ci,cj);}
            }
        
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        image1=&image; old_clr=image[sr][sc]; new_clr=color; n=image.size(); m=image[0].size(); if(old_clr==new_clr){return image;} dfs(sr,sc); return image;
    }
};
