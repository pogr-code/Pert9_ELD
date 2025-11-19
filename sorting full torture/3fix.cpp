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
    for (int i = L; i < R; i++){
        for (int j = L; j < R-i+L; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << "Array setelah diurutkan dari indeks " << L << " sampai " << R << ": ";
    for (int i = 0; i < n; i++){   
        cout << arr[i];
        if (i != n-1) cout << ", ";
    }

}
int main() {
    sort();
    return 0;
}

