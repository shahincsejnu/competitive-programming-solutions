class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        int l1 = s.size(), l2 = d.size();
        string temp, res = "";
        
        for(int i = 0; i < l2; i++){
            temp = d[i];
            
            int l3 = temp.size(), k = 0;
            
            for(int j = 0; j < l1; j++){
                if(s[j] == temp[k]) k++;
            }
            
            if(k == l3){
                int l4 = res.size();
                if(l4 < l3) res = temp;
                else if(l4 == l3 && res > temp) res = temp;
            }
        }
        
        return res;
    }
};