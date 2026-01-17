int removeDuplicates(vector<int>& nums) {
    
    int insertIndex = 1;    // Flow: hum 1 se shuru kar rahe hain
                            // Kyunki 0th index hamesha unique rahega (sorted array mein)

    for(int i = 1; i < nums.size(); i++) {   // Flow: i=1 se shuru, pehla element toh already rakha hai
        
        if(nums[i-1] != nums[i]) {           // Flow: agar current element pichhle element se ALAG hai
                                             //       matlab ye naya unique element hai
            
            nums[insertIndex] = nums[i];     // Flow: is naye unique element ko 
                                             //       insertIndex ki position pe daal do
            
            insertIndex++;                   // Flow: agle unique element ke liye jagah aage badha do
        }
        // Agar nums[i-1] == nums[i] → duplicate hai → kuch nahi karna, bas i aage badhao
    }

    return insertIndex;                      // Flow: insertIndex = kitne unique elements hain
}