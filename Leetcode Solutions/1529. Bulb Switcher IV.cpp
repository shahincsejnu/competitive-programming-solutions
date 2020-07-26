class Solution {
public:
    int minFlips(string target) {
        int l = target.size();
        
        int flag = 0, cnt = 0;
        
        for(int i = 0; i < l; i++){
            int val = target[i]-'0';
            
            if(val != flag){
                flag = !flag;
                cnt++;
            }
        }
        
        return cnt;
    }
};
