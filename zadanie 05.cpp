#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{ 
    int n;
  cout<<"Vvedite kolisestvo elementov!"<<endl;
	cin>>n;
	int mas[100];
	int sum=0;
	for(int i=0; i<n; i++)
	{   
		cin>>mas[i];
		sum+=mas[i];
	}
	cout<<endl;
	cout<<"sum ="<<" "<<sum;
	
	getch();
	return 0;
}
