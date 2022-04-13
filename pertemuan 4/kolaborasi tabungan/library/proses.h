using namespace std;

class Proses{
    public :
    void getData(){

        input.open("../dummy/out_input.txt");
        int data[2];
        for(int i = 1; i <= 2; i++){
            input>>data[i];
        }
        input.close();

        jumlah_bulan = data[1];
        uang_bulan = data[2];

        for(int i = 1; i <= jumlah_bulan; i++){
            cout<<"Pengeluaran Bulan "<<i<<" : ";
            cin>>out[i];
        }

        save[1] = uang_bulan - out[1];
        save[2] = uang_bulan - out[2];
        save[3] = uang_bulan - out[3];
        save[4] = uang_bulan - out[4];
        save[5] = uang_bulan - out[5];
        save[6] = uang_bulan - out[6];
        save[7] = uang_bulan - out[7];
        save[8] = uang_bulan - out[8];
        save[9] = uang_bulan - out[9];
        save[10] = uang_bulan - out[10];
        save[11] = uang_bulan - out[11];
        save[12] = uang_bulan - out[12];

        for(int i = 1; i <= jumlah_bulan; i++){
            total_out = total_out + out[i];
        }
        for(int i = 1; i <= jumlah_bulan; i++){
            total_save = total_save + save [i];
        }
        cout<<save[2]<<endl;
    }

    void hasil(){
        file.open("../dummy/out_proses.txt");
        file<<total_out<<endl;
        file<<total_save<<endl;

        for(int i = 1; i < jumlah_bulan; i++){
            file<<out[i]<<endl;
        }
        file<<out[jumlah_bulan];
    }
    private :
        ifstream input;
        ofstream file;
        int jumlah_bulan, uang_bulan;
        int out[20], save[20];
        int total_out = 0;
        int total_save = 0;
};