class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> f;

        for(char c : text){
            if(c == 'b' || c == 'a' || c == 'l' || c == 'o' || c == 'n'){
                f[c]++;
            }
        }
        int b = f['b'];
        int a = f['a'];
        int l = f['l']/2;
        int o = f['o']/2;
        int n = f['n'];

        return min({b,a,l,o,n});

    }
};