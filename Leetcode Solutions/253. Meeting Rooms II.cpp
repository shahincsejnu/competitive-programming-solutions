class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        vector<pair<int,int>> v;
        int n = intervals.size();
        for(int i = 0; i < n; i++){
            v.push_back({intervals[i][0], 1});
            v.push_back({intervals[i][1], 0});
        }

        sort(v.begin(), v.end());

        int mx = 0, cnt = 0;
        n = v.size();

        for(int i = 0; i < n; i++){
            if(v[i].second == 1) cnt++;
            else cnt--;

            mx = max(mx, cnt);
        }

        return mx;
    }
};