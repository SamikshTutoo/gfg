class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // Code here
        //sum of all elements in an array
        long long sum=0,n=arr.size()+1;
        for(int i=0;i<arr.size();i++)
        sum+=arr[i];
        //sum of n number formula without loop
        long long ans=n*(n+1)/2;
        
        return ans-sum;
    }
};