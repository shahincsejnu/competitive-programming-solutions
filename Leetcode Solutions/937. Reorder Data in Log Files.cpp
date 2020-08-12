class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        int l = logs.size();
        vector<string> v1, v3;
        vector< pair<string, string> > v2;
        
        for(int i = 0; i < l; i++){
            string s = logs[i];
            
            stringstream ss(s);
            string word;
            int flag = 0, cnt = 0;
            string new_s = "", hand;
            
            while(ss >> word){
                if(cnt == 1){
                    int sz = word.size();
                    int flag2 = 0;
                    
                    for(int j = 0; j < sz; j++){
                        if(word[j] >= '0' && word[j] <= '9');
                        else flag2 = 1;
                    }
                    if(!flag2){
                        v1.push_back(s);
                        flag = 1;
                        break;
                    }
                }
                if(cnt == 0){
                    cnt = 1;
                    hand = word;
                }
                else{
                    new_s += ' ';
                    new_s += word;
                }
            }
            
            if(flag == 0){
                v2.push_back({new_s, hand});
            }
        }
        
        sort(v2.begin(), v2.end());
        
        l = v2.size();
        
        for(int i = 0; i < l; i++){
            v3.push_back(v2[i].second + v2[i].first);
        }
        
        l = v1.size();
        for(int i = 0; i < l; i++) v3.push_back(v1[i]);
        
        return v3;
    }
};
