class Solution {
public:
    int addDigits(int num) {
        if(num==0)
        return 0;
        else if(num%9==0)
        return 9;
        else
        return num%9;
    }
};
/*Approach
If `num` is `0`, return `0`. Otherwise, calculate `num % 9`. If the remainder is `0`, return `9`; otherwise, return the remainder.

 Intuition
The repeated sum of digits (digital root) of a positive number follows the `% 9` property. Therefore, instead of repeatedly adding the digits, we can directly get the answer using `num % 9`.

 Time Complexity
O(1), since we perform only a constant number of arithmetic operations.

Space Complexity
O(1), since no extra space is used.
*/