/*
	文件名:围棋小游戏
	版本:1.1
	作者:zfx1569
	修改时间:2022.4.8
*/
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
//#include<Windows.h>
using namespace std;
int a1,a2,w,z=0,af=0,bf=0;
char a[1001][1001];
int vis[1001][1001];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
struct que
{
	int x;
	int y;
	char c;
}q[1000001];
void print()
{
	cout<<endl<<endl;
	cout<<"A方分数:"<<af<<endl;
	cout<<"B方分数:"<<bf<<endl;
	cout<<"   ";
	for(int i=1;i<=a2;i++)
		printf("%-2d",i);
	cout<<endl<<endl<<"1  ";
	for(int i=1;i<=a1;i++)
	{
		for(int j=1;j<=a2;j++)
			cout<<(a[i][j]?a[i][j]:' ')<<' ';
		if(i<a1)
			printf("\n%-3d",i+1);
	}
}
bool bfs_find(int x,int y)
{
	int h=1,t=1;
	bool fg=1;
	q[h].x=x;
	q[h].y=y;
	q[h].c=a[x][y];
	vis[x][y]=1;
	while(h<=t)
	{
		for(int i=0;i<4;i++)
		{
			int nx=q[h].x+dx[i],
				ny=q[h].y+dy[i];
			if(nx>=1&&nx<=a1&&ny>=1&&ny<=a2&&!vis[nx][ny])
				if(a[nx][ny]==q[h].c)
				{
					t++;
					q[t].x=nx;
					q[t].y=ny;
					q[t].c=q[h].c;
					vis[nx][ny]=1;
				}
				else
					if(!a[nx][ny])
						fg=0;
		}
		h++;
	}
	return fg;
}
void bfs_eat(int x,int y)
{
	int h=1,t=1,s=(a[x][y]=='A'?0:1);
	q[h].x=x;
	q[h].y=y;
	q[h].c=a[x][y];
	a[x][y]=0;
	s?af++:bf++;
	while(h<=t)
	{
		for(int i=0;i<4;i++)
		{
			int nx=q[h].x+dx[i],
				ny=q[h].y+dy[i];
			if(nx>=1&&nx<=a1&&ny>=1&&ny<=a2&&a[nx][ny]==q[h].c)
			{
				t++;
				q[t].x=nx;
				q[t].y=ny;
				q[t].c=q[h].c;
				a[nx][ny]=0;
				s?af++:bf++;
			}
		}
		h++;
	}
}
int game()
{
	while(1)
	{
		memset(vis,0,sizeof vis);
		for(int i=1;i<=a1;i++)
			for(int j=1;j<=a2;j++)
				if(a[i][j]&&!vis[i][j]&&bfs_find(i,j))
					bfs_eat(i,j);
		z=(z+1)%2;
//		system("cls");
		print();
		cout<<endl;
		while(1)
		{
			cout<<(z?"A方下子":"B方下子")<<endl;
			int x,y;
			cin>>x>>y;
			if(!a[x][y]&&x>=1&&y>=1&&x<=a1&&y<=a2)
			{
				a[x][y]=(z?'A':'B');
				break;
			}
			else
				cout<<"输入无效,请重新输入"<<endl;
		}
	}
}
int main()
{
	cout<<"------------------------------围棋------------------------------"<<endl;
	cout<<"输入模式[1:初级(9x9);2:中级(13x13);3:高级(19x19);其他:自定义]:";
	cin>>w;
	w==1?(a1=a2=9):(w==2?(a1=a2=13):(w==3?(a1=a2=19):(a1=a2=0)));
	if(!a1&&!a2)
	{
		cout<<"输入大小(a1,a2)";
		cin>>a1>>a2;
	}
	cout<<"游戏开始"<<endl;
	//Sleep(1000);
	game();
	return 0;
}
//版权所有 仿冒？？
