 #include<iostream>
  using namespace std;
   class batsman
    {
 int bcode;
	 string bname;
 int innings,notout,runs;
float batavg;
void calcavg() { batavg=runs/(innings-notout); }
 public :
 void getdata();
 void displaydata();
 }; 
void batsman::getdata()
  {
  cout<<"Enter batsman code";
 cin>>bcode;
 cout<<"Enter batsman name";
 cin>>bname;
  cout<<"enter innings,notout and runs";
  cin>>innings>>notout>>runs;
 calcavg();
  }
  void batsman::displaydata()
 {
	cout<<"batsman code";
}
