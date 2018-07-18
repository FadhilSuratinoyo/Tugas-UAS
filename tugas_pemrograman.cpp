#include<iostream>
#include<conio.h>

using namespace std;
class Bank
{
	private:
		char name[30];
		char Accname[20];
		char type[20];
		int ibalance;
		int dop;
		int with;
	public:
		void menu(void);
		void get (void);
		void deposite(void);
		void check(void);
		void withdraw(void);
		void info (void);
};
	void Bank::menu()
	{
		int me;
		cout<<"\n\tMemilih pilihan anda dari 1-sampai-6\n";
		cout<<"\t1.Membuat Akun Baru \n";
		cout<<"\t2.Deposit uang anda\n";
		cout<<"\t3.Cek Saldo anda\n";
		cout<<"\t4.Penarikan jumlah\n";
		cout<<"\t5.Semua info akun anda\n";
		cout<<"\t6.keluar";cout<<"\n\t\t";
		cin>>me;
		switch(me)
		{
			case 1:
				get();
				break;
				
			case 2:
				deposite();
				break;
				
			case 3:
				check();
				break;
			
			case 4:
				withdraw();
				break;
			
			case 5:
				info();
				break;
			
		}
	}
void Bank::get()
{
	int go;
	cout<<"\t\tMasukan Nama:";
	cin>>name;
	cout<<"\n";	
	cout<<"\t\tMasukan Nama Akun:";
	cin>>Accname;
	cout<<"\n";
	cout<<"\t\tMasukan jeniis akun:";
	cin>>type; 	
	cout<<"\n";
	cout<<"\t\tBerapa banyak uang yang ingin anda deposit?";
	cout<<"\t\t";
	cin>>ibalance;
	
	cout<<"\n\t\tTekan \'0\' Untuk pergi ke munu utama";
	cout<<"\n\t\t";
	cin>>go;
	if(go==0)
	{
		menu();
	}
		
}	
void Bank::deposite()
{
	int go;
	cout<<"\n\t\tBerapa banyak uang yang ingin anda deposit?";
	cout<<"\t\t";
	cin>>dop;
	dop+=ibalance;
	cout <<"\n\t\tTekan \'0\' Untuk pergi ke munu utama";
	cout<<"\n\t\t";
	cin>>go;
	if(go==0)
	{
		menu();
	}
		
}

void Bank::check()
{
	int go;
	cout<<"\t\tsaldo anda saat ini:"<<dop<<"\n";
	cout <<"\n\t\tTekan \'0\' Untuk pergi ke munu utama";
	cout<<"\n\t\t";
	cin>>go;
	if(go==0)
	{
		menu();
	}
}

void Bank::withdraw()
{
	int go;
	cout<<"\n\t\tBerapa banyak uang yang ingin anda tarik\n";
	cout<<"\t\t";
	cin>>with;
	dop-=with;
	cout<<"\n\t\tsetelah menarik saldo:"<<dop<<"\n\t";
	cout <<"\n\t\tTekan \'0\' Untuk pergi ke munu utama";
	cout<<"\n\t\t";
	cin>>go;
	if(go==0)
	{
		menu();
	}
}
void Bank::info()
{
	int go;
	cout<<"\n\t\tNama Deposan:"<<name<<"\n";
	cout<<"\t\tNama akun:"<<Accname<<"\n";
	cout<<"\t\tJenis akun:"<<type<<"\n";
	cout<<"\t\tJumlah dalam akun anda:"<<dop;
	cout<<"\n\t\tSetelah Menarik saldo:"<<dop<<"\n\t";
	cout <<"\n\t\tTekan \'0\' Untuk pergi ke munu utama";
	cout<<"\n\t\t";
	cin>>go;
	if(go==0)
	{
		menu();
	}
	
}
int main()
{
	Bank obj;
	obj.menu();
	getch();
	return 0;
}
