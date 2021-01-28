//Naive
//n char then 2^n(2 power of n ) sub set will be there.
void printPowerSet(string str)   //0(2^n *n)
{
    int n =str.length();
    int powSize = pow(2,n);

    for(int counter=0; counter< powSize; counter++)
    {
        for(int j=0;j<n;j++)
        {
            if(counter &(1<<j)!=0)
            cout<<str[j];
        }
        cout<<"\n";
    }
}