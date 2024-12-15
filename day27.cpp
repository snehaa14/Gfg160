//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   int solve(vector<int>arr){
      int n = arr.size(); 
      int i = 0; 
      int j = n-1; 
      int mid;
      while(i<j){
          mid = i+(j-i)/2; 
          
          if(arr[0]<=arr[mid]){
              i = mid+1; 
          }
          else{
             j = mid; 
          }
      }
      
      return i; 
  }
  
  
  int ok (vector<int>arr,int i , int j , int key ){
      int mid; 
      
      while(i<=j){
          mid = i+(j-i)/2; 
          if(arr[mid]==key){
              return mid; 
          }else if(arr[mid]<key){
              i = mid+1; 
          }else{
              j  = mid-1; 
          }
      }
      
      return -1; 
  }
    int search(vector<int>& arr, int key) {
        int part =   solve(arr);
        int n = arr.size(); 
        if(key >= arr[0] && key<=arr[part-1]){
            return ok(arr,0,part-1,key); 
        }else{
            return ok(arr,part,n-1,key); 
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends