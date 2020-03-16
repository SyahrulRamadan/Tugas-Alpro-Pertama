#include <iostream>
using namespace std;

//TUGAS 1 NOMOR 1 MENGGUNAKAN ARRAY /*

int main () {
	int i,n,array[100];
	int jumlah = 0;
	cout<<"Masukkan Batas Jumlah Bilangan : ";
	cin>>n;
	cout<<"Masukkan bilangan : ";
	for (int i=0; i<n; i++)
	{
		cin>>array[i];
	}
	system("cls");
	cout<<"Jumlah Bilangan : "<<n<<endl;
	for (int i=0; i<n; i++)
	{
		cout<<" "<<array[i];
		jumlah += array[i];	
	}
	cout<<"Hasil Penjumlahan : "<<jumlah;
}



TUGAS 1 NOMOR 1 // TANPA ARRAY

int main ()
{
	int n, data;
	int hasil =0;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>data;
		hasil += data;
	}
	cout<<hasil;
}



TUGAS 1 NOMOR 2 // MENGGUNAKAN ARRAY

int main()
{
	int array[3][3] = {{2,4,6},{8,10,12},{14,16,18}};
	int k = 0;
	int jumlah_dus = 9;
	system ("cls");
	cout<<"Jumlah Dus : " <<jumlah_dus<<endl;
	cout<<"Nomor Dus : ";
	for (int 1=0; 1<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout<<" " << array[i][j];
		}
	}
	cout << endl;
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout<<"Nomor dus ke " << k+1 << " = " <<array[i][j] << endl;
			k += 1;
		}
	}
}



TUGAS 1 NOMOR 2 // TAN{A ARRAY

int main()
{
	int j,k = 0;
	dor (int i=0; i<9; i++)
	{
		cout<<"Nomor dus ke " << k+1 << " = " << j+2 <<endl;
		j+= 2;
		k++;
	}
}



TUGAS 2 NOMOR 1 // MENGGUNAKAN ARRAY

int main ()
{
	int i,n,array[100];
	int jumlah = 1;
	cin>>n;
	for (int 1=0; 1<n; i++)
	{
		cin>>array[i];
	}
	system("cls");
	cout<<"Jumlah Bilangan : " << n << endl;
	for (int i=0; i<n; i++)
	{
		cout<<" " << array[i];
		jumlah += array[i];
	}
	cout<<"Hasil Pengalian : " << jumlah;
}



TUGAS 2 NOMOR 2 // TANPA ARRAY

int main ()
{
	int n,data;
	int hasil = 1;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>data;
		hasil += data;
	}
	cout<<"Hasil Pengalian : " << hasil;
}
