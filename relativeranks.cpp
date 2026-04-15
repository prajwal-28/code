#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> result(n);
        
        
        vector<pair<int, int>> rankMap;
        for (int i = 0; i < n; i++) {
            rankMap.push_back({score[i], i});
        }
        
        
        sort(rankMap.rbegin(), rankMap.rend());
        
        for (int i = 0; i < n; i++) {
            int originalIdx = rankMap[i].second;
            
            if (i == 0) {
                result[originalIdx] = "Gold Medal";
            } else if (i == 1) {
                result[originalIdx] = "Silver Medal";
            } else if (i == 2) {
                result[originalIdx] = "Bronze Medal";
            } else {
                result[originalIdx] = to_string(i + 1);
            }
        }
        
        return result;
    }
};