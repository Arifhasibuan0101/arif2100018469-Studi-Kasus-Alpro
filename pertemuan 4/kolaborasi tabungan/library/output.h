using namespace std;

class Output{
    public :
    void getData(){
        input.open("../dummy/out_input.txt");
        input>>jumlah_bulan;
        input.close();
        jumlah_bulan = jumlah_bulan + 2;

        proses.open("../dummy/out_proses.txt");
        proses>>total_out;
        proses>>total_save;
        int out[25];
        for(int i=3; i <= jumlah_bulan; i++){
            proses>>out[i];
        }
        proses.close();
    }
    void hasil(){
        file.open("../dummy/out_output.txt");
        file<<"Pengeluaran Perbulan"<<endl;
        for(int i=3; i <= jumlah_bulan; i++){
            file<<" bulan "<<i-2<<" "<<out[i]<<endl;
        }
        file<<"=================================="<<endl;
        file<<"Total Pengeluaran :"<<total_out<<endl;
        file<<"sisa uang :"<<total_save<<endl;
    }
    private :
    ifstream input;
    ifstream proses;
    ofstream file;
    int jumlah_bulan, total_out, total_save;
    int out[25];
};