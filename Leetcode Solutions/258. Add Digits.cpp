class Solution {
public:
    int addDigits(int num) {
        num %= 9;
        return (num > 0) ? (((num%9) == 0) ? 9 : (num%9)): 0;
    }
};
