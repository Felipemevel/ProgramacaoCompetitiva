#include <iostream>
#include <vector>

using namespace std;

int main() {

    long long n;
    cin >> n;
    vector<long long> nums;
    nums.push_back(n);

    while (n != 1) {

        if (n%2 == 0) {
            n = n/2;
        } else {
            n = (n*3) + 1;
        }
        nums.push_back(n);
    }

    for (long long x : nums) {
        cout << x << " ";
    }

    return 0;
}