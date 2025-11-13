#include <iostream>
using namespace std;

void swap(int &x, int &y){
	int temp=x;
	x=y;
	y=temp;
}

void sortTerkutukAsc(int a[],int n){
	for (int i=0;i<n;i++){
		for (int j=0;j<n-i-1;j++){
			if(a[i]<a[i-1]){
				swap(a[i],a[i-1]);
			}
			
		}
	}
}

void sortTerkutukDesc(int b[],int n){
	for (int i=0;i<n;i++){
		for (int j=0;j<n-i-1;j++){
			if(b[i]<b[i+1]){
				swap(b[i],b[i+1]);
			}
			
		}
	}
}

int main(){
	int n;
	

	cout << "Masukkan jumlah bilangan : ";
	cin>>n;
	
	if (n % 2 !=0){
		return 1;
	}
	int z=n/2;
	int arr[n];
	int a[z],b[z];
	for (int i=0;i<n;i++){
		cout<<"Masukkan Bilangan ke-"<<i+1<<" : ";
		cin>>arr[i];
		if(arr[i]<0){
			cout<<"No.";
			return 1;
		}
	}
	
	for (int i=0;i<n;i++){
		if (arr[i] % 2 != 0){
			a[i]=arr[i];
		}
		else{
			b[i]=arr[i];
		}
	}
	sortTerkutukAsc(a,z);
	sortTerkutukDesc(a,z);
	cout<<"Ganjil Asc : \n";
	for (int i=0;i<z;i++){
		cout<<a[i];
		if (i!=n-1){
			cout<<" , ";
		}
		
	}cout<<"\n";
	cout<<"Genap Desc : \n";
	for (int i=0;i<z;i++){
		cout<<b[i];
		if (i!=n-1){
			cout<<" , ";
		}
	}
}
