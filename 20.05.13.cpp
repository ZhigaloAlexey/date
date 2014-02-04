Алексей! Выложи плиз свой код класса;

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <math.h>
#include "date.h"
using namespace std;


void Date::setDate(int Mh, int dy, int yr)
  {
		//
		if (Mh <1 && Mh >12 )
		{
			cout<<" Vedite pravilno Month ";
			Mh==1;
		}

		//

		AMonth=Mh;
		day=dy;
		year=yr;
	}
	int 	main()
	{

		Date myDate;
		int Mh;
		int d;
		int y;
		cout<<"Vvedite Mesas \n";
		cin>> Mh;
		
		
		cout<<"Vvedite den \n";
		cin>> d ;
		cout<<"Vvedite god \n";
		cin>> y;

		myDate.setDate( Mh,  d,  y);
		myDate.DisplayDate( );
		_getch();
		return 0;

	}
