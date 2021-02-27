class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        
        int l = pushed.size(), j = 0;
        
        for(int i = 0; i < l; i++){
            st.push(pushed[i]);
            
            while(!st.empty() && j < l && (st.top() == popped[j])){
                st.pop();
                j++;
            }
        }

        return j == l;
    }
};