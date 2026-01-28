#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    
    int getValue(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return -1; 
        }
    }

    int romanToInt(string s) {
        int ans = 0; 
        int n = s.size();

        
        for (int i = 0; i < n - 1; i++) {
            
            if (getValue(s[i]) < getValue(s[i + 1])) {
                
                ans -= getValue(s[i]);
            } else {
                
                ans += getValue(s[i]);
            }
        }

        
        ans += getValue(s[n - 1]);

        return ans;
    }
};

https://youtu.be/dQ9mIlsLrkc?si=cuN67BTnc6hScQWx
gemini - roman to interger code explained