#include<iostream>
using namespace std;

class sorting{
  public :
    void menu();
    void add();
    void scr();
    void cek(int);
    void sort();
  private :
    int choice, x, simpan_data, cari; 
    int jumlah_data = 0;
    int nim[12];
    string nama[50];
    string prodi[50];
    string hp[30];
};

void sorting::menu(){
  mulai:    //memulai program dengan menu
  cout<<"⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎"<<endl;
  cout<<"⁑ Rekap Data Mahasiswa UAD   ⁑"<<endl;
  cout<<"⁑ 1. Masukkan data           ⁑"<<endl;
  cout<<"⁑ 2. Cek data                ⁑"<<endl;
  cout<<"⁑ 3. Cari data               ⁑"<<endl;
  cout<<"⁑ 4. Urutkan data            ⁑"<<endl;
  cout<<"⁑ 5. selesai                 ⁑"<<endl;
  cout<<"⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎⁎"<<endl;
  cout<<"Silahkan di pilih : "; cin>>choice;
  cout<<endl<<endl;
  switch (choice){
    case 1 :  //menampilkan isi menu 1. Masukkan data
      add();
      goto mulai;
      break;
    case 2 :  //menampilkan isi menu 2. Cek data
      cek(jumlah_data);
      goto mulai;
      break;
    case 3 :  //menampilkan isi menu 3. Cari data
      scr();
      goto mulai;
      break;
    case 4 :  //menampilkan isi menu 4. Urutkan data
      cout<<"1. ascending\n";
      cout<<"2. descending\n"; //udh mulai bisa yg ini 
      cout<<"pilih mengurutkan secara apa :"; cin>>x;
      cout<<endl;
      sort();
      goto mulai;
      break;
    case 5 :  //menampilkan isi menu 5. selesai
      system ("clear");
      cout<<"anda telah out, thank u!";
      cout<<endl; //tolong yang ini ga bs kluar programnya AHAHAHA OKEEE
      break;
    // default :  //ketika inputan salah
    //   cout<<"what you entered is wrong, please try again";
    //   cout<<endl;
    //   goto mulai;
    //   cout<<endl;
    //   break;
  }
  cout<<endl;
}

void sorting::add(){
  //memasukkan nilai mhs[Jumlah_Data]
  if(choice==1){
  cout<<"Masukkan data mahasiswa"<<endl;
  cout << "Masukkan NIM Mahasiswa : ";
  cin>> nim[jumlah_data];
  cout << "Masukkan Nama Mahasiswa : "; //input nama
  cin.ignore();
  getline(cin, (nama[jumlah_data]));
  cout << "Masukkan Prodi Mahasiswa : "; //input prodi
  getline(cin, (prodi[jumlah_data]));
  cout << "Masukkan No HP Mahasiswa : "; //input nope
  cin >> hp[jumlah_data];
  cout << endl; //input akan ditampung ke mhs[jumlah_data]

  jumlah_data += 1; //Jumlah_Data = Jumlah_Data + 1
  simpan_data = jumlah_data;
  cout<<"data tersimpan";
  cout<<endl<<endl;
  }
}

void sorting::cek(int jumlah_data){
  if(jumlah_data==0){
    cout<<"Data masih kosong\n";
    cout<<"silahkan mengisi data";
    menu();
    cout<<endl;
  }
  else{
    cout << "No.\t";
    cout << "Nim\t\t";
    cout << "Nama\t\t\t";
    cout << "Prodi\t\t\t";
    cout << "\tNo HP"<<endl<<endl;

    for (int i = 0; i < jumlah_data; i++){
      cout <<i<< "\t";
      cout << nim[i] << "\t";
      cout << nama[i] << " ";
      cout << prodi[i] << "\t\t";
      cout << hp[i]<<endl<<endl;
    }
  }
}

void sorting::scr(){
  if(jumlah_data==0){
    cout<<"Data masih kosong\n";
    cout<<"silahkan mengisi data";
    menu();
    cout<<endl;
  }
  else if(choice==3){
    cout<<"Masukkan data yang ingin di cari : "; cin>>cari;
    cout << "ID\t";
    cout << "Nim\t\t";
    cout << "Nama\t\t\t";
    cout << "Prodi\t\t\t";
    cout << "\tNo HP"<<endl;
    for (int i = 0; i < jumlah_data; i++){
      if (nim[i] == nim[cari]){
        cout << cari << "\t";
        cout << nim[cari] << "\t";
        cout << nama[cari] << " ";
        cout << prodi[cari] << "\t\t";
        cout << hp[cari]<<endl<<endl;
        }
  } 
  }
  else{
    cout<<"Data tidak di temukan!";
    cout<<endl;
  }
}

void sorting::sort(){
  int i, j, tmp;
  if(x==1){
   for(i=1; i<=jumlah_data; i++){
    for(j=i; j<=jumlah_data; j++){
      if(nim[i] > nim[j]){
        tmp = nim[j];
        nim[j] = nim[i];
        nim[i] = tmp;
              }
       }
}
  for(i = 0; i<=jumlah_data;i++){
    cout << i << "\t";
    cout << nim[i]<<"\t";
    cout << nama[i]<<"\t\t";
    cout << prodi[i]<<"\t\t";
    cout << hp[i]<<"\n\n";
}    
}
  else if(x==2){
    for(i=0; i<=jumlah_data; i++){
    for(j=i; j<=jumlah_data; j++){
      if(nim[i] < nim[j]){
        tmp = nim[j];
        nim[j] = nim[i];
        nim[i] = tmp;
        }
    }          //kok malah tambah error asu //tris ayo presentasi
}  
  for (int i = 0; i < jumlah_data; i++){
    cout << i << "\t";
    cout << nim[i]<<"\t";
    cout << nama[i]<<"\t\t";
    cout << prodi[i]<<"\t\t";
    cout << hp[i]<<"\n\n";
}   
}
}

int main(){
  int jumlah_data;
  sorting c;
  c.menu();
  c.add();
  c.cek(jumlah_data);
  c.scr();
  c.sort();
  return 0;
}