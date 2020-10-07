#include <iostream>
#include <vector>

using namespace std;

int main() {
    int row{}, col{};
    cin >> row >> col;
    vector<string> arr(row);
    bool rev{true};
    int cur{0};
    for (int n{1}; n <= col; n++) {
        if (cur + 1 == row || cur + 1 == 1) {
            rev = !rev;
        }
        for (int r{}; r < row; r++) {
            if (r == cur) {
                arr[r].append(to_string(n));
            } else {
                arr[r].append(" ");
            }
        }
        if (rev) {
            cur--;
        } else {
            cur++;
        }
    }
    for (auto r : arr) {
        cout << r << '\n';
    }
    return 0;
}
