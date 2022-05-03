// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(int arr[], int n) {
        int sum=0;
        int suml=0;
        int sumr=0;
        string temp="NO";
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        sumr=sum;
        for(int i=0;i<n;i++){
            sumr=sumr-arr[i];
            if(sumr==suml){
                temp="YES";
                return temp;
            }
            else{
                suml=suml+arr[i];
            }
        }
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends