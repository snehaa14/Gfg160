//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int myAtoi(char *s) {
        int i = 0;
    int n = strlen(s);
    long result = 0; 
    int sign = 1;
    while (i < n && s[i] == ' ') i++;
    
    if (i < n && (s[i] == '+' || s[i] == '-')) 
    {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }
    while (i < n && isdigit(s[i])) 
    {
        int digit = s[i] - '0';
        if (result > (INT_MAX - digit) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
  result = result * 10 + digit;
        i++; }
  return static_cast<int>(result * sign);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends