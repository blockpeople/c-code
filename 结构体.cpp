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
	//�ṹ�彻�� 
	//swap()����
	//���磺swap(stu2[0].a,stu2[0].b)
	
	//�ṹ��ʹ��
	
	//�ṹ������ 
	//stu2[0].a = stu2[0].b + stu2[0].c ����Ҫһ�£�
	
	//�ṹ������ 
	//ð������ (��ò�Ҫ�����ַ���)�� 
	//int s=0
	//for(int i=0;i<=2;i++){
	//    if(a[i].c<a[i+1].c){
	//        swap(a[i],a[i+1]);
	//        s=a[i].c;
	//    }
	//}
	//cout<<s;
	
	//sort()���� (Ҳ��Ҫ��)
	//#include <algorithm>
	//sort(a[0],a[10])
	
	//�ṹ��sort()����
	//sort(first,end,comp)
	//first:����һλ��ʼ ֱ��д�ṹ�������� 
	//end:����һλ����  �ṹ��������+����
	//comp:��С�����ǴӴ�С �������Լ����� 
	
	//����:
	//bool comp(stu x,stu y){
	//	return x.c>y.c;//���ڻ�С�ھ����˴Ӵ�С���Ǵ�С���� 
	//} ���ṹ��sort(comp)�̶�������д���� 
	//cin>>a[0].c>>a[1].c>>a[2].c;
	//sort(a,a+2,tomp) 
	return 0;
}
