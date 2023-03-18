#include<iostream>
using namespace std;
int IsPrime(int a, int b)
{
	int temp;
	while(b!=0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	if(a==1)
		return 1;
	else
		return 0;
}
void Euler(int n,int *s,int &sum)
{
	int i,flag;
	for(i=1;i<n;i++)
	{
		flag=IsPrime(i,n);
		if(flag==1)
		{
			s[sum]=i;
			sum++;
		}
	}
}
void bubbleSort(int arr[], int n)
{
	for(int i = 0;i < n;i++)
	{  
		for(int j = 0;j < n-i-1;j++)
		{  
            if(arr[j] > arr[j+1])
			{  
                int t = arr[j];  
                arr[j] = arr[j+1];  
                arr[j+1] = t;  
            }  
        }  
    }       
}
int power(long int x, long int y, long int n)
{
	long int t = 1;
	while (y > 0)
	{
		if (y % 2 == 1)
		{
			y -= 1;
			t = t*x%n;
		} else {
			y /= 2;
			x = x*x%n;
		}
	}
	return t%n;
}
void root(int n,int sum,int s[])
{
	int i,j;
	int flag[100],k;
	for(i=0;i<sum;i++)
	{
		k=0;
		for(j=1;j<sum+1;j++)
		{
			flag[j-1]=power(s[i],j,n);
		}
		bubbleSort(flag,sum);
		
		for(j=0;j<sum;j++)
		{
			if(flag[j]!=s[j])
				k=1;
		}
		if(k==0)
			cout<<s[i]<<" ";
	}
}
int main()
{
	int n=0,sum=0,h=0;
	int s[100];
	cin>>h;
	int z[h];
	for(int i=0;i<h;i++)
	{
		cin>>z[i];
	}
	for(int fdg=0;fdg<h;fdg++)
	{
		n=z[fdg];
		Euler(n,s,sum);
		root(n,sum,s);
		cout<<fdg;
	}
	return 0;
}
