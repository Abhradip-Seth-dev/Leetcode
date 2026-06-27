class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string news="";
        for(int i=0;i<n;i++){
            if(!isalnum(s[i])){
                continue;
            }
            news+=tolower(s[i]);
        
        }
        int newsl=news.size();
        int left = 0;
        int right = newsl - 1;
        for(int i=0;i<newsl/2;i++){
            if(news[left]==news[right]){
                left++;
                right--;
            }
            else return false;
        }   
        return true;
    }
};