using namespace std;

class proses{
    public:
        void cetak(){
            cout << "Masukkan Jarak dari Restoran ke Rumah Anda (dalam KM) : ";
            cin >> jarak;
            cout << "Jarak dari Restoran ke Rumah Anda adalah " << jarak << " Kilometer.";
  
        if (jarak <= 3){
            ongkir=15000;
            if (harga <= 25000){
               total = harga + ongkir;
        }     
            else  if (harga > 25000){
               cout << "\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
               total = harga + ongkir-3000;
        }
            else if (harga > 50000){
               cout << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
               diskon = harga * 0.15;
               total = harga - diskon + ongkir-5000;
        }
            else if ((harga > 150000)){
               cout << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
               diskon = harga * 0.35;
               total = harga - diskon + ongkir-8000;
        }
    }
    
    else if (jarak > 3){
              ongkir=25000;
            if (harga <= 25000){
              total = harga + 25000;
        }
            if ((harga > 25000) && (harga <= 50000)){
              cout << "\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
              total = harga + 22000;
        }
            else if ((harga > 50000) && (harga <= 150000)){
              cout << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
              diskon = harga * 0.15;
              total = harga - diskon + 20000;
        }
            else if ((harga > 150000)){
              cout << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
              diskon = harga * 0.35;
              total = harga - diskon + 17000;
        }
    }
}
    
   
    private :
        int pilih1,bayar,kembalian,harga,total,menu,jarak,ongkir,makan;
        float diskon;
};
