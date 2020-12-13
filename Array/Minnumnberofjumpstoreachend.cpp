// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to return the minimum number 
// of jumps to reach arr[h] from arr[l] 
int minJumps(int arr[], int n) 
{ 
  
    // Base case: when source and 
    // destination are same 
    if (n == 1) 
        return 0; 
  
    // Traverse through all the points 
    // reachable from arr[l] 
    // Recursivel, get the minimum number 
    // of jumps needed to reach arr[h] from 
    // these reachable points 
    int res = INT_MAX; 
    for (int i = n - 2; i >= 0; i--) { 
        if (i + arr[i] >= n - 1) { 
            int sub_res = minJumps(arr, i + 1); 
            if (sub_res != INT_MAX) 
                res = min(res, sub_res + 1); 
        } 
    } 
  
    return res; 
} 
  
// Driver Code 
int main() 
{ 
    int arr[] = { 1, 3, 6, 3, 2, 
                  3, 6, 8, 9, 5 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Minimum number of jumps to"; 
    cout << " reach the end is " << minJumps(arr, n); 
    return 0; 
} 

//using dp
/* of jumps to reach end 
#include <bits/stdc++.h> 
using namespace std; 
  
int min(int x, int y) { return (x < y) ? x : y; } 
  
// Returns minimum number of jumps 
// to reach arr[n-1] from arr[0] 
int minJumps(int arr[], int n) 
{ 
    // jumps[n-1] will hold the result 
    int* jumps = new int[n]; 
    int i, j; 
  
    if (n == 0 || arr[0] == 0) 
        return INT_MAX; 
  
    jumps[0] = 0; 
  
    // Find the minimum number of jumps to reach arr[i] 
    // from arr[0], and assign this value to jumps[i] 
    for (i = 1; i < n; i++) { 
        jumps[i] = INT_MAX; 
        for (j = 0; j < i; j++) { 
            if (i <= j + arr[j] && jumps[j] != INT_MAX) { 
                jumps[i] = min(jumps[i], jumps[j] + 1); 
                break; 
            } 
        } 
    } 
    return jumps[n - 1]; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 1, 3, 6, 1, 0, 9 }; 
    int size = sizeof(arr) / sizeof(int); 
    cout << "Minimum number of jumps to reach end is "
         << minJumps(arr, size); 
    return 0; 
} 