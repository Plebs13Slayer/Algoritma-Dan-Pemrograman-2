#include <iostream>
using namespace std;

#define MAX(a,b) ((a)>(b)?(a):(b)) //Deklarasi Makro Function

int main(){
	int x,y;
	
	cout<<"Masukkan 2 Angka Untuk Dibandingkan :\n";
	cin>>x;
	cin>>y;
	
	printf("Angka Yang Lebih Besar Adalah = %d",MAX(x,y));
}
