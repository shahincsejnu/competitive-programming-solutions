class MapSum {
public:
    /** Initialize your data structure here. */
    map<string, int> mp;
    MapSum() {
        mp.clear();
    }

    void insert(string key, int val) {
        mp[key] = val;
    }

    int sum(string prefix) {
        int total = 0;
        for(auto it: mp){
            string ss = it.first;

            int l1 = ss.size(), l2 = prefix.size();

            if(l2 > l1) continue;

            if(prefix == ss.substr(0, l2)) total += it.second;
        }

        return total;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */