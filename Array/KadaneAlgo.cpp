#include<iostream>
#include<climits>

using namespace std;

int maxsubarraysum(int a[],int size)
{
    int maxsofar = INT_MIN,maxendinghere = 0;
    for(int i =0;i< size;i++)
    {
        maxendinghere = maxendinghere +a[i];
        if(maxsofar < maxendinghere)
        maxsofar=maxendinghere;

        if(maxendinghere <0)
        maxendinghere;
    }
    return maxsofar;
}

int main()
{
    int a[] ={-2,-3,4,6,9,9};
    int n =sizeof(a)/sizeof(a[0]);
    int maxsum=maxsubarraysum(a,n);
    cout<<"max contiguous sum is"<< maxsum;
    return 0;
}