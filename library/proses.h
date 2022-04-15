using namespace std;
class Proses {
  public:
  void getData() {
    ifstream infile;
    infile.open("slip.txt");
    infile >> Usaku;
    infile >> bulan;
    infile.close();
  }
void proses() {
  uang=bulan*Usaku;
  totTabungan = 0;
  totKeluar = 0;
  int i=1;
  cout << "==================================="<<endl;
  cout << "\nBulan ke-\tUang :\t\tTabungan :\n";
  while(i<=bulan) {
      cout<<i<< "\t\t\t" <<uang<< "\t\t"<<uang<<endl;
      cout<<"\n\tJumlah pengeluaran  = ";cin>>keluar;
      totKeluar+=keluar;
      uang=uang-keluar;
      i++;
      cout<<"\n";
    }
  }
void toFile() {
  ofstream tofile;
  tofile.open("slip.txt");
  tofile<<uang<< endl;
  tofile<<bulan << endl;
  tofile<<totKeluar;
}
private:
  float Usaku,uang,keluar,tabung,totTabungan,totKeluar;
  int bulan;
};