// Write a function to find the longest common prefix string amongst an array of strings.

//If there is no common prefix, return an empty string "".

 

//Example 1:

//Input: strs = ["flower","flow","flight"]
//Output: "fl"
//Example 2:

//Input: strs = ["dog","racecar","car"]
//Output: ""
//Explanation: There is no common prefix among the input strings

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Sort the array to get first and last strings
        sort(strs.begin(), strs.end());

        // Get the first and last strings after sorting
        string first = strs[0];
        string last = strs[strs.size() - 1];

        // Compare characters one by one
        string result = "";
        for (int i = 0; i < first.length(); i++) {
            if (first[i] == last[i]) {
                result += first[i];
            } else {
                break;
            }
        }

        return result;
    }
};



// undeerstand ; code below is but different but undertandable for logic 


public String longestCommonPrefix(String[] strs) {

    StringBuilder result = new StringBuilder();     // Flow: ek khali dabba banaya jisme common prefix jama karenge

    // Sabse important trick yahan hai ↓
    Arrays.sort(strs);                              // Flow: poore strings ko sort kar diya
                                                    //       ab sabse chhota aur sabse bada string 
                                                    //       array ke start aur end mein aa gaye

    // Ab sorted array aisa dikhega:
    // strs[0] → "flight"
    // strs[1] → "flow"
    // strs[2] → "flower"

    char[] first = strs[0].toCharArray();           // Flow: sabse pehla string (lexicographically smallest)
                                                    //       → "flight" → ['f','l','i','g','h','t']

    char[] last = strs[strs.length-1].toCharArray(); // Flow: sabse aakhiri string (lexicographically largest)
                                                     //       → "flower" → ['f','l','o','w','e','r']

    // Ab sirf in dono strings ko compare karenge
    // Kyunki agar inme common prefix hai to baaki sab mein bhi wahi hoga (sorting ki wajah se)

    for(int i = 0; i < first.length; i++) {         // Flow: pehle string ke har character ko check karte hain

        if(i >= last.length || first[i] != last[i]) {  // Flow: do cheezein check hoti hain
                                                        // 1. agar i last string se bada ho gaya
                                                        // 2. ya character match nahi kar rahe
            break;                                      // Flow: jitna common tha utna hi kaafi hai → ruk jao
        }

        result.append(first[i]);                        // Flow: agar dono character same hain to result mein daal do
    }

    return result.toString();                           // Flow: StringBuilder ko String banake return kar diya
}