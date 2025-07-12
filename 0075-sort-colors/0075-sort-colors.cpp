class Solution {
public:
    void sortColors(vector<int>& nums) {

        int cnt_z= 0,cnt_one= 0,cnt_two=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) cnt_z++;
            else if(nums[i]==1)  cnt_one++;
            else{
                cnt_two++;
            }

        }
        
        for(int i=0;i<cnt_z;i++){
            nums[i]=0;
        }
        for(int i=cnt_z;i<cnt_z+cnt_one;i++){
            nums[i]=1;
        }
        for(int i=cnt_z+cnt_one;i<nums.size();i++){
            nums[i]=2;
        }

    }
};