#include <bits/stdc++.h>
using namespace std;
 
int main() {
    freopen("SUBSEQ.INP", "r", stdin);
    freopen("SUBSEQ.OUT", "w", stdout);
 
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int max_sum = a[0];
    int cur_sum = a[0];
    int start_idx = 0;
    int end_idx = 0;
    int cur_start_idx = 0;
 
    for (int i = 1; i < n; i++) {
        if (cur_sum < 0) {
            cur_sum = a[i];
            cur_start_idx = i;
        } else {
            cur_sum += a[i];
        }
 
        if (cur_sum > max_sum) {
            max_sum = cur_sum;
            start_idx = cur_start_idx;
            end_idx = i;
        }
    }
 
    cout << start_idx + 1 << endl; // Vị trí bắt đầu
    cout << end_idx + 1 << endl; // Vị trí kết thúc
    cout << max_sum << endl; // Tổng lớn nhất
 
    return 0;
}