#include <sstream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string> words;
        stringstream ss(s);
        string currentWord;
        
        while (ss >> currentWord) {
            words.push_back(currentWord);
        }
        
        
        if (pattern.length() != words.size()) {
            return false;
        }
        
        
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;
        
        
        for (int i = 0; i < pattern.length(); i++) {
            char c = pattern[i];
            string w = words[i];
            
            
            if (charToWord.count(c) > 0 && charToWord[c] != w) {
                return false;
            }
            
            
            if (wordToChar.count(w) > 0 && wordToChar[w] != c) {
                return false;
            }
            
            
            charToWord[c] = w;
            wordToChar[w] = c;
        }
        
        
        return true;
    }
};