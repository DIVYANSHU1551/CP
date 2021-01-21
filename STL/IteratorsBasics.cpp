#include<iostream>   ///simple forword iterator can not be treated as pointer
#include<vector>     ///same pointer arthemetic can not be done on iterator
using namespace std;                  // random excess T-O(n),  
int main()
{
    vector<int> v={10,20,30,40,50};
    vector<int>::iterator i=v.begin(); // auto i;                      //begin(),end(),prev(),next(),advance()
     cout<<(*i)<< " ";  
     i++;
    cout<<(*i)<<" ";                         // next() prev()
                                           // i= next(i);
                                           //cout<<(*i)<<" ";
                                           //i=next(i,2);
                                           //cout<<(*i)<<" ";
                                           //i=prev(i);
                                           //cout<<(*i)<<" ";
                                           //return 0

                                           //advance() is different from next as next returns a iterator and advance modify same pass iterator.
                                           //advance(i,3);
                                           // cout<<(*i)<<" ";
                                           //return 0;   //output is 40
     i=v.end();
    i--;
     cout<<(*i)<<" ";
     
     return 0;                          
}