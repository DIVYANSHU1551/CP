//Naive    T O(n^2)
void leader(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag =false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] <= arr[i])
            {
                flag = true;
                break;
            }
            if(flag==false)
            {
                print(arr[i]);
            }
        }
    }
}
//Best    travel from right to left T O(n)
void leader(int arr[],int n)
{
    int curr_ldr= arr[n-1];
    print(curr_ldr);
    for(int i=n-2;i>=0;i--)
    {
        if(curr_ldr<arr[i])
        {
            curr_idr= arr[i];
            print(curr_ldr);
        }
    }
}