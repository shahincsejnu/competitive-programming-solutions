class Solution {
public:
    bool reorderedPowerOf2(int N) {
        map<string, int> mp;

        for(int i = 1; i <= N; i *= 2){
            string s = "";

            int d = i;

            while(d){
                s += (d%10)+'0';
                d /= 10;
            }

            sort(s.begin(), s.end());
            mp[s] = 1;
        }

        string ss = "";

        while(N){
            ss += (N%10)+'0';
            N /= 10;
        }

        sort(ss.begin(), ss.end());

        return mp[ss];
    }
};