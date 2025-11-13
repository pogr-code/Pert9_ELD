#include <iostream>
using namespace std;

	
	

void swap(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;

}

	

void text(){
	int n;
	cout << "Masukkan jumlah bilangan : ";
	cin>>n;
	int arr[n];
	
	for (int i=0;i<n;i++){
		cout<<"Masukkan Bilangan ke-"<<i+1<<" : ";
		cin>>arr[i];
		if(arr[i]<0){
			cout<<"No.";
			return;
		}
	}
		for (int i=0;i<n-1;i++){
			for (int j=n-1;j>i;j--){
			if(arr[j]<arr[j+1]){
				swap(arr[j],arr[j+1]);
				
			}
		}
	}


	for(int i=0;i<n;i++){
		cout<<arr[i];
		if (i!= n-1){
			cout<<" , ";
		}
	}
}
int main(){
	text();
}
