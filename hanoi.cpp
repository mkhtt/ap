#include<iostream>
#include<vector>
using namespace std;
vector<int> a;
vector<int> b;
vector<int> c;
void printpeg(vector<int> peg){
	for(jnt i=0;i<peg.size();i++)
	cout<<peg[i]<<"\n";
}
void printpegs(){
	cout<<"a:";
	printpeg(a);
	cout<<"b:";
	printpeg(b);
	cout<<"c:";
	printpeg(c);
}
void move(vector<int>& frompeg,vector<int>& topeg){
	topeg.push_back(frompeg.back());
	frompeg.pop_back();
	printpegs();
}
void hanoi(vector<int>& from,vector<int>& to,vector<int>& using,int numofdisks)
{
	if(numofdisks==1)
	  move(from,to);
	else{
		hanoi(from,using,to,numofdisks-1);
		move(from,to);
		hanoi(using,to,from,numofdisks-1);
	}
}
int main(){
	cout<<"plz enter num of disks\n";
	cin>>numofdisks;
	for(int i=numofdisks;i>=1;i--)
	{
		a.push_back(i);
	}
	printpegs();
	hanoi(a,b,c,numofdisks);
}
