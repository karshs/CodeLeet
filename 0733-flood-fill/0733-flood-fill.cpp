class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>& ans,vector<vector<int>>& image, int newcolor, int dx[], int dy[], int ini){
        ans[row][col] = newcolor;
        int n = image.size();
        int m = image[0].size();

        for(int i = 0; i<4; i++){
            int nrow = row + dx[i];
            int ncol = col + dy[i];

            if(nrow>=0 && nrow <n && ncol >=0 && ncol < m && image[nrow][ncol] == ini && ans[nrow][ncol] != newcolor){
                dfs(nrow, ncol, ans, image, newcolor, dx, dy, ini);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int ini = image[sr][sc];
        vector<vector<int>> ans = image;

        int dx[] = {-1,0,+1, 0};
        int dy[] = {0,+1,0, -1};

        dfs(sr,sc,ans, image, color , dx, dy, ini);

        return ans;
        
    }
};