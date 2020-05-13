#include <iostream>
using namespace std;

int main()
{
	int count, i, arr[30], num, first, last, middle;
	cout<<"Berapa elemen yang anda ingin masukkan ? : "; 
        cin>>count;

	for (i=0; i<count; i++)
	{
		cout<<"Masukkan Nilai "<<(i+1)<<": "; 
                cin>>arr[i];
	}
	cout<<"Masukkan nilai yang akan dicari :"; 
        cin>>num;
	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;

	   }
	   else if(arr[middle] == num)
	   {
		cout<<num<<" Ditemukan dalam array pada posisi "<<middle+1<<"\n"; 
                break; 
           } 
           else { 
                last = middle - 1; 
           } 
           middle = (first + last)/2; 
        } 
        if(first > last)
	{
	   cout<<num<<" Tidak ditemukan dalam array ";
	}
	return 0;
}
