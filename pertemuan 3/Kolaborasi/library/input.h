using namespace std;

class input{
    public:
        void cetak(){
  
    cout << "       RUMAH MAKAN        " << endl;
    cout << "==========================" << endl;
    cout << "Menu Makanan dan Harga :  " << endl;
    cout << "1. Ayam Geprek  : Rp21.000" << endl;
    cout << "2. Ayam Goreng  : Rp17.000" << endl;
    cout << "3. Udang Goreng : Rp19.000" << endl;
    cout << "4. Cumi Goreng  : Rp20.000" << endl;
    cout << "5. Ayam Bakar   : Rp25.000" << endl;
    
    //memasukan menu yg dipilih
    cout <<"\nBanyak pesanan : ";
    cin >> menu;
  
    hsl << "======================"<< endl;
    hsl << "menu yang di pesan: "<<endl;
    for(int a=1;a<=menu;++a){
        cout << "\nSilahkan Pilih Menu Anda : ";
        cin >> pilih1;
        if (pilih1==1){
            cout << "1. Ayam Geprek : Rp21.000" << endl;
            harga=harga+21000;
        }
        else if(pilih1==2){
            cout << "2. Ayam Goreng : Rp17.000" << endl;
            harga=harga+17000; 
        }
        else if(pilih1==3){
            cout << "3. Udang Goreng : Rp19.000" << endl;
            harga=harga+19000; 
        }
        else if(pilih1==4){
            cout << "4. Cumi Goreng : Rp20.000" << endl;
            harga=harga+20000; 
        }
        else if(pilih1==5){
            cout << "5. Ayam Bakar : Rp25.000" << endl;
            harga=harga+25000;
        }
    }
}
    void toFile(){
        hsl.open("../pra_data/output.txt");
        hsl << "1. Ayam Geprek : Rp21.000"<<endl;
        hsl << "2. Ayam Goreng : Rp17.000"<<endl;
        hsl << "3. Udang Goreng : Rp19.000"<<endl;
        hsl << "4. Cumi Goreng : Rp20.000"<<endl;
        hsl << "5. Ayam Bakar : Rp25.000"<<endl;
        hsl.close(); 
            
    }

    private :
        ofstream hsl;
        int pilih1,bayar,kembalian,harga,total,menu,jarak,ongkir,makan;
        float diskon;
};