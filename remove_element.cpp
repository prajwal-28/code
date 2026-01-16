// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

//Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

//Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
//Return k


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i< nums.size(); i++) {
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;

        
    }
};


// understand

int removeElement(vector<int>& nums, int val) {
    int k = 0;                           // Flow: k starts at 0
                                         // k will count how many good elements we have
                                         // (good = not equal to val)

    for(int i = 0; i < nums.size(); i++) {   // Flow: i goes through every position in array
        if(nums[i] != val) {                 // Flow: If current element is NOT val
                                             // → we want to keep it
            nums[k] = nums[i];               // Flow: Copy this good element to position k
            k++;                             // Flow: Move k forward (we have one more good element)
        }
        // If nums[i] == val → we simply skip it (do nothing)
    }

    return k;                                // Flow: Finally return how many good elements we kept
}