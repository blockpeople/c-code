#include <cstdio>
#include <cmath>
using namespace std;
int a,b;
char c;
int main()
{
 scanf("%d %c",&a,&c);
 if(a<=1000){
 b=8;
 }
 else{
 b=8+ceil((a-	1000)/500.0)*4;       
    }
    if(c=='y')
 {
 b=b+5;
 }
 printf("%d",b);
return 0;
}
