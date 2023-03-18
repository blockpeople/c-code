#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct stu{
	int a,b,c; 
	string str;
};//stu1,stu2[10]; 
int main(){
	stu stu1;
	stu stu2[10];
	cin >> stu2[0].a >> stu2[0].b >> stu2[0].c >> stu2[0].str;
	cin >> stu1.a >> stu1.b >> stu1.c >> stu1.str;
	cout <<  ;
	//结构体交换 
	//swap()交换
	//例如：swap(stu2[0].a,stu2[0].b)
	
	//结构体使用
	
	//结构体运算 
	//stu2[0].a = stu2[0].b + stu2[0].c 类型要一致！
	
	//结构体排序 
	//冒泡排序 (最好不要用这种方法)： 
	//int s=0
	//for(int i=0;i<=2;i++){
	//    if(a[i].c<a[i+1].c){
	//        swap(a[i],a[i+1]);
	//        s=a[i].c;
	//    }
	//}
	//cout<<s;
	
	//sort()排序 (也不要用)
	//#include <algorithm>
	//sort(a[0],a[10])
	
	//结构体sort()排序
	//sort(first,end,comp)
	//first:从哪一位开始 直接写结构体数组名 
	//end:到哪一位结束  结构体数组名+长度
	//comp:从小到大还是从大到小 ——需自己定义 
	
	//例如:
	//bool comp(stu x,stu y){
	//	return x.c>y.c;//大于或小于决定了从大到小还是从小到大 
	//} （结构体sort(comp)固定，必须写！） 
	//cin>>a[0].c>>a[1].c>>a[2].c;
	//sort(a,a+2,tomp) 
	return 0;
}
