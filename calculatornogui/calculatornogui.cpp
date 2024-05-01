// calculatornogui.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>
#include "addition.cpp"
#include "subtraction.cpp"
#include "division.cpp"
#include "multiplication.cpp"

int main()
{
    char buf[10];
    printf("Addition subraction multiply or divide\n");
    gets_s(buf);

    //std::stringstream ss;
    //ss << "'" << sprintf(buf) << "'";
    printf("'");
    printf(buf);
    printf("'");
    
    if (strcmp(buf, "add") == 0 ){
        printf("adding\n");
		int no1;
		int no2;
		cin >> no1;
		cin >> no2;
		int add = addition(no1, no2);
    }

	if (strcmp(buf, "subtract") == 0) {
		printf("subratcing\n");
		int subno1;
		int subno2;
		cin >> subno1;
		cin >> subno2;
		int sub = subtraction(subno1, subno2);
		
	}

	if (strcmp(buf, "mult") == 0) {
		printf("multiplying\n");
		int mul1;
		int mul2;
		cin >> mul1;
		cin >> mul2;
		int mult = multiplication(mul1, mul2);
		
	}

	if (strcmp(buf, "div") == 0) {
		printf("dividing\n");
		int div1;
		int div2;
		cin >> div1;
		cin >> div2;
		int div = division(div1, div2);
		
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
