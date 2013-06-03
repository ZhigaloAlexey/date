#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std; 

struct Theatr // Оголошення структури
{

  char name[100];

	int day1;
	int day2;
	int day3;
	int day4;
	int day5;
	int day6;
	int day7;


}; // end 

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0,"Russian");

	int n=0;
	int day;

	char *day_name[7] = {"понедельник","вторник","среду","четверг","пятницу","субботу","воскресение"};

	Theatr * List;
	ifstream fin("input_data.txt");

	if(!fin)
	{
		cout<<"Ошибка открития файла";
		getch();
		return 0;

	}

	fin>>n;
	List = new Theatr [n]; // Створення динамічного масиву структур
	for(int i=0; i<n; i++)
	{
		// чтение данных с каждого рядка

		fin>>List[i].name;
		fin>>List[i].day1;
		fin>>List[i].day2;
		fin>>List[i].day3;
		fin>>List[i].day4;
		fin>>List[i].day5;
		fin>>List[i].day6;
		fin>>List[i].day7;



	}
	cout<<"Введите день когда хотите посетить театр"<<endl;
	cout<<"Подсказка: Понедельник єто 1; Вторник это 2 ;Воскресение это 7 и т.д;"<<endl;
	cin>>day;
	if(day<8){cout<<"Вы выбрали "<<day_name[day - 1]<<"!"<<endl<<endl;
	switch (day)
	{  


	case 1:

		
			cout<<"\t \t \t Репертуар на "<<day_name[day - 1]<<":"<<endl;
			for (int i=0; i<n; i++)
			{  
				if(List[i].day1> 0 )


					cout<<List[i].name<<endl;
			}

			break;
		


	case 2:
		
			cout<<"\t \t \t Репертуар на "<<day_name[day - 1]<<":"<<endl;
			for (int i=0; i<n; i++)
			{  
				if(List[i].day2> 0 )

					cout<<List[i].name<<endl;
			}

			break;
		

	case 3:
		
			cout<<"\t \t \t Репертуар на "<<day_name[day - 1]<<":"<<endl;
			for (int i=0; i<n; i++)
			{  
				if(List[i].day3> 0 )

					cout<<List[i].name<<endl;
			}

			break;
		


	case 4:
		 
			cout<<"\t \t \t Репертуар на "<<day_name[day - 1]<<":"<<endl;
			for (int i=0; i<n; i++)
			{  
				if(List[i].day4> 0 )

					cout<<List[i].name<<endl;
			}

			break;
		

	case 5:
		
			cout<<"\t \t \t Репертуар на "<<day_name[day - 1]<<":"<<endl;
			for (int i=0; i<n; i++)
			{  
				if(List[i].day5> 0 )

					cout<<List[i].name<<endl;
			}

			break;
		

	case 6:
		 
			cout<<"\t \t \t Репертуар на "<<day_name[day - 1]<<":"<<endl;
			for (int i=0; i<n; i++)
			{  

				if(List[i].day6> 0 )

					cout<<List[i].name<<endl;
			}

			break;
		

	case 7:
		
			cout<<"\t \t \t Репертуар на "<<day_name[day - 1]<<":"<<endl;
			for (int i=0; i<n; i++)
			{  

				if(List[i].day7> 0 )

					cout<<List[i].name<<endl;
			}

			break;
	}}
else{

		
			cout<<"Вы ввели неправильно день !"<<endl;
			day=1;
	
}

	fin.close();

	getch();
	return 0;
}

