class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int carry = 0;
        string result = "";
        
        // Continue looping as long as there are digits left in either string, 
        // or there is a leftover carry to process.
        while (i >= 0 || j >= 0 || carry) {
            // Extract the current digit, or use 0 if we've exhausted the string
            int digit1 = i >= 0 ? num1[i] - '0' : 0;
            int digit2 = j >= 0 ? num2[j] - '0' : 0;
            
            int sum = digit1 + digit2 + carry;
            
            // Calculate the carry for the next position
            carry = sum / 10;
            
            // Append the rightmost digit of the sum to our result
            result += to_string(sum % 10);
            
            i--;
            j--;
        }
        
        // Since we built the string from right to left, we need to reverse it at the end
        reverse(result.begin(), result.end());
        
        return result;
    }
};