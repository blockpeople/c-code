#include<iostream>
using namespace std;
int xuehao[105];
double score[105];
int n,k,l;
double temp;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>xuehao[i]>>score[i];
	}
	for(int i=1;i<=n;i++){
		l=i;
		for(int j=i;j<=n;j++){
			if(score[j]>score[l]){
				l=j;
			}
		}
		if(l!=i){
			temp=xuehao[i];
			xuehao[i]=xuehao[l];
			xuehao[l]=temp;
			temp=score[i];
			score[i]=score[l];
			score[l]=temp;
		}
	}
	cout<<xuehao[k]<<" "<<score[k];
	return 0;
}
