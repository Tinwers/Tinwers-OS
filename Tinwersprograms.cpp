#include<bits/stdc++.h>
using namespace std;
int main(){
	system("title Tinwers OS [version:0.3.0]");
	system("color a");
	int Users[10]={},cs=0,drsj[10];
	char hd;
	string mlh;
	cout<<"Tinwers OS [version:0.3.0]"<<endl;
	cout<<"(c) SUNNY BLANK����������Ȩ����"<<endl<<endl;
	cout<<"�Ƿ������ݣ�(�������һ��ʹ��������F) [T/F] ";
	cin>>hd;
	if(hd=='T'||hd=='t'){
		for(int i=0;i<5;i++){
			cout<<"�������û���"<<i+1<<" : "; 
			cin>>drsj[i];
			Users[i]=drsj[i];
		}
	}
	for(int i=0;i<100;i++){
		cout<<"C:/Users/111>";
		getline(cin,mlh);
		if(mlh=="All Users"){
			cout<<"�����û��� :"<<endl; 
			cout<<"     system"<<endl;
			for(int i=0;i<5;i++){
				if(Users[i]==0){
					cout<<"";
				}
				else{
					cout<<"     "<<Users[i]<<endl;
				}
			}
		}
		if(mlh=="Enroll Users"){
			if(cs<5){
				cout<<"������Ҫע����û��� : ";
				cin>>Users[cs];
				cout<<endl;
				cs++;
				
				
			}
			else{
				cout<<"�Բ���ֻ��ע��5���û���"<<endl; 
			}
		}
		if(mlh=="cls"){
			system("cls");
		}
		if(mlh=="help"){
			cout<<"��ʱֻ֧����Щ����"<<endl;
			cout<<"     All Users  �г������û���"<<endl;
			cout<<"     Enroll Users  ����û���"<<endl;
			cout<<"     cls  ����"<<endl;
		}
		else{
			cout<<"���������ʹ��Tinwers OS�����У�������help��"<<endl; 
		}
	}
	system("pause");
	return 0;
}
