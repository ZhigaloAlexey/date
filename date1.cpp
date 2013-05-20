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
	int Date::getDate()
	{ 
		cout<<AMonth<<day<<year;

		return 0;
	}


		void Date::DisplayDate()
		{
			cout<<"Display: " << getDate();

		}
