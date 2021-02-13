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

//indexing
int cmd(){
	if(!(strcmp(c,"copy"))){
		cp();
	}
	
	return 0;
}
