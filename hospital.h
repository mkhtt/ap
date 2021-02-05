#include<iostream>
using namespace std;
//getter_setter
class person{
	private:
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
		void set_person(string n,int a,int nc){
			if(n=""||a<=0||nc<0){
				throw 5;//abort()
			}else{
				name=n;
				age=a;
				nat_code=nc;
			}
		}
};
class patient:public person{
	private:
		string kindofdiseas;
		public:
			patient(string n,int a,int c,string k)
			:person(n,a,c),kindofdiseas(k){
			}
		string get_kindofdisease(){
			return kindofdisease;
		}
		void set_kindofdisease(string k){
			kindofdisease=k;
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
			void set_id(int i_d){
				id=i_d;
			}
			void set_base_salary(int b){
				base_salary=b;
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
						int get_num_visits(){
							return num_visits;
						}
						void setter_num_visits(int nv){
							num_visits=nv;
						}
					};
