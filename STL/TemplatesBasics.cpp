#include<iostream>                      // vs macros-macros are not good as it just do search and replace(i.e it does not do type checking ),error is more in macros,difficult to debug  
using namespace std;                    
template<typename T>   //<class T>
T myMax(T x, T y)
{
    return (x>y)?x:y;
}

int main()
{
    cout<<myMax<int>(1,2)<<endl;
    cout<<myMax<char>('a','b')<<endl;
    return 0;
}