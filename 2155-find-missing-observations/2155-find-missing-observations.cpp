class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {

        vector<int> res(n, 0);
        int m = rolls.size();
        int sum = 0;
        for (int i = 0; i < m; i++) {
            sum += rolls[i];
        }

        int total_sum = mean * (m + n);
        int req_sum = total_sum - sum;
        int count = 0;

        if (req_sum >= n * 1 && req_sum <= n * 6) {
           
            for (int i = 0; i < n; i++) {
                res[i]++;
                count++;
            }

            int req = req_sum - count;
            for (int i = 0; i < n && req > 0; i++) {
                if (req < 5) {
                    res[i] += req;
                    req = 0;
                } else {
                    res[i] += 5;
                    req -= 5;
                }
            }
            return res;
        } else {
            return {};
        }
    }
};
