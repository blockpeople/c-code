#include<bits/stdc++.h>
using namespace std;
int main(){
    char a1[101],b1[101];
    int a[101],b[101],c[10001],lena,lenb,lenc,i,j,x;
    gets(a1);
    gets(b1);//输入
    lena=strlen(a1);
    lenb=strlen(b1);
    for(i=0;i<=lena-1;i++)
        a[lena-i]=a1[i]-48;//加数放入a
    for(i=0;i<=lenb-1;i++)  
        b[lenb-i]=b1[i]-48;//加数放入b
    lenc =1;
    x=0;
	while(lenc <=lena||lenc <=lenb){
	    	c[lenc]=a[lenc]+b[lenc]+x;//相加
	    	x=c[lenc]/10;
	    	c[lenc]%=10;
	       	lenc++;
	}c[lenc]=x; 
	if(c[lenc]==0)
	    lenc--;//处理进位
	for(i=lenc;i>=1;i--) 
	    cout<<c[i];//输出
	cout<<endl;
	return 0;
}