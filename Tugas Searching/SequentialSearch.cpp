#include <cstdlib>
#include <iostream>
using namespace std;

int seqsearch(int dataset[],int target,int n){
  bool found=false;
  int pos=-1;
  for(int i=0;i<n && found!=true;i++)
     if(target==dataset[i]){pos=i;found=true;}

   return pos;
}


int main(){
  int arr[5]={2,3,34,6,23}; //Data
  int pos;
  pos=seqsearch(arr,23,5); /*seqsearch(variabel_array,nilai_yang_dicari,ukuran_array)*/
  if(pos!=-1)
     cout<<"Data ditemukan pada posisi : "<<pos<<".";
  else cout<<"Data tidak ditemukan\n";

  return 0;
}
