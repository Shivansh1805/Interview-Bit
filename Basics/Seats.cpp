int Solution::majorityElement(const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=B.size();
    vector<int>A(n);
    for(int i=0;i<n;i++){
        A[i]=B[i];
    }
    sort(A.begin(),A.end());
    for(int i=0;i<n;){
        int count=1;
        int ans=A[i];
        int j=i+1;
        while(A[j]==A[i]){
            count++;
            j++;
        }
        i=j;
          if(count>=n/2)
         return ans;
    }
}