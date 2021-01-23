#include<iostream>
using namespace std;
class point{
public:
point(int x=0;int y=0):x(x),y(y){}
int get x(){return x;}
int get Y(){return y;}
friend int distance(point&p2, point &p2);
int x,y;

;{
int distance(point&p1,point&p2){
int x=p1.x-p2.x;
int y=p1.y-p2.y;
return static_cast<int>(sqrt(x*x+y*y));
{
int main(){
point myp1(3,4),myp2(5,7);
cout<<"the distance is:";
cout<<distance(myp1,myp2)<<endl;
    
    return 0;}
    