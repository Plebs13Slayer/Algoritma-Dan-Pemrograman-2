#include <stdio.h>
#include <iostream>
using namespace std;

int arr[3][3];
int det,x,y;
int arrm[3][3];

int main(){
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			printf("Silahkan Masukkan Index [%d][%d] : ",x,y);
			cin>>arr[x][y];
		}
	}
	det=arr[0][0]*arr[1][1]*arr[2][2]+arr[0][1]*arr[1][2]*arr[2][0]+arr[0][2]*arr[1][0]*arr[2][1]-arr[0][2]*arr[1][1]*arr[2][0]-arr[0][0]*arr[1][2]*arr[2][1]-arr[0][1]*arr[1][0]*arr[2][2];
	cout<<"Determinan Matriks Adalah : "<<det;
	
	arrm[0][0]=arr[1][1]*arr[2][2]-arr[2][1]*arr[1][2];
	arrm[0][1]=arr[1][0]*arr[2][2]-arr[2][0]*arr[1][2];
	arrm[0][2]=arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1];
	arrm[1][0]=arr[0][1]*arr[2][2]-arr[2][1]*arr[0][2];
	arrm[1][1]=arr[0][0]*arr[2][2]-arr[2][0]*arr[0][2];
	arrm[1][2]=arr[0][0]*arr[2][1]-arr[2][0]*arr[0][1];
	arrm[2][0]=arr[0][1]*arr[1][2]-arr[1][1]*arr[0][2];
	arrm[2][1]=arr[0][0]*arr[1][2]-arr[1][0]*arr[0][2];
	arrm[2][2]=arr[0][0]*arr[1][1]-arr[1][0]*arr[0][1];
	
	cout<<"\nMinor Mariks Adalah :";
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			cout<<arrm[x][y]<<" ";
		}
	}
}
