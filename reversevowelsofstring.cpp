class Solution {
private:
    // A quick helper tool to check if a letter is a vowel
    bool isVowel(char c) {
        // Convert to lowercase just to make checking easier
        c = tolower(c); 
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

public:
    string reverseVowels(string s) {
        // Step 1: Place our two pointers
        int left = 0;
        int right = s.length() - 1;
        
        // Step 2: Keep going until the pointers meet in the middle
        while (left < right) {
            
            // Step 3: Slide the left pointer forward until it hits a vowel
            while (left < right && !isVowel(s[left])) {
                left++;
            }
            
            // Step 4: Slide the right pointer backward until it hits a vowel
            while (left < right && !isVowel(s[right])) {
                right--;
            }
            
            // Step 5: If both pointers found a vowel, swap them!
            if (left < right) {
                swap(s[left], s[right]); // 'swap' is a built-in C++ magic trick!
                left++;
                right--;
            }
        }
        
        // Step 6: Return the newly modified string
        return s;
    }
};
