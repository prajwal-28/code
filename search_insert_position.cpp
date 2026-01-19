class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {         // nums={1,3,5,6,9} target=4
        int low = 0;
        int high = nums.size() - 1;    

        while (low <= high) {
            int mid = low + (high - low) / 2;  // idx 2 is mid i.e 5

            if (nums[mid] == target) {   // 5 =! 4
                return mid;
            } else if (nums[mid] < target) {  //5<4 ? no
                low = mid + 1;
            } else {
                high = mid - 1;  // 2-1=1 , idx 1 is new high i.e 3 is new high. low stays 0 as it is. 
            }
        }

        return low;  
    }
};


Step, low, high, mid, nums[mid],Comparison ,Kya hota hai   ,  Next action
1    ,0,  4,      2,      5,        5 > 4,  high = mid-1 = 1, left side dekho
2,    0,  1       ,0,      1,       1 < 4,  low = mid+1 = 1,  right side dekho
3,    1,  1       ,1,       3,      3 < 4,   low = mid+1 = 2,  low > high ho gaya
4,     2, 1,      —,        —,    loop khatam      —,            return low = 2
                                  (low > highh)