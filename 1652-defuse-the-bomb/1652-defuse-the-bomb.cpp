class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {

        int n = code.size();

        vector<int> ans;
        if(k==0){
            for(int i=0;i<n;i++){
                ans.push_back(0);
            }
            return ans;
        }

        for(int i=0;i<n;i++){
            code.push_back(code[i]);
        }

        if(k>0){

            int sum = 0;

            // first window
            for(int i=1;i<=k;i++){
                sum += code[i];
            }

            ans.push_back(sum);
            for (int left = 2, right = k + 1; left <= n; left++, right++) {

                    sum -= code[left - 1];   // remove old
                    sum += code[right];      // add new
                    ans.push_back(sum);
            }

        }
        if(k<0){

           k = -k;

int sum = 0;

// first window
for (int i = n - k; i <= n - 1; i++) {
    sum += code[i];
}

ans.push_back(sum);

// slide
for (int left = n - k + 1, right = n; right <= 2 * n - 2; left++, right++) {

    sum -= code[left - 1];
    sum += code[right];

    ans.push_back(sum);
}
        }
        return ans;

    }
};