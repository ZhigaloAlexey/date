#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std; 

class Date
{
private:
	int  AMonth;
	int day;
	int year;
public:
	void setDate(int Mnth, int dy, int yr)
	{
		AMonth=Mnth;
		day=dy;
		year=yr;
	}
	int getDate()
	{ 
		cout<<AMonth<<day<<year;

		return 0;
	}


		void DisplayDate()
		{
			cout<<"Display: " << getDate();

		}
	};
	int 	main()
	{

		Date myDate;
		int Mh;
		int d;
		int y;
		cout<<"Vvedite Mesas \n";
		cin>> Mh;
		if (Mh <1 && Mh>12 )
		{
			cout<<" Vedite pravilno Month ";
			Mh=1;
		}
		cout<<"Vvedite den \n";
		cin>> d ;
		cout<<"Vvedite god \n";
		cin>> y;

		myDate.setDate( Mh,  d,  y);
		myDate.DisplayDate( );
		_getch();
		return 0;

	}
