class Solution {
public:
    bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

    int maxVowels(string s, int k) {
        int ans=0;
        int count=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                count++;
            }
        }
        ans=count;
        for(int i=k;i<s.size();i++){
            if(isVowel(s[i])){
                count++;
            }
            if(isVowel(s[i-k])) count--;
            ans=max(count,ans);

        }
        return ans;
    }
};