class MyCalendar {
public:
    set<pair<int,int>> st;

    MyCalendar() {
        st.clear();
    }

    bool book(int start, int end) {
        end--;
        if(st.empty()){
            st.insert({start, end});
            return true;
        }
        else{
            auto it = st.lower_bound({start, end});
            if(it == st.end()) it--;

            int f = (*it).first, e = (*it).second;

            if(end < f || start > e){
                if(it != st.begin()){
                    it--;
                    f = (*it).first;
                    e = (*it).second;
                    if(end < f || start > e){
                        st.insert({start, end});
                        return true;
                    }
                    else return false;
                }

                st.insert({start, end});
                return true;
            }
            else return false;
        }
    }
};