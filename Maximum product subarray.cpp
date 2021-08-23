#Given an array A[] that contains both positive and negative integers, find the maximum product subarray.

 class Solution{
public:
long long min(long long a,long long b)
{
    if(a<b)return a;
    else
    return b;
}

long long max(long long a,long long b)
{
    if(a>b)return a;
    else
    return b;
}

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int  n) {
	    // code here
	    long long maxi=arr[0],mini=arr[0],result=arr[0],temp1,temp2;
	    for(int i=1;i<n;i++)
	    {
	        
	        if(arr[i]==0)
	        {
	            //result=maxi;
	            maxi=mini=1;continue;
	        }
	       temp1=arr[i] * maxi;
	       temp2=arr[i] * mini;
	       maxi=max(temp1,temp2);
	       maxi=max(maxi,arr[i]);
	       mini=min(temp1,temp2);
	       mini=min(mini,arr[i]);
	       result=max(result,maxi);
	    }
	   // result=max(1,result);
	    return result;
	}
};
