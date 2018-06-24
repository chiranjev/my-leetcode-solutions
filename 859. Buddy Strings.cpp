class Solution {
public:
    bool buddyStrings(string A, string B) {
        int lena = A.size();
        int lenb = B.size();
        int flaga=0;
        int flagb=0;
        int a,b;
        if(lena != lenb){
            return false;
        }
        int arr[26]={0};
        if(A.compare(B)==0){
            for(int i=0;i<lena;i++){
                arr[A[i]-'a']++;
            }
            for(int i=0;i<26;i++){
                if(arr[i]>1){
                    return true;
                }
            }
            return false;
        }else{
            for(int i=0;i<lena;i++){
                if(A[i]!=B[i]){
                    if(flagb==1){
                        return false;
                    }
                    if(flaga==0){
                        flaga=1;
                        a=i;
                    }else{
                        flagb=1;
                        b=i;
                    }

                }
            }
            if(flagb==1&&(A[a]==B[b])&&(A[b]==B[a])){
                return true;
            }else{
                return false;
            }
        }

    }
};
