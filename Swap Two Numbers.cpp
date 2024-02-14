Given a two numbers num1 and num2 . Write a program to swap two numbers.

Example 1:

 Input: num1=100 , num2=50
 Output: num1=50 , num2=100
 After swapping num1 becomes 50 and num2 becomes 100
Example2:

 Input : num1=-10 , num2=10
 Output: num1=10 , num2=-10
Constraints:

-1000000 <= num1, num2 <= 1000000

//Code:

class Solution {
    public:
    pair<int, int> swapNumbers(int a, int b) {
        a = a^b;
        b = a^b;
        a = a^b;
        pair<int, int> p;
        p = make_pair(a, b);
        return p;
    }
}
