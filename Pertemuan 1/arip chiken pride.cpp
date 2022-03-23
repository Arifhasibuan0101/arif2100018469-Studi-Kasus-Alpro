#include <iostream>

using namespace std;
int main () {
	int jmlhBakar, jmlhGoreng, ttlBakar, ttlGoreng, ttlHarga, jawab,kembali,jwb;
	int hrgBakar=21000, hrgGoreng=17000, diskon, ttlDiskon, kembaliD,pilih;
	
	cout<<"\t#SELAMAT DATANG DI KEDAI ARIP CHIKEN PRIDE#\n";
	cout<<"\t-------------------------------------------\n"<<endl;
	cout<<"*Menu yang tersedia : *\n";
	cout<<"1. Ayam Bakar\t = Rp."<<hrgBakar<<endl;
	cout<<"2. Ayam Goreng\t = Rp."<<hrgGoreng<<endl<<endl;
	cout<<"==========================================\n";
	cout<<"Apakah Anda ingin memesan sesuatu ?\n1. Ya\n2. Tidak"<<endl;
	cout<<"Jawab : "; cin>>jawab;
	system ("cls");
	if (jawab==1){
		cout<<endl;
//		cout<<"==========================================\n";
		cout<<"#Masukkan pesanan Anda #\n"<<endl;
		cout<<"==========================================\n";
		cout<<"Nama menu\t = Ayam Bakar"<<endl;
		cout<<"Harga\t\t = Rp."<<hrgBakar<<endl;
		cout<<"Jumlah pesanan\t = "; cin>>jmlhBakar;
		ttlBakar=jmlhBakar*hrgBakar;
		cout<<endl;
		cout<<"Nama menu\t = Ayam Goreng"<<endl;
		cout<<"Harga\t\t = Rp."<<hrgGoreng<<endl;
		cout<<"Jumlah pesanan\t = "; cin>>jmlhGoreng;
		ttlGoreng=jmlhGoreng*hrgGoreng;
		cout<<"\n==========================================\n";
		cout<<"Silahkan serahkan uang tunai untuk pembayaran"<<endl;
		cout<<"Rp."; cin>>jwb;
		
		ttlHarga=ttlBakar+ttlGoreng;
		
		system ("cls");
		cout<<"==================================================="<<endl;
		cout<<"\t\t#KEDAI ARIP CHIKEN PRIDE#"<<endl;
		cout<<"\t\tBanguntapan Yogyakarta"<<endl;
		cout<<"===================================================\n"<<endl;
		cout<<"Ayam Bakar\t"<<jmlhBakar<<"\t"<<hrgBakar<<"\t"<<ttlBakar<<endl;
		cout<<"Ayam Goreng\t"<<jmlhGoreng<<"\t"<<hrgGoreng<<"\t"<<ttlGoreng<<endl;
		cout<<"\t\t   Harga jual : "<<ttlHarga<<endl;
		if (ttlHarga>45000){
			diskon=0.1*ttlHarga;
			ttlDiskon=ttlHarga-diskon;
			kembaliD=jwb-ttlDiskon;
			cout<<"==Anda mendapatkan diskon 10% dari total pembelian (>45.000)==";
			cout<<"\n\t   TOTAL HARGA+DISKON : "<<ttlDiskon<<endl;
			cout<<"\t\t\tTotal : "<<ttlDiskon<<endl;
			cout<<"\t\t\tTunai : "<<jwb<<endl;
			cout<<"\t\t      Kembali : "<<kembaliD;
			cout<<endl<<endl;
			cout<<"===Terimakasih telah berbelanja di kedai kami===\n\n";
		}
		else{
			kembali=jwb-ttlHarga;
			cout<<"=======Anda tidak mendapatkan diskon apapun======="<<endl;
			cout<<"\t\t\tTotal : "<<ttlHarga<<endl;
			cout<<"\t\t\tTunai : "<<jwb<<endl;
			cout<<"\t\t      Kembali : "<<kembali;	
			cout<<endl<<endl;
			cout<<"===Terimakasih telah berbelanja di kedai kami===\n";
		}
	}
	else{
		cout<<endl;
//		cout<<"==========================================\n";
		cout<<"\n#Terimakasih silahkan berkunjung kembali#\n";
	}
	
	return 0;
}
