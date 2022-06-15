#include <iostream>
using namespace std;
class Studi{
  public:
  void input(){
    for(int i=0; i<24; i++){
      cout << "Masukkan nomor buku ke-" << i+1 << " = " ; //i nya bkl di tmbh 1 trs sampai dengan batas (i<24)
      cin >> data[i]; 
    }
    cout << endl;
  }
  void proses(){
    //urutkan dr kecil ke besar
    for(x=0; x<23; x++){
      for(y=x+1; y<24; y++){
        if(data[x]>data[y]){
          temp = data[x];
          data[x] = data[y];
          data[y] = temp;
        }
      }
    }
    
    //konversi jadi 2 dimensi
    int i = 0;//utk pke while
    while(i<20){
      for(x=0; x<4; x++){
        for(y=0; y<6; y++){
          bil[x][y] = data[i];
          i++;
        }
      }
    }
    
  }
  void output(){
  	cout << "Nomor buku setelah diurutkan : ";
    for (int i=0; i<24; i++){
      cout << data[i] << " ";
    }
    cout << "\nTampilan nomor buku pada rak : " << endl;
    for(int i=0; i<4; i++){
      for (int j=0; j<6; j++){
        cout <<"    |"<<bil[i][j] <<"    |";//biar rapi
      } 
      cout << endl;
    }
    
  }
  private:
  int data[24]; int bil[4][6];
  int x,y,temp;
};
int main(){
  Studi a;
  a.input(); 
  a.proses(); 
  a.output(); 
  return 0;
}
