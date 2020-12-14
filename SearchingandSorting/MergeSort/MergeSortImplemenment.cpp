#include<iostream>
using namespace std;
void mergeArrays(int x[],int y[],int a[],int s,int e){                             
int mid=(s+e)/2;
int i=s;
int j=mid+1;
int k=s;
while(i<=mid && j<=e){
    if(x[i]< y[j]){
        a[k]=x[i];
        i++;
        k++;

    }else{
        a[k]=y[j];
        j++;
        k++;
    }
}
while(i<=mid){
    a[k] = x[i];
    k++;
    i++;

}
while(j<=e){
    a[k]=y[j];
    k++;
    j++;
}

}

void mergeSort(int a[],int s,int e){
if(s>=e){
    return;
}

int mid =(s+e)/2;
int x[100],y[100];
for(int i=0;i<=mid;i++){
    x[i]= a[i];
}
for(int i=mid+1;i<=e;i++){
    y[i]=a[i];
}

mergeSort(x,s,mid);
mergeSort(y,mid+1,e);
mergeArrays(x,y,a,s,e);


}

int main(){
   int a[]={4,3,5,7,8,9};
   mergeSort(a,0,5);

   for(int i=0;i<6;i++){
       cout<<a[i];
   }
}
/*class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high)
    {
        vector<int> t(high-low+1);
        int i=0, j=low, k=mid+1; 
        while(j<=mid && k<=high)
        {
            if(nums[j]<=nums[k])
            {
                t[i] = nums[j];
                j++;
            }
            else 
            {
                t[i] = nums[k];
                k++;
            }
            i++;
        }
        
            while(j<=mid) t[i] = nums[j], i++, j++;
            while(k<=high) t[i] = nums[k], i++, k++;
            for(int i=low; i<=high; i++)
            {
                nums[i] = t[i-low];
            }
    }
    void mergeSort(vector<int>& nums, int low, int high)
    {
        if(low<high) 
        {
            int mid=low+(high-low)/2;
            mergeSort(nums, low, mid);
            mergeSort(nums, mid+1, high);
            merge(nums, low, mid, high);
        }
    }
    vector<int> sortArray(vector<int>& nums) 
    {
        int n=nums.size();
        int low=0, high=n-1;
        mergeSort(nums, low, high);
        return nums;
    }
};