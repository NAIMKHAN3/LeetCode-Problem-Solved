#include <bits/stdc++.h>
using namespace std;

vector<int> addArrays(vector<int> &A, vector<int> &B) {
    int n = A.size();
    int m = B.size();
    int carry = 0;
    vector<int> result;
    
    // Start from the end of both arrays
    int i = n - 1;
    int j = m - 1;
    
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += A[i--];
        if (j >= 0) sum += B[j--];
        
        carry = sum / 10;
        result.push_back(sum % 10);
    }
    
    // The result is in reverse order
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A(N);
        vector<int> B(M);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int j = 0; j < M; j++) cin >> B[j];
        
        vector<int> result = addArrays(A, B);
        for (int digit : result) {
            cout << digit << " ";
        }
        cout << endl;
    }
    return 0;
}
