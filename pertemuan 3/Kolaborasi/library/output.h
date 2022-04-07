using namespace std;

class output{
    public:
        void cetak(){
            ofstream hsl;
            hsl.open("../pradata/output.txt");
            hsl << "        RUMAH MAKAN        " << endl;
            hsl << "===========================" << endl;
            hsl << "Menu Makanan dan Harga :   " << endl;
            hsl << "1. Ayam Geprek  : Rp21.000" << endl;
            hsl << "2. Ayam Goreng  : Rp17.000" << endl;
            hsl << "3. Udang Goreng : Rp19.000" << endl;
            hsl << "4. Cumi Goreng  : Rp20.000" << endl;
            hsl << "5. Ayam Bakar   : Rp25.000" << endl;
            hsl << "\n=========================\n";
            hsl << "Harga pesanan anda : "<<harga<<endl;
            hsl << "\nOngkir sebesar : "<<ongkir<<endl;
    
            cout<<"\n masukkan uang : "; cin>>bayar;
    
    
        if (harga > 25000){
            hsl << "\nAnda mendapatkan potongan ongkir sebesar Rp3.000"<<endl;
            hsl << "\nTotal Harga : " << total<<endl;
            hsl << "\nUang anda : " << bayar<<endl;
            hsl << "\nKembalian : " << bayar - total<<endl;
            hsl.close();
        }
        else if (harga > 50000){
            hsl << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000"<<endl;
            hsl << "\nTotal Harga : " << total<<endl;
            hsl << "\nUang anda : " << bayar<<endl;
            hsl << "\nKembalian : " << bayar - total<<endl;
            hsl.close();
        }
        else if ((harga > 150000)){
            hsl << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000"<<endl;
            hsl << "\nTotal Harga : " << total<<endl;
            hsl << "\nUang anda : " << bayar<<endl;
            hsl << "\nKembalian : " << bayar - total<<endl;
            hsl.close();
        }
        else 
            hsl << "\nTotal Harga : " << total<<endl;
            hsl << "\nUang anda : " << bayar<<endl;
            hsl << "\nKembalian : " << bayar - total<<endl;
            hsl.close();
}   

    

    private :
        int pilih1,bayar,kembalian,harga,total,menu,jarak,ongkir,makan;
        float diskon;
};