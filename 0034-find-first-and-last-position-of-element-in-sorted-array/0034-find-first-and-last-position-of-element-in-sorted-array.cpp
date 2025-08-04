class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> temp(2,-1);
        int j=nums.size()-1;
        int i=0;
        // for(int i=0;i<nums.size();i++){
            while(i < nums.size()){
            if(nums[i]==target) {    
            temp[0]=i;
            break;
            }
            else i++;
            }
            while(j >= 0){
           if(nums[j]==target){
            temp[1]=j;
            break;
        }
        else j--;
            }
        return temp;
    }
};