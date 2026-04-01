#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cctype>

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> validWords;
        unordered_map<char, int> charToRow;
        
        
        string rows[3] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        for (int i = 0; i < 3; i++) {
            for (char c : rows[i]) {
                charToRow[c] = i;
                charToRow[toupper(c)] = i; 
            }
        }
        
        
        for (string word : words) {
            if (word.empty()) continue;
            
            
            int targetRow = charToRow[word[0]];
            bool isOneRow = true;
            
        
            for (int i = 1; i < word.length(); i++) {
                if (charToRow[word[i]] != targetRow) {
                    isOneRow = false;
                    break; 
                }
            }
            
            
            if (isOneRow) {
                validWords.push_back(word);
            }
        }
        
        return validWords;
    }
};