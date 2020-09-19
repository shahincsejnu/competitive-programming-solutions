class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int d1 = 0, d2 = 0, start = low, end = high;
        
        while(start){
            start /= 10;
            d1++;
        }
        while(end){
            end /= 10;
            d2++;
        }
        
        vector<int> v;
        
        for(int i = d1; i <= d2; i++){
            for(int j = 1; j <= 9; j++){
                if((1 + (9-j)) >= i){
                    int val = 0, idx = i, jj = j;
                    
                    while(idx--){
                        val *= 10;
                        val += jj;
                        jj++;
                    }
                    
                    if(val >= low && val <= high) v.push_back(val);
                }
            }
        }
        
        sort(v.begin(), v.end());
        
        return v;
    }
};