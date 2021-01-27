int countSet(int n)    //T-0(Total Bits in n)
{
    int res=0;
    while(n>0)          
    {
        if(n%2 !=0)   //if((n&1)==1)    //see next step
            res++;   //res++;          // res= res+(n&1);
        n=n/2;   //n=n>>1             
    }
}

//BRIAN AND KERNINGHAM ALGORITHM   
//WHEN WE SUBTRACT 1 FROM THE NUMBER ALL THE BITS 
//WHICH IS 0 AFTER THE LAST SIT BIT(lift most bits)
//THEY BECOME ONE AND THE LAST SIT BIT BECOMES 0 FROM 1 
int CountBits(int n)    //T-0(Set Bit Count)
{
    int res = 0;
    while(n>0)
    {
        n=(n&(n-1));
        res++;
    }
    return res;
}

//LOOKUP TABLE
//We divide our 32 bit number into 4 part each of 8 bits(8 bits range is 0 to 255)
//Is fill in bottom up manner
 