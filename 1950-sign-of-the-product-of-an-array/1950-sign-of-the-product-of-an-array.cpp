class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count=0;
        for( auto it:nums){
            if(it==0) return 0;
            if(it<0) count++;
        }
        if(count%2==0) return 1;
        else return -1;
        
        
    }
};