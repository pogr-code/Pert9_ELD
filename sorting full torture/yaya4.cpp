#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX = 1000;
    int n;
    cout << "Banyak elemen dalam array: ";
    if (!(cin >> n) || n <= 0 || n > MAX) {
        cout << "Array tidak valid" << endl;
        return 0;
    }

    int arr[MAX];
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Array asli: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << ' ';
    cout << endl;

    int sorted[MAX];
    for (int i = 0; i < n; ++i) sorted[i] = arr[i];

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (sorted[j] < sorted[i]) {
                int tmp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = tmp;
            }
        }
    }

    
    cout << "Array terurut: ";
    for (int i = 0; i < n; ++i) cout << sorted[i] << ' ';
    cout << endl;

    double median;
    if (n % 2 == 1) {
        median = sorted[n / 2];
    } else {
        median = (sorted[n / 2 - 1] + sorted[n / 2]) / 2.0;
    }
    cout << "Median: " << setprecision(2) <<median << endl;

    return 0;
}
