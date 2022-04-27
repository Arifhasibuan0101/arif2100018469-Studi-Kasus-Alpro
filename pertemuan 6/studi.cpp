#include <iostream>
#include<iomanip>
using namespace std;

class learn{
public :
  void input();
  void output();
  void proses();
private :
  string dosen, mk;
  int n, nilai_maks, nilai_min, jum,i;
  int nilai[100];
  float rata2 = 0;
};
void learn::input() {
  cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
  cout << "|     Penginputan Nilai Dari dosen     |" << endl;
  cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
  cout << "Masukkan Nama Mata Kuliah : ";//cin >> dosen;
  getline(cin, mk);//menambah spasi
  cout << "Masukkan Nama Dosen       : ";
  getline(cin, dosen);
  cout<<" Berapa mahasiswa yang ingin anda input? : ";
  cin>>n;
  for (int i = 0; i < n; i++) {
    cout << "Nilai Mahasiswa ke –  " << i + 1 << ": ";
    cin >> nilai[i]; 
}//input nilai mahasiswa
  cout<<"----------------------------------------"<<endl;
}

void learn::proses(){
  nilai_maks = nilai[0];
  nilai_min = nilai[0];
  for(int a = 0; a < n; a++){
    if(nilai_min > nilai[a]){
      nilai_min = nilai[a];}
    if(nilai_maks < nilai[a]){
      nilai_maks = nilai[a];}
    }
  for(int i=0; i<n; i++){
		rata2+=nilai[i];
	}
	rata2/=n;
}

void learn::output(){
  cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
  cout << "|  Hasil Penginputan Nilai Dari dosen |" << endl;
  cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
  cout<<"Mata kuliah : "<<mk <<endl;
  cout<<"Nama dosen : "<<dosen <<endl;
  cout<<"+++++++++++++++++++++++++++++++++++++++++"<<endl;
  cout<<"Hasil input nilai mahasiswa : "<<endl;
  for(int a = 0; a < n; a++){
    cout<<"- "<<nilai[a]<<endl;
  }//menampilkan nilai mahasiswa
  cout<<"Nilai Tertinggi : "<<nilai_maks<<endl;
  cout<<"Nilai Terendah : "<<nilai_min<<endl;
  cout<<"Nilai rata-rata mahasiswa : "<<rata2<<endl;
}

int main(){
  learn o; 
  o.input();
  o.proses();
  o.output();
  return 0;
}