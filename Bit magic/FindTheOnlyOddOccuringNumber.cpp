//Brute   T-O(n^2)
for(int i=0;i<n;i++)
{
    int count=0;
    for(int j =0;j<n;j++)
    if(arr[j]==arr[i])
    count++;
    if(count%2 1=0)
    print(arr[i]);
}
//Efficient solution T-O(n) and S-O(1)     
//^is xor, x^0=x; x^y=y^x, x^(y^z)=(x^y)^z, x^x=0                                            
int findOdd(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    res=res^arr[i];
    return res;
}
//VARIATION QUESTION-GIVEN AN ARRAY OF N NUMBER THAT HAD
//VALUES IN RANGE[1...N+1].EVERY NO. APPEARS EXACTLY ONCE
//HENCE ONE NO. IS MISSING.FIND THE MISSING NO.
(1^2^3^...^(n+1))^(arr[0]^arr[i]...arr[n-1])
//needed number is appearing only one time.