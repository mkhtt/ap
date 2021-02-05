#include<iostream>
using namespace std;
class IllegalnumberException{};

class Time{
	private:
		int hour;
		int minute;
		int second;
	public:
		Time(int h=0,int m=0,int s=0):hour(h),minute(m),second(s){}
		void set_time(int h,int m,int s);
		void get_time();
		void show_time();
};
void Time::set_time(int h,int m,int s){
	if(h<0||h>23||m<0||m>59||s<0||s>59){
		throw IllegalnumberException();
	}else{
		hour=h;
		minute=m;
		second=s;
	}
}
void Time::get_time(){
	cin>>hour>>minute>>second;
}
void Time::show_time(){
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
int main(){
	Time t(23,59,56);
	t.show_time();
	Time i;
	i.show_time();
}
