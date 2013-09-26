// project by Atticus Hornsby 2013FA-COSC-1436-81003
// changemaker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"	//confusing visual studio specific library
#include <fstream>
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

//constants for extended ascii borders
	char tl=218;			//top left corner border
	char tr=191;			//top right corner border
	char h=196;				//horizontal border
	char v=179;				//vertical border
	char lm=195;			//left middle border
	char rm=180;			//right middle border
//variables for border width and formatting	
	int bwidth=60;			//width of the border
	int nbwidth=bwidth-4;	//width of nested border
	int c1w=5;				//width of column 1
//variables for i/o and calculations
	double change;


//input
	cout	<< "How much change (in a dollars) needs to be given to the customer? ";
	cin		>> change;

//calculations

	
//output
	cout	<< tl << setw(bwidth) << setfill(h) << tr << endl												//line1 top border
			<< v << "  Change due:" << setfill(' ')															//line2 output |  Change due: 
			<< setw(bwidth-25) << "$ "																		//line2 output $ character
			<< setw(11) << fixed << setprecision(2) << change << v << endl									//line2 output amount of change due change with fixed point
			<< lm << setw(bwidth) << setfill(h) << rm << endl												//line3 inside border
			<< v << setw(bwidth) << setfill(' ') << v << endl												//line4 inside whitespace
			<< v << " " << tl << setw(nbwidth) << setfill(h) << tr << " " << v << endl						//line5 inside nested border65
			<< v << " " << v << " PAPER BILLS" << setw(bwidth-16) << setfill(' ') << v << " " << v << endl	//line6 output PAPER BILLS
			<< v << " " << lm << setw(nbwidth) << setfill(h) << rm << " " << v << endl						//line7 nested border
			<< v << " " << v << setw(c1w) << setfill(' ') << v 
				;
	_getch();
	return 0;
}

