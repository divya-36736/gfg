//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if(n<2){
            return -1;
        }
        //sort(arr.begin(), arr.end());
        int largest = INT_MIN, sl = INT_MIN;
        
        for(int i = 0; i<n; i++){
            if(arr[i] > largest){
                sl = largest;
                largest = arr[i];
                
            }
            else if(arr[i]>sl && arr[i] < largest){
                sl = arr[i];
            }
        }
        if(sl == INT_MIN){
            return -1;
        }
        return sl;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends