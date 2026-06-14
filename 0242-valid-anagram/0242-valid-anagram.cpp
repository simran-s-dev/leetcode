class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hash_s;
         unordered_map<char,int> hasht;
        for(int i=0;i< s.length();i++ ){
            hash_s[s[i]]++;
        }
        for(int i=0;i< t.length();i++ ){
            hasht[t[i]]++;
        }

        if(hash_s == hasht) return true;

        else return false;
    }
};