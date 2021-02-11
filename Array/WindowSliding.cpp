//naive T O(n^2)
int maxSum=INT_MIN;
for(int i=0;i+k-1<n;i++)
{
    int num=0;
    for(int j=0;j<k;j++)
    sum +=arr[i+j];
    maxSum=max(sum,maxSum);

}
return maxSum;

//Efficient T O(n)
int currSum=0;
for(int i=0;i<k;i++)
currSum +=arr[i];
int maxSum=currSum;
for(int i=k;i<n;i++)
{
    currSum +=(arr[i]-arr[i-k]);
    maxSum=max(maxSum,currSum);
}
return maxSum;

//given an unsorted array of non-negative integers. Find if there is a subarray with given sum
//naive T O(n^2)
for(int i=0;i<n;i++)
{
    int sum=0;
    for(int j=i;j<n;j++)
    {
        sum +=arr[j]
        if(sum== given sum)
        return true;
    }
}

// T O(n)
bool isSubSum(int arr[], int n, int sum)
{
int currSum=arr[0], s=0;
for(int e=1;e<n;e++)
{
    //clean the prev window
    while(curr.sum>sum&& s<e-1)
    {
        currSum -=arr[start];s++;
    }
    if(currSum==sum)
    return true;
    if(e<n)
    currSum += arr[e];
    }
return (currSum ==sum );
}

//N-bonacci T O(n*m)
void bonacciseries(long n,int m)
{
    int a[m] ={0};
    a[n-1]=1;
    a[n]=1;

    for(int i=n+1;i<m;i++)
    a[i]=2*a[i-1]-a[i-n-1];

    for(int i=0;i<m;i++)
    cout <<a[i]<< " ";
}