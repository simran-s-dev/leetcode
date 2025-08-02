class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s_string;
        unordered_map<char,int> t_string;

        for(int i=0;i<s.length();i++){
            s_string[s[i]]++;

        }
        for(int i=0;i<t.length();i++){
            t_string[t[i]]++;

        }
        if(s_string == t_string) return true;
        else return false;
        
    }
};