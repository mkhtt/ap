#include<iostream>
#include<string>
#include<fstream>
using namespace std;
fstream p;

class person{
	protected:
	string name;
	int age;
	int nat_code;
	public:
		person(string n,int a,int c):name(n),age(a),nat_code(c){
		}
		string get_name(){
			return name;
		}
		int get_age(){
		return age;
		}
		int getnat_code(){
			return nat_code;
		}
};
class patient:public person{
	private:
		string kindofdiseas;
		public:
			patient(string n,int a,int c,string k)
			:person(n,a,c),kindofdiseas(k){
			}
			
};
class Employee:public person{
	protected:
		int id;
		int base_salary;
		public:
			Employee(string n,int a,int c,int i)
			:person(n,a,c),id(i){}
			int get_id(){return id;}
			int get_base_salary(){return base_salary;}
			int calc_salary(int hours_worked){
				int hourly_pay=base_salary/240;
				return base_salary+(hours_worked-240)*hourly_pay*1.4;
			}
		};
		class Nurce:public Employee{
			public:
				Nurce(string n,int a,int c,int i)
				:Employee(n,a,c,i){}
				void GetNurce();
				void writeNurce();
				void printlistNurce();
			};
			class Doctor:public Employee{
				private:
					int num_visits;
					public:
						Doctor(string n,int a,int c,int i,int nv)
						:Employee(n,a,c,i),num_visits(nv){}
						void GetDoctor();
						
						int calc_salary(int hours_worked){
							int extra_visits=num_visits-10;
							return Employee::calc_salary(hours_worked)+extra_visits*120000;
						}
					};
					int main(){
						
					}
					void Nurce::GetNurce(){
						cout<<"\n\tenter name:";
						cin>>name;
						cout<<"\n\tenter nat_code:";
						cin>>nat_code;
						cout<<"\n\tenter age:";
						cin>>age;
						cout<<"enter id:";
						cin>>id;
					}
						void Nurce::writeNurce(){
						Nurce *n;
						n->GetNurce();
						p.open("data.csv",ios::in|ios::out|ios::binary);
						p.seekp(sizeof(class Nurce)*id,ios::beg);
						p.write((char*)&n,sizeof(class Nurce));
						p.close();
					}
					void Nurce::printlistNurce(){
						Nurce *n;
						if(id!=0){
							cout<<id<<":"<<name<<","<<nat_code<<","<<age;
					}
					p.open("data.csv",ios::in|ios::out|ios::binary);
					p.read((char)*&n,sizeof(class Nurce));
					while(!p.eof()){
						p.read((char)*&n,sizeof(class Nurce));
					}
				}
					
						
						
					
					
					
			
					
				
						
						
				
						
						
					
				
					
					
						
						
					
					
						
						
						
			
				
		
				
			
			

