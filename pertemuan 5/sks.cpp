#include <iostream>
using namespace std;

class sks { //untuk merepresentasikan anggota data dan prosedur yang di representasikan
public: //untuk mendefinisikan anggota yang berada dilingkungan publik tersebut yang dapat diakses diluar class
  void proses();
  void output();
  int nim;
  char nama[50];

private://untuk mendefinisikan anggota yang berada dilingkungan private tersebut yang hanya dapat diakses oleh class
  int hrg = 120000, sks[20], a, i;
  char mk[20][10];
  float tot, subtot, tot1, tot2, m, n;
}sk;

void sks::proses() { // wadah untuk mendefinisikan bagian dari class proses
  cout << "masukkan jumlah mata kuliah : ";
  cin >> a;
  cout << endl;
  for (int i = 0; i < a; i++) { //perulangan iteratif
    cout << "masukkan MK  : ";
    cin>>mk[i]; //inputan mk akan ditampung ke variabel i
    cout << "masukkan sks : ";
    cin >> sks[i]; //inputan sks akan ditampung ke variabel i
    tot += sks[i]; //menambahkan seluruh jumlah sks yang diinput
    subtot = tot * 120000; //menghitung total harga sks yang telah diinputkan
    m = subtot * 0.1; //menghitung harga diskon sks jika diberi diskon 10%
    tot1 = subtot - m; //menghitung harga sks yang telah diberi diskon
    n = tot1 * 0.05; //menghitung harga sks yang jika diberi diskon 10% dan 5%
    tot2 = tot1 - n; //menghitung harga total sks yang telah kena diskon 10%dan 5%
    cout << endl;
  }
}

void sks::output() { //wadah untuk mendefinisikan bagian dari class output
  cout << "================================" << endl;
  cout << "{      HASIL PENGISIAN KRS     }" << endl;
  cout << "================================" << endl;
  cout << "Nama Mahasiswa   : " << sk.nama << endl;
  cout << "Nim              : " << sk.nim << endl;
  cout << "Harga per sks    : " << hrg << endl;
  cout << "Daftar list MK   : " << endl;
  for (int i = 0; i < a; i++) {
    cout << "\t\t\t\t\t-" << mk[i] << endl;
  }
  cout << "Total sks        : " << tot << endl;
  cout << "subotal sks      : " << subtot << endl;
  cout << "Diskon 10%       : " << tot1 << endl;
  cout << "diskon 5%        : " << tot2 << endl;
  cout << "total pembayaran : " << tot2 << endl;
  cout << endl;
}

int main() { //fungsi utama untuk memberikan nilai balik menurut type datanya untuk diberikan ke perintah return nilai
  int nim;
  char nama[50];
  float tot;
  cout << "================================" << endl;
  cout << "{      INPUT PENGISIAN KRS     }" << endl;
  cout << "================================" << endl;
  cout << "Masukkan Nama : ";
  cin>>sk.nama;
  cout << "Masukkan NIM  : ";
  cin >>sk.nim;
  sks x;
  x.proses(); //memanggil fungsi proses yang telah di isi dan terdapat dalam class sks
  x.output(); //memanggil fungsi output yang telah di isi dan terdapat dalam class sks
}