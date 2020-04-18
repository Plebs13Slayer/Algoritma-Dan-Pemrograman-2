#include <stdio.h>
#include <iostream>
using namespace std;

int arr[2][2];
int det,x,y;

int main(){
	
	for(x=0;x<2;x++){
		for(y=0;y<2;y++){
			printf("silahkan isi index [%d][%d] : ",x,y);
			cin>>arr[x][y];
		}
	}
	det=(arr[0][0]*arr[1][1]-arr[1][0]*arr[0][1]);
	cout<<"Determinan Matriks Adalah : "<<det;
}
