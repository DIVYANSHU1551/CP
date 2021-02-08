void printFreq(int arr[], int n)
{
    int freq = 1, i=1;
    while(i<n)
    {
        while(i<n && arr[i]== arr[i-1])
        {
            freq++;
            i++;
        }
        print(arr[i-1] + " " + freq);
        i++;
        freq = 1;
    }
    if(n==1|| arr[n-1] !=arr[n-2])
    print(arr[n-1]+" " + 1);
}
//T O(n)