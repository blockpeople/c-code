#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[256],b[256],c[256],lena,lenb,lenc,i;
	char n[256],n1[256],n2[256];
	gets(n1);
	gets(n2);//输入
 	if (strlen(n1)<strlen(n2)||(strlen(n1)==strlen(n2)&&strcmp(n1,n2)<0)){//当n1==n2, 返回0,n1>n2时，返回正整数；n1<n2时，返回负整数
       		strcpy(n,n1);//将n1值赋值给n数组
       		strcpy(n1,n2);
       		strcpy(n2,n);
       		cout<<"-";//交换了之后为负数
    	}lena=strlen(n1); lenb=strlen(n2);
      	for (i=0;i<=lena-1;i++)
            a[lena-i]=int(n1[i]-'0');//被减数放入a
      	for (i=0;i<=lenb-1;i++)
            b[lenb-i]=int(n2[i]-'0');//减数放入b
 	i=1;
	while(i<=lena||i<=lenb){
		if (a[i]<b[i]){
			a[i]+=10;//不够减，借1当10
			a[i+1]--;
		}c[i]=a[i]-b[i];//对应位相减
		i++;
	}lenc=i;
	while((c[lenc]==0)&&(lenc>1))
        lenc--;//最高0不输出　　  
	for(i=lenc;i>=1;i--)
        cout<<c[i];//输出
	cout<<endl;
	return 0;
}