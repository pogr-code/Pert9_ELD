#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void sort(){
    int n,L,R;
    cout << "Banyak Elemen: ";
    cin >> n;
    cout << "Batas bawah sort elemen: ";
    cin >> L;
    cout << "Batas atas sort elemen: ";
    cin >> R;
    if (L < 1 || R > n || L >= R) {
        cout << "Batas tidak valid!" << endl;
        return;
    }
    int arr[n];
    for(int idx = 0; idx < n; idx++){
        cout << "Elemen ke-" << idx+1 << ": ";
        cin >> arr[idx];
    }
    int z=R-L+1;
    int subarr[z];
    for (int subIdx=L; subIdx<=R; subIdx++){
        subarr[subIdx-L]=arr[subIdx-1];
    }

    for (int sortIdx = 0; sortIdx < z - 1; ++sortIdx) {
        for (int j = 0; j < z - sortIdx - 1; ++j) {
            if (subarr[j] > subarr[j + 1]) {
                swap(subarr[j], subarr[j + 1]);
            }
        }
    }
    
    cout << "Sorted subarray: ";
    for (int i = 0; i < z; ++i) {
        cout << subarr[i] << " ";
    }
    cout << endl;
} 


int main() {
    sort();
    return 0;
}

