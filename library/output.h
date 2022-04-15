class output {
  public :
    void getData() {
      ifstream infile;
      infile.open("slip.txt"); 
    		while(!infile.eof()) {
          infile >> uang;
          infile >> bulan;
          infile >> totKeluar;
          infile.close();
    		}
    }
void Out(){
  cout<<"\t\t Aplikasi Tabungan                     "<<endl;
  cout<<"======================================"<<endl;
  cout<<"======================================"<<endl;
  cout<<"\nTotal pengeluaran selama "<<bulan<< " bulan: "<<totKeluar<<endl;
  cout<<"\nTotal Tabungan \t: "<<uang<<endl;
}
private:
    float uang,tabung,totTabungan,totKeluar;
    int bulan;
}; 