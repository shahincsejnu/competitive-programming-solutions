class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int sum = 0;
        int n = chalk.size();

        for(int i = 0; i < n; i++) sum += chalk[i];

        k %= sum;

        for(int i = 0; i < n; i++){
            if(k < chalk[i]) return i;
            k -= chalk[i];
        }

        return n-1;
    }
};