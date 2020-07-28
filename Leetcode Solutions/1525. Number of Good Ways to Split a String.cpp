class Solution {
public:
    int numSplits(string s) {
        int l = s.size();
        map<char,int> mp1, mp2;
        
        int arr[100005] = {0}, brr[100005] = {0}, cnt1 = 0, cnt2 = 0;
        
        for(int i = 0; i < l; i++){
            char ch = s[i];
            
            if(mp1[ch] == 0) cnt1++;
            mp1[ch] = 1;
            
            arr[i] = cnt1;
        }
        
        for(int i = l-1; i >= 0; i--){
            char ch = s[i];
            
            if(mp2[ch] == 0) cnt2++;
            mp2[ch] = 1;
            
            brr[i] = cnt2;
        }
        
        int cnt = 0;
        
        for(int i = 0; i < l-1; i++){
            if(arr[i] == brr[i+1]) cnt++;
        }
        
        return cnt;
    }
};
