class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        long long n=x;
        while(x>0){
            rev=(rev*10)+(x%10);
            x=x/10;
        }
        if(n==rev){
            return true;
        }
        else{
            return false;
        }
        
    }
};