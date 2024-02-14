Given an integer num, return a string representing its hexadecimal representation. For negative integers, two’s complement method is used.

All the letters in the answer string should be lowercase characters, and there should not be any leading zeros in the answer except for the zero itself.

Note: You are not allowed to use any built-in library method to directly solve this problem.

Example 1:

Input: num = 26 
Output: "1a"
Explanation: 
Example 2:

Input: num = -1 
Output: "ffffffff"
Explanation: 
Constraints:

-
2
31
2 
31
  <= num <= 
2
31
2 
31
  - 1




//Code:

class Solution {
public:
	string toHex(int num) {
        //map dec to hexa, 0-9 are
        //alphabates a-f for 10 to 15
		map<int, char> m;

        char digit = '0';
        char c = 'a';

        for(int i=0; i<=15; i++) {
            if(i < 10) {
                m[i] = digit++;
            } 
            else {
                m[i] = c++;
            }
        }

        //string for returning answer
        string res = "";

        //if num are 0 then directly return 0
        if(num == 0) return "0";

        if(num > 0) {
            while(num) {
                res = m[num%16] + res;
                num /= 16;
            }
        }
        else {
            u_int n = num;
            while(n) {
                //use the remainder technique
                res = m[n%16] + res;
                n /= 16;
            }
        }
        return res;
	}
};
