#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
   vector<int> findTwoElement(vector<int> arr, int n) {
        int a = -1, b = -1;  // Initializing variables to store the repeating and missing elements
        for (int i = 0; i < n; i++) {
            // Get the index corresponding to the current element's value
            int index = abs(arr[i]) - 1;
            // If the value at that index is negative, the current element is the repeating one
            if (arr[index] < 0) {
                a = abs(arr[i]);
            } else {
                // Mark the value at that index as visited (by making it negative)
                arr[index] = -arr[index];
            }
        }
        for (int i = 0; i < n; i++) {
            // The index of the first positive value is the missing element
            if (arr[i] > 0) {
                b = i + 1;
                break;
            }
        }
        return {a, b};  
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}