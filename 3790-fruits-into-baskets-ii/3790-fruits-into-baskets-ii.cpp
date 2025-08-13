class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count=fruits.size();
        vector<int> avail(baskets.size(),0);
        for(int i=0;i<fruits.size();i++){
            
            for(int j=0;j<baskets.size();j++){
                
                if((fruits[i]<=baskets[j]) && avail[j]==0 ){
                    avail[j]=1;
                    count--;
                    break;
                }
                
            }
        }
        return count;
    }
};