
#include<bits/stdc++.h>
using namespace std;
void printArray(int a[],int n)
{   
	for(int i=0;i<n;i++)
		cout << a[i] << endl;
}
void inputArray(int a[],int n)
{
	for(int i=0;i<n;i++)
		cin >> a[i] ;
}
void insertionSort(int a[],int n)
{
	int key;
	int j;
	for(int i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	inputArray(a,n);
	insertionSort(a,n);
	printArray(a,n);

	return 0;
}