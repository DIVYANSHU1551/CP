//Naive    T 0(nd) S 0(1) 
void leftRotateOne(int arr[],int n)    //if d>n then d-n
{
int temp = arr[0];
for(int i=1;i<n;i++)
arr[i-1]=arr[i];
arr[n-1]= temp;
}
void leftRotate(int arr[], int n, int d)
{
    for(int i=0;i<d;i++)
    leftRotate(arr,n);
}  

//Reversal 
