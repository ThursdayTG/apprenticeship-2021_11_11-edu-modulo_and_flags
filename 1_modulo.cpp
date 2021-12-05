// inclusion of libraries
	#include <iostream>

// inclusion of files
	#include "main-header.hpp"



/*	main function	*/

int main() {

	/**/
	using	std::cout,
			std::cin;
	/**/

	/*	local variable declaration	*/
	bool	restartOperator;

	int		z1 = 10,	// zahl 1
			z2 = 3,		// zahl 2

			von,
			bis,
			teiler1,
			teiler2;

	char	verknuepfung;
	/**/



	/*	modulo operator	*/
	cout	<< "division:\t"	<< z1 << " / " << z2 << " = " << z1 / z2 << "\n"
			<< "modulo:\t\t"	<< z1 << " % " << z2 << " = " << z1 % z2 << "\n"
				// modulo works out the rest of an integer division. does not work with floats.
			<< "\n";
	/**/

	/**/
	do {

		restartOperator = false;

		cout	<< "Bereich"
				<< "\n";
		cout	<< "von: ";										cin	>> von;
		cout	<< "bis: ";										cin	>> bis;
		cout	<< "Teiler1: ";									cin	>> teiler1;
		cout	<< "Teiler2: ";									cin	>> teiler2;
		cout	<< "UND oder ODER verknuepft (u / o): ";		cin	>> verknuepfung;

		for (	int i	=	von;
				i		<=	bis;
				i++) {

			if (	verknuepfung == 'o'		||	verknuepfung == 'O') {
				if (	i % teiler1 == 0	||	i % teiler2 == 0) {
					cout	<< "\t";
				}
			}

			if (	verknuepfung == 'u'		||	verknuepfung == 'U') {
				if (	i % teiler1 == 0	&&	i % teiler2 == 0) {
					cout	<< "\t";
				}
			}

			cout	<< i << "\n";
		}

		/**/
		restartOperator = queryRestartProgram();
		cls();
		/**/

	}	while (restartOperator == true);
	/**/

	/**
	do {

		cout	<<	"test ... \n";

		cout	<<	"restart? ";
		queryRestartProgram();

	}	while (restartOperator == true);
	/**/

	/**/
	pause();
	cls();
	return 0;
	/**/

}

/*	using C++ compiler from GCC via console

	compile for debug:
g++ -Og -pedantic-errors -Wall -Wextra 1_modulo.cpp -o 1_modulo.debug

	compile as final executable:
g++ -O3 1_modulo.cpp -o 1_modulo.release

	clear console, compile as final executable, and run program:
clear && g++ -O3 1_modulo.cpp -o 1_modulo.release && ./1_modulo.release
*/
