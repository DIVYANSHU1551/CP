//Brute T-O(N^2)
void oddAppearing(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        if(arr[i]==arr[j])
        count++;
        if(count%2 !=0)
        print(arr[i]);
    }
}
//IMP PROPERTY OF XOR TO FIND THE TWO NUMBERS.
//IF YOU DO XOR OF TWO NUMBERS X AND Y THEN YOUR XOR IS 
//GOING TO HAVE A BIT AS 1 WHEN THAT BIT IS DIFFERENT IN X AND Y AND YOUR XOR IS 
//GOING TO HAVE A BIT AS 0 WHEN THAT BIT IS SAME IN X AND Y  
//O(N)
void oddAppearing(int arr[], int n)
{
    int XOR =0,res1= 0, res2=0;
    for(int i=0;i<n;i++)
    {
        xor=xor^arr[i];
    }
    int sn =xor& ~(xor-1); //rightmost sit bit
    for(int i=0;i<n;i++)
    {
        if((arr[i]& sn) !=0)
        res1=res1^arr[i];
        else
        res2=res2^arr[i];
    }
    cout<<res1<<res2<<endl;

}