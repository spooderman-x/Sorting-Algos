#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
		    swap(a[j],a[j+1]);
          }
	}
}
void swap(int *x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout << a[i] << endl;
	
}
void inputArray(int a[],int n)
{
	for(int i=0;i<n;i++)
		cin >> a[i];
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	inputArray(a,n);
	bubbleSort(a,n);
	printArray(a,n);

	return 0;
}