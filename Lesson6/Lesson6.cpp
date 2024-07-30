

#include <iostream>

using namespace std;

void main()
{

	//Task 2
	cout << "1-20 araliginda ede daxil edin:";
	unsigned int num;
	cin >> num;
	num <= 20 && true || cout << "Siz 1-20 araliginda eded axil etmelisiniz:";
	num / 2 && num / 3 && num / 5 && num / 7 && cout << "M" || cout << "S";




	//Task 3
	cout << "\n\n\n5 reqemli eded daxil edin:";
	unsigned int num2;
	cin >> num2;
	num2 > 9999 && true && num2 < 100000 || cout << "Siz 5 reqemli eded daxil etmelisiniz";
	int num2_1 = num2 / 10000;
	int num2_2 = num2 / 1000 % 10;
	int num2_3 = num2 / 100 % 10;
	int num2_4 = num2 / 10 % 10;
	int num2_5 = num2 % 10;
	num2_1 == num2_5 && num2_2 == num2_4 && cout << "Bu eded polindromdur" || num2_1 != num2_5 && num2_2 != num2_4 && cout << "Bu eded polindrom deyil";



	//Task4
	cout << "1-den 9 reqemliye kimi ede daxil edin:";
	unsigned int num4;
	cin >> num4;
	num4 >= 0 && num4 < 10 && cout << "Eded 1 reqemlidir" ||
		num4 > 10 && num4 < 100 && cout << "Eded 2 reqemlidir" ||
		num4 > 100 && num4 < 1000 && cout << "Eded 3 reqemlidir" ||
		num4 > 1000 && num4 < 10000 && cout << "Eded 4 reqemlidir" ||
		num4 > 10000 && num4 < 100000 && cout << "Eded 5 reqemlidir" ||
		num4 > 100000 && num4 < 1000000 && cout << "Eded 6 reqemlidir" ||
		num4 > 1000000 && num4 < 10000000 && cout << "Eded 7 reqemlidir" ||
		num4 > 10000000 && num4 < 100000000 && cout << "Eded 8 reqemlidir" ||
		num4 > 100000000 && num4 < 1000000000 && cout << "Eded 9 reqemlidir";


	//Task5
	cout << "\n\n\n1-ci ededi daxil edin:";
	int num5_1;
	cin >> num5_1;
	cout << "2-ci ededi daxil edin:";
	int num5_2;
	cin >> num5_2;
	cout << "3-cu ededi daxil edin:";
	int num5_3;
	cin >> num5_3;
	num5_1 > num5_2&& num5_1 > num5_3&& cout << "F";
	num5_2 > num5_1&& num5_2 > num5_3&& cout << "S";
	num5_3 > num5_1&& num5_3 > num5_2&& cout << "T";




	//Task6
	cout << "\n\n\n6 reqemli eded axil edin:";
	unsigned int num6;
	cin >> num6;
	num6 > 99999 && true && num6 < 1000000 || cout << "Siz 6 reqemli eded daxil etmelisiniz";
	int num6_1 = num6 / 100000;
	int num6_2 = num6 / 10000 % 10;
	int num6_3 = num6 / 1000 % 10;
	int num6_4 = num6 / 100 % 10;
	int num6_5 = num6 / 10 % 10;
	int num6_6 = num6 % 10;
	int num6col1 = num6_1 + num6_3 + num6_5;
	int num6col2 = num6_2 + num6_4 + num6_6;
	num6col1 > num6col2&& cout << num6_1 << "," << num6_3 << "," << num6_5;
	num6col2 > num6col1&& cout << num6_2 << "," << num6_4 << "," << num6_6;





}


