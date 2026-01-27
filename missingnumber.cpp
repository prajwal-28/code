class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int ans = n; // Start with n because the loop only goes up to n-1
    for (int i = 0; i < n; i++) {
        ans = ans ^ i ^ nums[i]; // XOR index and array element
    }
    return ans;
}
};

gemini - leetcode missing number explained