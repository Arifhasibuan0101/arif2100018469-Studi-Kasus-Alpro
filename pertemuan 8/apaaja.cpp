#include <iostream>
#include<stdio.h>
#include<iomanip>
#include <cstdlib>
#include<string>

using namespace std;
class matriks{
friend ostream& operator<<(ostream&, matriks&);
friend istream& operator>>(istream&, matriks&);
public:
  void baca_matriks();
  void cetak_matriks();
  void convert_matriks();
  void total_matriks();
  void cetak_total();
private:
  string A[10][10];
  int B[10][10];
  int C[10];
  int total;
};

void matriks::baca_matriks(){
  int i,j;
  for(i=0;i<6;i++)
    for(j=0;j<3;j++){
      if(j==0){
        cout<<" Masukkan Nama ke-"<<i<<" : ";
        cin.ignore();
        getline(cin, (A[i][j]));
      }else if (j==1){
        cout<<" Masukkan stok ke-"<<i<<" : ";
        cin>>A[i][j];
      }else if(j==2){
        cout<<" Masukkan harga ke-"<<i<<" : ";
        cin>>A[i][j];
      }
      }
  cout<<endl;
    }
void matriks::cetak_matriks(){
  int i,j;
  for(i=0;i<6;i++){
    for(j=0;j<3;j++)
      cout<<setw(6)<<A[i][j]<< " ";
    cout<<endl;
  }
}
void matriks::convert_matriks(){
  int i,j;
  for(i=0;i<6;i++){
    for (j=1;j<3;j++)
      B[i][j]=atoi(A[i][j].c_str());
  }
}
void matriks::total_matriks(){
  int i,j=1;
  for(i=0;i<6; i++){
   C[i]=B[i][j]*B[i][j+1]; 
  }
  total=C[0]+C[1]+C[2]+C[3]+C[4]+C[5];
  cout<<"================================================="<<endl;
  cout<<" total penjualan: "<<total<<endl;
}

istream& operator>>(istream& in, matriks& A){
  cout<<" Masukkan data matriks\n";
  A.baca_matriks();
  cout<<"===========================================================";
  cout<<" \nNama \t\t   | \t\t stok    | \t\t Harga Satuan\n";
  cout<<"==========================================================="<<endl;
  A.cetak_matriks();
  A.convert_matriks();
  A.total_matriks();
  return in;
}
int main(){
  matriks matriks1;
  cout<< " Memasukkan data matriks  \n";
  cin>>matriks1;
  return 0;
}
