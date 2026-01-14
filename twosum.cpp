class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n = nums.size();
        for(int i = 0;i<n;i++) {
            int num = nums[i];
            int moreNeeded = target - num;
            if(mpp.find(moreNeeded) != mpp.end()) {
                return {mpp[moreNeeded], i};

            }
            mpp[num] = i;
        }
        return {-1,-1};
    }
};



// understanding

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;                       // Flow: Map khali bana, abhi kuch nahi rakha
        int n = nums.size();                    // Flow: n = 3, array mein 3 elements hain
        for(int i = 0; i<n; i++) {              // Flow: loop shuru, i=0 se shuru
            int num = nums[i];                  // i=0 → num = 3
            int moreNeeded = target - num;      // moreNeeded = 6-3 = 3
            if(mpp.find(moreNeeded) != mpp.end()) {   // Map khali hai → 3 nahi mila
                return {mpp[moreNeeded], i};    // Ye line abhi nahi chali (condition false)
            }
            mpp[num] = i;                       // Flow: mpp mein 3 → 0 daal diya
                                                // Ab map: {3:0}
        }  // ← i++ → ab i=1

        // i=1
            int num = nums[i];                  // num = 2
            int moreNeeded = target - num;      // moreNeeded = 6-2 = 4
            if(mpp.find(moreNeeded) != mpp.end()) {   // 4 map mein hai? → nahi
                return {mpp[moreNeeded], i};    // condition false, ye line skip
            }
            mpp[num] = i;                       // Flow: mpp mein 2 → 1 daal diya
                                                // Ab map: {3:0, 2:1}
        }  // ← i++ → ab i=2

        // i=2
            int num = nums[i];                  // num = 4
            int moreNeeded = target - num;      // moreNeeded = 6-4 = 2
            if(mpp.find(moreNeeded) != mpp.end()) {   // 2 map mein hai? → HAAN (index 1 pe)
                return {mpp[moreNeeded], i};    // ← Yahan se return hota hai
                                                // return {1, 2}
            }
            mpp[num] = i;                       // Ye line kabhi nahi chali kyuki upar return ho gaya

        return {-1,-1};                         // Ye line bhi nahi chali kyuki answer mil chuka tha
    }
};