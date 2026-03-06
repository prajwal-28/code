class NumArray {
private:
    
    vector<int> prefix; 

public:
    
    NumArray(vector<int>& nums) {
        
        prefix.push_back(0); 
        
        int runningTotal = 0;
        
        
        for (int i = 0; i < nums.size(); i++) {
            runningTotal += nums[i];
            prefix.push_back(runningTotal);
        }
    }
    
    
    int sumRange(int left, int right) {
        
        return prefix[right + 1] - prefix[left];
    }
};