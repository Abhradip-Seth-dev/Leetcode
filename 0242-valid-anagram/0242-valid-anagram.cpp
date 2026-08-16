class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>f1;
        unordered_map<char,int>f2;
        for(char c : s){
            f1[c]++;
        }
        for(char c : t){
            f2[c]++;
        }
        for(char c :s){
            if(f1[c]!=f2[c]) return false;
        }
        return true;



    }
};