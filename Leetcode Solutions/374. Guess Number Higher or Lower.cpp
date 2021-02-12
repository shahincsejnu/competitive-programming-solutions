/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int lo = 1, up = n, mid, ans;
        
        while(lo <= up){
            mid = lo + ((up - lo)/2);
            
            int val = guess(mid);
            
            if(val == -1) up = mid-1;
            else if(val == 1) lo = mid+1;
            else {ans = mid; break;}
        }
        
        return ans;
    }
};