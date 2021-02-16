#include<iostream>
#include<cstring>

using namespace std;
char c[100];
//commands
//File Copy
int cp(){
	char f1[100];
	char f2[100];
	char out[205];
	cout<<"Choose the File you want to copy (From this directory):";
	cin>>f1;
	system("sleep 0.3");
	cout<<"Choose the directory you want to copy to (Absoulute Directory):";
	cin>>f2;
	char a[4]="cp";
	char s[2]=" ";
	strcat(out,a);
	strcat(out,s);
	strcat(out,f1);
	strcat(out,s);
	strcat(out,f2);
	system(out);
	return 0;	
}
//Quit Programme
int quit(){
	cout<<"Are you sure to quit? (y/n)";
	char a;
	cin>>a;
	if(a=='y'||a=='Y'){
		system("clear");
		return 1;
	}
	return 0;
}
//version
int ver(){
	system("clear");
	cout<<"Shell Graphic File System"<<endl;
	cout<<"by Yuanzhe Jiao"<<endl<<endl;
	cout<<"version alpha 0.1.1"<<endl;
	cout<<"An Unix based C++ Programme."<<endl<<endl;
	cout<<"On Feb 16, 2021"<<endl<<endl;
	system("sleep 10");
	return 0;
}
//indexing
int cmd(){
	if(!(strcmp(c,"copy"))){
		cp();
	}
	if(!(strcmp(c,"quit"))){
                int a=0;
		a=quit();
		return a;
        }
	if(!(strcmp(c,"version"))){
                ver();
        }
	return 0;
}
