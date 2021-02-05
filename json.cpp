#include<iostream>
#include<vector>
#define STRINGVALUE 0
#define INTVALUE 1
#define JSONVALUE 2
using namespace std;
class IllegalnumberException{};

class json{
	protected:
		vector<property> pr;
	public:
		print();//pretty print
};
class property{
	private:
		string attribute;
		Value value;
		public:
			void set_attribute(string a){
				attribute=a;
			}
	};
				
			

class Value{
	private:
		int format_code;
	public:
		int get_format_code();
};
class stringvalue:public Value{
	private:
		string val;
	public:
		void set_stringval(string v){
			val=v;
		}
};
class intvalue:public Value{
	private:
		int val;
};
class jsonvalue:public Value{
	private:
		json val;
};
void addstringtoobject(int parentid,string key,string value){
	int id=0;
	Value v;
	vector<property> pr;
	int getid(){
	
	
	if(v->get_format_code()==JSONVALUE){
		id++;
	}
	return id;
}
if(parentid<0||parentid>id)    throw IllegalnumberException();
else{
	bool status=false;
	if(parentid==id){
		status=true;
		break;
	}
	if(status==true){
		property p;
		p.set_attribute(key);
		stringvalue sv;
		Value* va=&sv;
		sv.set_stringval(value);
		p.setvalue(*va);
		pr[id].push_back(p);
	}
}
}


int main(){
	json j;
	addstringtoobject(2,"color","red");
	json.print();
}

