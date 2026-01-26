class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;
        for(int i=0; i<nums.size(); i++) {
            if (freq == 0) {
                ans = nums[i];
            }
            if (ans == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }
        return ans;
    }
};
  

"C:\Users\ASUS\OneDrive\Pictures\Screenshots 1\Screenshot 2026-01-26 235138.png"