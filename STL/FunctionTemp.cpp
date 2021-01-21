#include<iostream>
using namespace std;
template<typename T>        //,int limit>
T arrMax(T arr[],int n)    
{                           // if(n>limit)
                          //{.......}
    T res = arr[0];
    for(int i=1;i<n;i++)
      if(arr[i]>res)
    res=arr[i];
    return res;
}

int main()
{
    int arr1[]={10,20,30};
    cout<<arrMax<int>(arr1,3);       //<int,//only const value 100>(arr1,3);
    float arr2[]={0.5,1.0,1.5,10.0};
    cout<<arrMax<float>(arr2,4);    //<float,50>(arr2,4);
    return 0;
}