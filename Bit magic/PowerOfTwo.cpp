//Brute M1
bool isPow2(int n)
{
    if(n==0)
    return false;
    while(n!=1)
    {
        if(n%2 !=0)
        return false;
        n=n/2;
    }
    return true;
} 

//power of two is they have only one bit sit.
//BRIAN AND KERNINGHAM ALGORITHM M2

//Efficient 
bool isPow2(int n)
{
    if(n == 0)        
    return false;                //one line
    return ((n&(n-1))==0);      //return(n!=0)&&((n&(n-1))==0);
}  

