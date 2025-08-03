class Solution {
public:
       string reverseWords(string s) {
        string res="", word="";
        int i = s.length() - 1;
        while(i >= 0) {
            while(i >= 0 && s[i] == ' ') i--; // skip spaces
            if(i < 0) break;
            string temp="";
            while(i >= 0 && s[i] != ' '){
                 temp +=s[i];
                 i--;
            }
            reverse(temp.begin(),temp.end());
            
           if(!res.empty()) res += " ";
           res += temp;
        }
        return res;
  }

};