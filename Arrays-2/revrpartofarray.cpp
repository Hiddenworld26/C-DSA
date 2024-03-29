#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v(6);
    v.push_back(12);
    v.push_back(34);
    v.push_back(56);
    v.push_back(78);
    v.push_back(23);
    v.push_back(33);

    for (int k = 0; k < v.size(); k++) {
        cout << v[k] << " ";
    }
    cout << endl;

    int i = 1;
    int j = 4;

    if (i >= 0 && j >= 0 && i < v.size() && j < v.size()) {
        while (i < j) {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    } else {
        cout << "Invalid indices for swapping." << endl;
    }

    for (int k = 0; k < v.size(); k++) {
        cout << v[k] << " ";
    }

    return 0;
}
