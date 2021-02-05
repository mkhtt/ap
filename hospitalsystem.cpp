#include<iostream>
#include<vector>
#include<string.h>
#include<stdlib.h>
#include"hospital.h"
using namespace std;
void print_list_persons(char* filename){
	string line;
	vector<string> lines;
	ifstream read(string filename);
	try{
		openfilevalid(read);
	}catch(const char* b){
		cerr<<"error\n";
	}
	while(getline(read,line)){
		lines.push_back(line);
	}
	for(auto i=lines.begin();i!=lines.end();++i){
		cout<<*i<<endl;
	}
}

void find_by_id(string filename){
	ifstream read(filename);
	int count;
	read>>count;
	int pNo;
	cout<<"plz enter id\n";
	cin>>pNo;
	if(pNo<1||pNo>count)   throw 2;
	vector<person> pr;
	int status=0;
	for(i=0;i<count;i++){
		person p=read_person(read);
		pr.push_back(p);
		if((i+1)==pNo){
			cout<<pNo<<":"<<p[i].get_name<<endl;
		}
	}
}
person read_person(ifstream read){
string n;//name
int a;//age
int ncd;//natcode
char ch;//ch=','  csv file
cin>>n>>ch>>a>>ch>>ncd;
return person(n,a,ncd);	
}

int main(){
char ch;
bool repeat=true;
while(repeat==true){
	cout<<"1.print list doctors\n";
	cout<<"2.print list Nurces\n";
	cout<<"3.find doctors by id\n";
	cout<<"4.Exit\n";
	cin>>ch;
	system("cls");
	switch(ch){
		case 1: print_list_persons("Doctor.csv"); 
		        break;
		case 2: print_list_persons("Nurce.csv");
		        break;
		case 3: find_by_id("Doctor.csv");
		        break;
		case 4: exit(0);
	}
	default:{
		cout<<"wrong input\n";
		break;
	}
}	
}
void openfilevalid(ifstream read){
	if(!read){
		throw "can not open";
	}
}
