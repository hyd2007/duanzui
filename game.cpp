#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int x,gs=1,s=0; 
void g1()
{
	freopen("cd.txt","w",stdout);
	cout<<1;
	fclose(stdout);
	string tep="�ص㣺ŦԼ��һ������ ʱ�䣺2010��7��10��15:00";
	for(int i=0;i<tep.size();i++)
	{
		cout<<tep[i];
		Sleep(50); 
	}
	cout<<"\n";
	tep="����ɽķ����������ǵ����ݶӵ�һ���ع�����������������衣"; 
	for(int i=0;i<tep.size();i++)
	{
		cout<<tep[i];
		Sleep(50); 
	}
	cout<<"\n";
	tep="��ʱ���绰���ˣ���һλͬ��";
	for(int i=0;i<tep.size();i++)
	{
		cout<<tep[i];
		Sleep(50); 
	}
	cout<<"\n"; 
}
int main()
{
	string tep="��ӭ��������ı���ϸ������5�����";
	for(int i=0;i<tep.size();i++)
	{
		cout<<tep[i];
		Sleep(50); 
	}
	cout<<"\n";
	tep="1.�����½�ɫ		2.��ȡ�浵";
	while(!s) 
	{
		tep="1.�����½�ɫ		2.��ȡ�浵";
		for(int i=0;i<tep.size();i++)
		{
			cout<<tep[i];
			if(tep[i]!=' ') Sleep(50); 
		}
		cout<<"\n";
		cin>>x;
		if(x==1)
		{
			s++;
		}
		if(x==2)
		{
			freopen("cd.txt","r",stdin);
			cout<<gs;
			fclose(stdin);
			s++;
		}		
	}
	if(gs==1) g1();
 	return 0;
}
