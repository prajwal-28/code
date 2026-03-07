class Solution {
private:
    void DFS(vector<vector<int>>& image, int i, int j, int newColor, int originalColor) {
        
        if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size() || 
            image[i][j] == newColor || image[i][j] != originalColor) {
            return;
        }
        
        
        image[i][j] = newColor;
        
        
        DFS(image, i - 1, j, newColor, originalColor); // Top
        DFS(image, i, j + 1, newColor, originalColor); // Right
        DFS(image, i + 1, j, newColor, originalColor); // Bottom
        DFS(image, i, j - 1, newColor, originalColor); // Left
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int originalColor = image[sr][sc];
        
        
        DFS(image, sr, sc, color, originalColor);
        
        
        return image;
    }
};