class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for (int i = 0; i < numRows; i++) {
            // Each row 'i' has 'i + 1' elements, all initialized to 1
            vector<int> row(i + 1, 1);
            
            // Fill the middle elements (excluding the first and last which remain 1)
            for (int j = 1; j < i; j++) {
                // The value is the sum of the two elements directly above it
                row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
            
            // Add the completed row to the final answer list
            ans.push_back(row);
        }
        
        return ans;
    }
};

gemini chat - leetcode pascal's traingle leetcode solution 