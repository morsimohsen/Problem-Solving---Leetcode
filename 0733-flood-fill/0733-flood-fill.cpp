class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int newColor = image[sr][sc];
        if (newColor != color) dfs(image, sr, sc, newColor, color);
        return image;
    }
    void dfs(vector<vector<int>>& image, int r, int c, int newColor, int color) {
        if (image[r][c] == newColor) {
            image[r][c] = color;
            if (r >= 1) dfs(image, r-1, c, newColor, color);
            if (c >= 1) dfs(image, r, c-1, newColor, color);
            if (r+1 < image.size()) dfs(image, r+1, c, newColor, color);
            if (c+1 < image[0].size()) dfs(image, r, c+1, newColor, color);
        }
    }
};