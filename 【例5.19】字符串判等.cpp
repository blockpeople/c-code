#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
using namespace std;
string s1,s2;
string str1 ,str2;
int main(){
    getline(cin,s1);
	getline(cin,s2);
    for(int i=0;i<s1.length();i++){
	    if(s1[i]==' '){
	        continue;
        }if('a'<=s1[i]&&s1[i]<='z'){
			s1[i]-=32;
		}str1+=s1[i];
	}for(int i=0;i<s2.size();i++){
		if(s2[i]==' '){
		    continue;
        }if('a'<=s2[i]&&s2[i]<='z'){
			s2[i]-=32;
		}
		str2+=s2[i]; 
	}
    if(str1==str2){
        printf("%s","YES");
    }else{
        printf("%s","NO");
    }
    return 0;
}