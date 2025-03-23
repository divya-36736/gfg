//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        
        int n = arr.size();
        vector<int> temp(n);
        
        
        
        if(k >= n){
            int i;
            for(i = 0; i<n; i++){
                temp[i] = arr[n-i-1];
            }
        }
        
        
        // int j = 0;
        // while(j<n){
        //     for(int x = 0; x<k; x++){     // only reverse 1st k elements
        //         temp[x] = arr[k-x-1];
                
        //     }
        //     j = j+k;
            
        // }
        
        int j = 0;
        while(j<n){
            int left = j;
            int right = min(j+k-1, n-1);
            
            for(int x = left; x<=right; x++){
                temp[x] = arr[right - (x - left)];
            }
            
            j += k;
        }
        
        
        
        for(int i = 0; i<n; i++){
            arr[i] = temp[i];
        }
    }
        
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        ob.reverseInGroups(arr, k);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends