#include<iostream>
#include<vector>
#include<fstream>
#include<string>

using namespace std;
fstream p;
class person{
	private:
		int id;
		string name;
		int natcode;
		Date bdate;
		public:
			person(int i,string n,int nt,Date b):id(i),name(n),natcode(nt),bdate(b){}
			void setDop(int y,int m,int d){
				bdate.setDate(y,m,d);
			}
			int getid(){
				return id;
			}
			string getname(){
				return name;
			}	
			void print(){
				cout<<id<<"\t\t"<<name<<"\t\t"<<natcod<<"\t\t";
				bdate.print();
			}	
			
};
class Date{
	private:
		int year;
		int month;
		int day;
		public:
		Date(int y,int m,int d):year(y),month(m),day(d){}
		void setDate(int y,int m,int d){
			year=y;month=m;day=d;
		}
		void getDate(){
			cin>>year>>month>>day;
		}
        void print(){
        	cout<<year<<"/"<<month<<"/"<<day;
		}
	
};
void find_personby_id();
person p;
fstrem fin;
fin.open(filename,ios::in)
vector<string> row;
string line,word;
while(!fin.eof()){
	row.clear();
	getline(fin,line);
	stringstream s(line);
	while(getline(s,word,',')){
		row.pushback(word);
	}
	int pno;
	cout<<"enter id to display details\n";
	cin>>pno;
	if((pno<5||pno>10)){
		cout<<"not exist id";
	}
	int status=0;
    for(id=5;id<10;id++){
	if(id==pno){
		status=1;
		break;
	}
	
    if(status==1){
    cout<<"id"<<stoi(row[0])<<":\n";
	cout<<"name"<<row[1]<<"\n";
	
	}
}
}















