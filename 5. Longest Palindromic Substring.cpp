class Solution {
public:
    string longestPalindrome(string s) {

        int len=s.length();
        int left = 0;
        int right = 0;
        int maxlen=0;
        bool dp[len][len];  // dp[i][j] means whether substring from i to j is palindrome or not

        memset(dp,false,sizeof(dp));

        for(int i=0;i<len;i++)
        {
            dp[i][i]=true;
            if(maxlen<1){
                left=i;
                maxlen=1;
            }
        }
        for(int i=0;i<len-1;i++){
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=true;
                if(maxlen<2)
                {
                    left = i;
                    right = i+1;
                    maxlen = 2;
                }
            }
        }

        for(int k=3;k<=len;k++){
            for(int i=0;i<len-k+1;i++){
                if(dp[i+1][i+k-2]&&s[i]==s[i+k-1]){
                    dp[i][i+k-1]=true;
                    if(maxlen<k){
                        maxlen=k;
                        left=i;
                        right=i+k-1;
                    }
                }
            }
        }

        return s.substr(left,maxlen);
    }
};
