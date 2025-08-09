class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;

        unordered_map<char,char> s_string;
        unordered_map<char,char> t_string;

        for(int i=0;i<s.length();i++){
            
            char c1 =s[i];
            char t1=t[i];

            if(s_string.count(c1) && s_string[c1]!=t1) return false;
            if(t_string.count(t1) && t_string[t1]!=c1) return false;

            s_string[c1]=t1;
            t_string[t1]=c1;

        }
        return true;
        
    }
};