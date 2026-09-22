class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int ans = -1;//not INT_MIN as -1 given least in ques
        //Largest element
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>ans)
            ans=arr[i];
        }
        //second largest
        int second=-1;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=ans)
            second=max(second,arr[i]);//max function to find max between two
            //or without function if(arr[i]>second){second=arr[i]};
        }
        return second;
    }
};