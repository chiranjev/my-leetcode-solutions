#define ll long long
class Solution {
public:
    int mySqrt(int n) {
     ll low=0;
	 ll high=n;
	 double ans=1;
	 while(low<=high){
		ll mid=(low+high)/2;
		if(mid*mid>n){
			high=mid-1;
		}
		else if(mid*mid<=n){
			ans=mid;
			low=mid+1;
		}
	}
        return ans;
    }
};
