using namespace std;
class Input {
  public:
void cetak(){
  cout<<"\t\t Aplikasi Tabungan                     "<<endl;
  cout<<"======================================"<<endl;
  cout<<"======================================"<<endl;
  cout<<"\nMasukan uang saku: ";cin>>Usaku;
  cout<<"\nMasukan bulan: ";cin>>bulan;
}
void toFile(){
        ofstream tulis_data;
        tulis_data.open("slip.txt");
        tulis_data<<Usaku<<endl;
        tulis_data<<bulan;
        tulis_data.close();
}
private:
    float Usaku,uang,tabung,totTabungan,totKeluar;
    int bulan;
}; 