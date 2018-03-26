class Solution {
public:
    double myPow(double x, int n) {
        if(n==1){
            return x;
        }
        if(n==0){
            return 1.0;
        }
        int temp=n;
        if(n<0){
            n=-n;
        }
        double ans=myPow(x,n/2);
        ans=ans*ans;
        if(n%2==1){
            ans=ans*x;
        }
        if(ans==0){
            return 0;
        }
        if(temp<0){
            return 1.0/ans;
        }
        return ans;
    }
};
