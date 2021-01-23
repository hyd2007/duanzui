#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int x,gs=1,s=0; 
void g1()
{
	freopen("cd.txt","w",stdout);
	cout<<1;
	fclose(stdout);
	string tep="地点：纽约的一处餐厅 时间：2010年7月10日15:00";
	for(int i=0;i<tep.size();i++)
	{
		cout<<tep[i];
		Sleep(50); 
	}
	cout<<"\n";
	tep="你是山姆·费舍尔，是第三梯队的一名特工。你正在享用下午茶。"; 
	for(int i=0;i<tep.size();i++)
	{
		cout<<tep[i];
		Sleep(50); 
	}
	cout<<"\n";
	tep="这时，电话响了，是一位同事";
	for(int i=0;i<tep.size();i++)
	{
		cout<<tep[i];
		Sleep(50); 
	}
	cout<<"\n"; 
}
int main()
{
	string tep="欢迎来到断罪（改编自细胞分裂5：断罪）";
	for(int i=0;i<tep.size();i++)
	{
		cout<<tep[i];
		Sleep(50); 
	}
	cout<<"\n";
	tep="1.创建新角色		2.读取存档";
	while(!s) 
	{
		tep="1.创建新角色		2.读取存档";
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
