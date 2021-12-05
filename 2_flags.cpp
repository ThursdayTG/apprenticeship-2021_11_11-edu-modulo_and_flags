// inclusion of libraries
	#include <iostream>

// inclusion of files
	#include "main-header.hpp"



int main() {

	/**/
	using	std::cout,
			std::cin;
	/**/

	/*	local variable declaration	*/
	bool	restartOperator;

	bool	flag1;

	int		von,
			bis,
			teiler;
	/**/



	do {

		/*	variable default values	*/
		restartOperator	= false;
		flag1			= false;
		/**/

		/**/
		cout	<< " Bereich"
				<< " \n";
		cout	<< " von: ";		cin	>> von;
		cout	<< " bis: ";		cin	>> bis;
		cout	<< " Teiler: ";		cin	>> teiler;
		cout	<< " \n";
		/**/

		/*	primary function	*/
		for (	int i	= 	von;
				i		<=	bis && flag1 != true;
				i++) {

			if (	i % teiler == 0) {
				flag1 = true;
				cout	<< i << "\n";
			}

			/**
			if (	flag == true) {
				cout	<< "\n";
			}
			/**/

		}
		/**/

		/**/
		restartOperator = queryRestartProgram();
		cls();
		/**/

	}	while (restartOperator == true);

	return 0;

}

/*	using C++ compiler from GCC via console

	compile for debug:
g++ -Og -pedantic-errors -Wall -Wextra 2_flags.cpp -o 2_flags.debug

	compile as final executable:
g++ -O3 2_flags.cpp -o 2_flags.release

	clear console, compile as final executable, and run program:
clear && g++ -O3 2_flags.cpp -o 2_flags.release && ./2_flags.release
*/
