class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high= nums.size()-1;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(low==high){
                return nums[low];
            }else if(high-low==1){
                return min(nums[low],nums[high]);
            }
            if(nums[mid]>nums[mid+1]){
                return nums[mid+1];
            }else if(nums[mid-1]>nums[mid]){
                return nums[mid];
            }else if(nums[low]<=nums[mid]){
                if(nums[high]<nums[mid]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }else if(nums[mid]<=nums[high]){
                if(nums[low]>nums[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
        }
    }
};
