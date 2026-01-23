class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) { 
            ans = ans ^ nums[i]; 
        }
        return ans;
    }
};

https://youtu.be/NWg38xWYzEg?si=XiejwBek2fJVo1qc