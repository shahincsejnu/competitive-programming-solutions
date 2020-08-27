class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        string ss = "";
        
        for(int i = 1; i <= n; i++){
            ss = "";
            if((i%3 == 0) && (i%5 == 0)) ss = "FizzBuzz";
            else if(i%3 == 0) ss = "Fizz";
            else if(i%5 == 0) ss = "Buzz";
            else{
                int ii = i;
                while(ii){
                    ss += (ii%10) + '0';
                    ii /= 10;
                }
                reverse(ss.begin(), ss.end());
            }
            
            ans.push_back(ss);
        }
        
        return ans;
    }
};