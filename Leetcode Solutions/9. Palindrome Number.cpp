class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        string s = to_string(x);
        string ss = s;


        reverse(ss.begin(), ss.end());

        return s == ss;
    }
};