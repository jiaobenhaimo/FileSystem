#include<iostream>
#include<cstring>
#include"cmd.cpp"
using namespace std;

int main(){
	system("clear");
	cout<<"Welcome to the Shell Graphic File System !"<<endl;
	system("sleep 1");
	system("clear");
	while(true){
		system("clear");
		cout<<"Current directory:";
		system("pwd");
		cout<<endl;
		system("tree -a -L 1");
		cout<<endl;
		cout<<"Please input your command:"<<endl;
		cout<<">";
		cin>>c;
		if(cmd()==1){
			return 0;
		}		
	}
	return 0;

}
