class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int idx = digits.size() - 1;           // Flow: last digit se shuru karte hain
        
        while(idx >= 0) {                      // Flow: jab tak left side digits bache hain
            
            if(digits[idx] == 9) {             // Agar current digit 9 hai
                digits[idx] = 0;               // toh ise 0 kar do
                idx--;                         // aur peeche wale digit pe jao
            }
            else {                             // Agar 9 nahi hai (0 se 8 tak)
                digits[idx] += 1;              // bas isme +1 kar do
                return digits;                 // aur yahin kaam khatam – return kar do
            }
        }
        
        // Agar yahan tak aaye matlab saare digits 9 the
        // jaise [9,9,9] → [0,0,0] ban chuka hai
        // ab shuru mein 1 daalna padega
        
        digits.insert(digits.begin(), 1);      // Flow: array ke shuru mein 1 daal do
        return digits;
    }
};
