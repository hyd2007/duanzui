#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int x,gs=1,s=0;
void p(string tep)
{
	for(int i=0;i<tep.size();i++)
	{
		cout<<tep[i];
		Sleep(50); 
	}
	cout<<"\n";
	Sleep(500);
}
void save()
{
	cout<<"正在保存\n"; 
	FILE*fp;
	fp=fopen("cd.txt","w");
	fprintf(fp,"%d",gs);
	fclose(fp);
	cout<<"已保存\n"; 
}
void g2()
{
	save();
	p("第二关仍未开发完毕，请关注更新：https://github.com/hyd2007/duanzui或https://hyd2007.blog.luogu.org/duan-zui"); 
}  
void g1()
{
	save();
	p("地点：纽约的一处餐厅 时间：2060年7月10日15:00");
	p("你是山姆·费舍尔，是第三梯队的一名特工。你正在享用下午茶。");
	p("这时，服务员端上来一台手机。"); 
	p("手机响了，是格伦——以前的一位同事。");
	p("山姆，过得还好吗？");
	p("有什么事直说就行了，格伦。"); 
	p("你可能会不相信——你的女儿还活着.");
	p("我的女儿不是在几年前的车祸中去世了吗？");
	p("你只要帮我做事，我就可以让你父女团聚。");
	p("1.相信她     2.不相信她");
	cin>>x; 
	if(x==1)
	{
		p("好，我相信你。");
		p("首先，在餐厅后的街区有恐怖组织的机器人要进行袭击，你小心一点。");
	}
	else
	{
		p("我很难相信你，格伦。");
		p("你不信也罢，在餐厅后的街区有恐怖组织的机器人要进行袭击，耗子尾汁。");
	}
	p("一声枪声突然响起，人们四散逃离。");
	p("前面有四个机器人。");
	p("请从左到右打出机器人的坐标（左上角的坐标为0 0，先列后行）（X，Y空格隔开）,消灭机器人（#为空地，*为机器人）");
	int s,b,a[10][10]; 
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			a[i][j]=0;
		}
	}
	for(int i=0;i<4;i++)
	{
		while(1)
		{
			s=rand()%10;
			b=rand()%10;
			if(!a[s][b])
			{
				a[s][b]++;
				break;
			} 
		}
	} 
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(a[i][j]==0) cout<<"#";
			else cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(a[j][i]==1)
			{
				
				while(1)
				{
					cout<<"请输入\n";
					cin>>s>>b;
					if(s==i && b==j)
					{
						cout<<"干得漂亮\n";
						break; 
					}
					else cout<<"坐标失误\n"; 
				}
			}
		}
	}
	p("全部消灭");
	p("你走向恐怖组织机器人");
	p("这不是乔吗？我没记错是你开车撞了我女儿,今天我就要血债血偿。");
	p("你拿起枪对着他的太阳穴。");
	p("山姆，你的女儿并没有死");
	p("哦，这是怎么回事？"); 
	p("我不能说，不然汤姆斯就会消灭我");
	p("是否逼供");
	p("1.是    2.否"); 
	cin>>x;
	if(x==1)
	{
		p("你把他推倒在地，它从身体上掉下几个零件。");
		p("我说，汤姆斯叫我撞一个小女孩，然后买通医生，对外宣称是你的女儿,她现在被汤姆斯囚禁了"); 
	}
	p("看来，我得好好会会汤姆斯了");
	gs++;
	p("进入下一关");
	g2(); 
}
int main()
{
	p("欢迎来到断罪（改编自细胞分裂5：断罪）");
	while(!s) 
	{
		p("1.创建新角色		2.读取存档		3.关于游戏");
		cin>>x;
		if(x==1)
		{
			break;
		}
		if(x==2)
		{
			FILE*fp;
			fp=fopen("cd.txt","r");
			fscanf(fp,"%d",&gs);
			break;
		}
		if(x==3)
		{
			p("GitHub项目：https://github.com/hyd2007/duanzui"); 
			p("作者：sxb2007");
			p("洛谷：https://www.luogu.com.cn/user/146566"); 
			p("B站：https://space.bilibili.com/2129070629"); 
		}	
	}
	switch(gs)
	{
		case 1:g1();
		case 2:g2(); 
	}
 	return 0;
}
