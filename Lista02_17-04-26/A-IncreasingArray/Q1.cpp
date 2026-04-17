#include <iostream>
#include <vector>

using namespace std;

int main() {

    long long n;
    vector<long long> nums;
    cin >> n;
    long long ans = 0;

    for (int i = 0; i < n; i++ ) {
        int valorIn;
        cin >> valorIn;

        nums.push_back(valorIn);
    }

    for (int i = 1; i < nums.size(); i++) {

        long long diff = 0;

        if (nums[i] < nums[i-1]) {
            diff = nums[i-1]-nums[i];
            ans += diff;
            nums[i] = nums[i-1];
        }

    }

    cout << ans;

    return 0;
}