class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> freq;
    
        for (int task : tasks) {
            freq[task]++;
        }
        
        int rounds = 0;
        for (auto &p : freq) {
            int count = p.second;
            if (count == 1) return -1;
            
            
            rounds += count / 3;
            if (count % 3 != 0) rounds += 1;
        }
        
        return rounds;
    }
};
