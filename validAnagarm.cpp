class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s==t;
        
    }
};

https://youtu.be/WdsnnLSbqIA?si=zLzWOzn_a2s0TaHK