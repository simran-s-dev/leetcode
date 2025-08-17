class Solution {
public:
    int minPartitions(string n) {
        char maxi ='0';
        for(char c : n){
            if(c>maxi) maxi =c;
        }
        return maxi -'0';
    }
        
    
};