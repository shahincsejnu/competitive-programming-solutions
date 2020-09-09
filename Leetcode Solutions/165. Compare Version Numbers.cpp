class Solution {
public:
    int compareVersion(string version1, string version2) {
        int l1 = version1.size(), l2 = version2.size();
        
        vector<int> v1, v2;
        
        string s1 = "", s2 = "";
        int nonzero = 0;
        
        for(int i = 0; i < l1; i++){
            if(version1[i] == '.'){
                if(s1.size()){
                    int val = stoi(s1);
                    v1.push_back(val);
                }
                else v1.push_back(0);
                s1 = "";
                nonzero = 0;
                continue;
            }
            if(version1[i] != '0') nonzero = 1;
            
            if(nonzero) s1 += version1[i];
        }
        if(s1.size()){
            int val = stoi(s1);
            v1.push_back(val);
        }
        
        for(int i = 0; i < l2; i++){
            if(version2[i] == '.'){
                if(s2.size()){
                    int val = stoi(s2);
                    v2.push_back(val);
                }
                else v2.push_back(0);
                s2 = "";
                nonzero = 0;
                continue;
            }
            if(version2[i] != '0') nonzero = 1;
            
            if(nonzero) s2 += version2[i];
        }
        if(s2.size()){
            int val = stoi(s2);
            v2.push_back(val);
        }
        
        while(1){
            if(v1.size() == 0) break;
            if(v1.back() == 0) v1.pop_back();
            else  break;
        }
        while(1){
            if(v2.size() == 0) break;
            if(v2.back() == 0) v2.pop_back();
            else break;
        }
        
        l1 = v1.size();
        l2 = v2.size();
        int l = min(l1, l2);
        
        for(int i = 0; i < l; i++){
            int val1 = v1[i], val2 = v2[i];
            if(val1 == val2) continue;
            if(val1 > val2) return 1;
            else return -1;
        }
        
        if(l1 == l2) return 0;
        if(l1 > l2) return 1;
        else return -1;
    }
};