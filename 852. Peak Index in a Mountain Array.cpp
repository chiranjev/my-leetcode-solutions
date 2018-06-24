class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int lena = A.size();

        int i=0;
        while(i<lena&&(A[i]<A[i+1])){
            i++;
        }
        return i;
    }
};
