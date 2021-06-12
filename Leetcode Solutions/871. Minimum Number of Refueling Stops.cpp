class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> pq;

        int n = stations.size(), asi = 0, sum = startFuel, cnt = 0;

        for(int i = 0; i < n; i++){
            int d = stations[i][0] - asi;

            if(sum >= d){
                asi = stations[i][0];
                pq.push(stations[i][1]);
                sum -= d;
            }
            else{
                while(!pq.empty()){
                    if(sum >= d) break;
                    sum += pq.top();
                    pq.pop();
                    cnt++;
                }

                if(sum < d) return -1;
                pq.push(stations[i][1]);
                asi = stations[i][0];
                sum -= d;
            }
        }

        int d = target - asi;

        while(!pq.empty()){
            if(sum >= d) break;
            sum += pq.top();
            pq.pop();
            cnt++;
        }

        if(sum < d) return -1;
        return cnt;
    }
};