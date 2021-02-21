class Solution {
public:
    int brokenCalc(int X, int Y) {
        int cnt = 0;
        
        while(Y != X){
            if(X >= Y){
                cnt += (X-Y);
                break;
            }
            
            if(Y%2){
                Y++;
                cnt++;
            }
            
            Y /= 2;
            cnt++;
        }
        
        return cnt;
    }
};