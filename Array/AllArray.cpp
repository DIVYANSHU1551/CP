int search(int arr[],int n,int x) 
{
    for(int i=0;i<n;i++)
    if(arr[i]==x)
    return i;
    return -1;
}

//sorted array//At the end:O(1),At the Beginning:O(n)
int insert(int arr[],int n,int x,int cap,int pos)
{
    if(n==cap)
    return n;
    int idx =pos-1;
    for(int i=n-1;i>=idx;i--)
    arr[i+1]=arr[i];
    arr[idx]=x;
    return (n+1);
}
//For real time app dynamic sized array as there can be one insert that can be really very costly

//Delete T-O(n)
int deleteEle(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    if(arr[i]==x)
    break;
    if(i==n)
    return n;
    for(int j=i;j<n-1;j++)
    arr[j]=arr[j+1];
    return(n-1);
}

//SREACH LARGEST ELEMENT IN AN ARRAY
//NAIVE T-O(n^2)
int getLargest(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int j =0;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                flag=false;
                break;
            }
        }
        if(flag == true)
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={6,7,9,10};
    cout<<getLargest(arr,4);
    return 0;
}
//Best T-O(n)
getLargest(int arr[],int n)
int res=0;
for(int i=1;i<n;i++)
if(arr[i]>arr[res])
res=i;
return res;

//CHECK IF AN ARRAY IS SORTED
//NAIVE T O(n^2)
bool isSorted(int arr[],int n)
{
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    if(arr[j]<arr[i])
    return false;
    return true;
}
//Best T-O(n)
bool isSorted(int arr[], int n)
{
    for(int i=1;i<n;i++)
    if(arr[i]< arr[i-1])
    return false;
    return true;
}


//SECOND LARGEST ELEMENT
int getLargest(int arr[], int n)
{
    int largest=0;
    for(int i=1;i<n;i++)
    if(arr[i]>arr[largest])
    largest=i;
    return largest;
}
int secondLargest(int arr[], int n)
{
    int largest=getLargest(arr,n);
    int res=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!arr[largest])
        {
            if(res==-1)
            res=i;
            else if(arr[i]>arr[res])
            res=i;
        }

    }
    return res;
}

//best T 0(n)
int secondLargest(int arr[], int n)
{
    int res=-1, largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;

        }
        else if(arr[i]!=arr[largest])
        {
            if(res == -1|| arr[i]>arr[res])
            res=i;
        }
    }
    return res;
}

//Reverse  
//T O(n)
void reverse(int arr[],int n)
{
    int low=0,high = n-1;
    while(low< high)
    {
        int temp=arr[low]
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
//Remove duplicate from a sorted array
//T O(n) S O(n)
//naive
int remDups(int arr[],int n)
{
    int temp[n];
    temp[0]=arr[0];
    int res =1;
    for(int i=1;i<n;i++)
    {
        if(temp[res-1]!=arr[i])
        {
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++)
    arr[i]=temp[i];
    return res;
}
//best
//T O(n) S O(1)
int remDups(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}



//Left Rotate an array by one
void lRotateOne(int arr[],int n)
{
    int temp =arr[0];
    for(int i=1;i<n;i++)
    arr[i-1]=arr[i];
    arr[n-1]=temp;
}
