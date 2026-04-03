class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> map1;
        vector<string> result;
        int minSum = INT_MAX; 
        
        
        for (int i = 0; i < list1.size(); i++) {
            map1[list1[i]] = i;
        }
        
        
        for (int j = 0; j < list2.size(); j++) {
            
            if (map1.count(list2[j])) {
                int currentSum = j + map1[list2[j]];
                
                
                if (currentSum < minSum) {
                    result.clear(); 
                    result.push_back(list2[j]);
                    minSum = currentSum; 
                } 
                
                else if (currentSum == minSum) {
                    result.push_back(list2[j]);
                }
            }
        }
        
        return result;
    }
};