#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, h, l;
        cin >> n >> h >> l;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        int rowCount = 0, colCount = 0;

        
        for(int i = 0; i < n; i++) if(arr[i] <= h) rowCount++;


        for(int i = 0; i < n; i++) if(arr[i] <= l) colCount++;

        
        int maxPairs = n / 2;

    
        int answer1 = min({rowCount, colCount, maxPairs});

        cout << answer1 << endl;
    }
}
