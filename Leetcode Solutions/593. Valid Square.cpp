class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        set<double> st;
        set<pair<int,int>> stt;
        stt.insert({p1[0], p1[1]});
        stt.insert({p2[0], p2[1]});
        stt.insert({p3[0], p3[1]});
        stt.insert({p4[0], p4[1]});
        
        vector<vector<int>> v;
        v.push_back(p1);
        v.push_back(p2);
        v.push_back(p3);
        v.push_back(p4);
        
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(i == j) continue;
                
                int x1 = v[i][0], y1 = v[i][1], x2 = v[j][0], y2 = v[j][1];
                
                st.insert(sqrt((double)((double)((x1-x2)*(x1-x2)) + (double)((y1-y2)*(y1-y2)))));
            }
        }
                          
        return (st.size() == 2  && stt.size() == 4);
    }
};