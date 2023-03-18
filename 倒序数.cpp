#include<iostream>//调用头文件
using namespace std;//开辟一个空间
void daoxushu(int a){//定义void类型一个函数
    if(a==0){//如果a=0
        return 0;//直接跳过a=0
    }else{//如果a!=0
        cout<<a%10;//输出a%10的余数
        return daoxushu(a/10);//再次调用自己
    }
}
int main(){//主函数
    int b;//定义一个变量b
    cin>>b;//输入b
    daoxushu(b);//调用函数b
}