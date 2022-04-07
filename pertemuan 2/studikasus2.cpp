#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	// Mendeklarasikan variabel
	int jml_beli, bayar, diskon, tot, kembalian, jmlhbrg[50], hrgbrg[50], subttl[50];
	string nama_brg[50];

    cout<<"++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"|            O.O MINIMARKET            |"<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++++\n"<<endl;
	cout<<" Masukan Jumlah Beli : ";
	cin>>jml_beli; // Pengguna memasukan jumlah beli
	
	for (int i=0; i < jml_beli; i++){
		cout<<endl;
		cout<<" Masukan Barang Ke-"<<i+1<<endl;
		cout<<" Nama Barang\t\t: ";
		cin.ignore(); // untuk memungkinkan pengguna menginput space/spasi
	    getline(cin, nama_brg[i], '\n'); // Pengguna input nama barang disimpan pada array nama_barang
	    
		cout<<" Jumlah Barang (satuan)\t: ";
		cin>>jmlhbrg[i]; // Pengguna input jumlah disimpan pada array jumlah
		
		cout<<" Harga Barang (satuan)\t: ";
		cin>>hrgbrg[i]; // Pengguna input harga disimpan pada array harga
		
		subttl[i]=jmlhbrg[i]*hrgbrg[i]; // Menjumlahkan Harga sub total barang
		tot+=subttl[i]; // Menjumlahkan seluruh sub total barang
	}
	cout<<endl;
    cout<<"=================================================="<<endl;
	cout<<"Jumlah Bayar\t\t\t: Rp."<<tot<<endl;
	cout<<"Serahkan tunai pembayaran\t: Rp.";
    cin>>bayar;

	system("cls");
	
    cout<<"=================================================="<<endl;
    cout<<"|                      NOTA                      |"<<endl;
    cout<<"=================================================="<<endl;;
    cout<<"No.   Nama Barang    Jumlah     Harga     Total"<<endl;
    for (int i = 0; i < jml_beli; i++){
    	cout<<i+1<<"\t"<<nama_brg[i]<<"\t"<<jmlhbrg[i]<<"\t"<<hrgbrg[i]<<"\t"<<subttl[i]<<endl; // Menampilkan semua nilai array
	
    }
    cout<<"=================================================\n";
    cout<<"\t\tJumlah Bayar\t: Rp."<<tot<<endl;
    cout<<"\t\tTotal Bayar\t: Rp."<<tot<<endl;
	cout<<"\t\tTunai\t\t: Rp."<<bayar;
	kembalian = (bayar-(tot));
	cout<<"\n\t\tKembali\t\t: Rp."<<kembalian<<endl; // Menampilkan uang kembali

    cout<<"================================================="<<endl;
    cout<<"|                TERIMA KASIH<3                 |"<<endl;
    cout<<"================================================="<<endl;
    
    return 0;
}