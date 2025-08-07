class Solution {
public:
    int mySqrt(int x) {
        if(x==0 ||x==1) return x;
        int low =1,high =x;
        int ans;
        while(low<=high){
            long long mid=low +(high-low)/2;
            if(mid*mid ==x ) return mid;
            if(mid*mid<x) {
                low =mid+1;
                ans=mid;
            }
            if(mid*mid>x) {
                high =mid-1;
                
            }

        }
        return ans;
    }
};