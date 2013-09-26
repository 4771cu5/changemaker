// project by Atticus Hornsby 2013FA-COSC-1436-81003
// changemaker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"	//confusing visual studio specific library
#include <fstream>
#include <iostream>
#include <conio.h>
#include <iomanip>

int _tmain(int argc, _TCHAR* argv[])
{
	char tl=218;			//top left corner border
	char tr=191;			//top right corner border
	char h=196;				//horizontal border
	char v=179;				//vertical border
	char lm=195;			//left middle border
	char rm=180;			//right middle border
	
	int bwidth=60;			//width of the border
	int nbwidth=bwidth-4;	//width of nested border
	int c1w=5;				//width of column 1
	double change;
	std::cout	<< "How much change (in a dollars) needs to be given to the customer? ";
	std::cin	>> change;
	std::cout	<< tl << std::setw(bwidth) << std::setfill(h) << tr << std::endl							//line1 top border
				<< v << "  Change due:" << std::setfill(' ')												//line2 output |  Change due: 
				<< std::setw(bwidth-25) << "$ "																//line2 output $ character
				<< std::setw(11) << std::fixed << std::setprecision(2) << change << v << std::endl			//line2 output amount of change due change with fixed point
				<< lm << std::setw(bwidth) << std::setfill(h) << rm << std::endl							//line3 inside border
				<< v << std::setw(bwidth) << std::setfill(' ') << v << std::endl							//line4 inside whitespace
				<< v << " " << tl << std::setw(nbwidth) << std::setfill(h) << tr << " " << v << std::endl	//line5 inside nested border65
				<< v << " " << v << " PAPER BILLS" << std::setw(bwidth-16) << std::setfill(' ') << v << " " << v << std::endl //line6 output PAPER BILLS
				<< v << " " << lm << std::setw(nbwidth) << std::setfill(h) << rm << " " << v << std::endl	//line7 nested border
				<< v << " " << v << std::setw(c1w) << std::setfill(' ') << v 
				;
	_getch();
	return 0;
}

