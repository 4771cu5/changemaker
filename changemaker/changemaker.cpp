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
	const char tl=218; //top left corner border
	const char tr=191; //top right corner border
	const char h=196;  //horizontal border
	const char v=179;  //vertical border
	const char lm=195; //left middle perpendicular border
	const char rm=180; //right middle perpendicular border
	const char tm=194; //top middle perpendicular border
	const char bm=193; //bottom middle perpendicular border
	const char br=217; //bottom right corner border
	const char bl=192; //bottom left corner border
	const char c=197;  //center cross perpendicular border
//variables for border width and formatting	
	int bwidth=65;            //width of the border
	int nbwidth=bwidth-4;     //width of nested border
	int c1w=5;                //width of column 1
	int c3w=9;                //width of column 3
	int c2w=bwidth-c1w-c3w-4; //width of column 2
//variables for i/o and calculations
	double	change;
	int fifties, tens, ones, quarters, nickels, pennies;
//input
	cout << "How much change (in a dollars) needs to be given to the customer? ";
	cin >> change;
//calculations
	fifties=change/50;
	tens=(change-50*fifties)/10;
	ones=change-50*fifties-10*tens;
	quarters=4*(change-50*fifties-10*tens-ones);
	nickels=((change-50*fifties-10*tens-ones)*100-25*quarters)/5;
	pennies=((change-50*fifties-10*tens-ones)*100-25*quarters-5*nickels);
//output
	cout << 0 << tl << setw(bwidth) << setfill(h) << tr << endl //line0 top border
		<< 1 << v << "  Change due:" << setfill(' ') //line1 output |  Change due: 
		<< setw(bwidth-25) << "$ " //line1 output $ character
		<< setw(c3w) << fixed << setprecision(2) << change << "  " << v << endl //line1 output amount of change due change with fixed point
		<< 2 << v << setw(bwidth) << setfill(' ') << v << endl //line2 inside whitespace
		<< 3 << v << " " << tl << setw(nbwidth) << setfill(h) << tr << " " << v << endl	 //line3 inside nested border65
		<< 4 << v << " " << v << " PAPER BILLS" << setw(bwidth-16) << setfill(' ') << v << " " << v << endl //line4 output PAPER BILLS
		<< 5 << v << " " << lm << setw(c1w) << setfill(h) << tm << setw(c2w) << tm << setw(c3w) << rm << " " << v << endl //line5 nested border
		<< 6 << v << " " << v << setw(c1w) << setfill(' ') << v << " $50 bills:" << setw(c2w-11) << v << setw(c3w-1) << fifties << v << " " << v << endl
		<< 7 << v << " " << lm << setw(c1w) << setfill(h) << c << setw(c2w) << c << setw(c3w) << rm << " " << v << endl
		<< 8 << v << " " << v << setw(c1w) << setfill(' ') << v << " $10 bills:" << setw(c2w-11) << v << setw(c3w-1) << tens << v << " " << v << endl
		<< 9 << v << " " << lm << setw(c1w) << setfill(h) << c << setw(c2w) << c << setw(c3w) << rm << " " << v << endl
		<< 'A' << v << " " << v << setw(c1w) << setfill(' ') << v << " $1 bills:" << setw(c2w-10) << v << setw(c3w-1) << ones << v << " " << v << endl
		<< 'B' << v << " " << lm << setw(c1w) << setfill(h) << bm << setw(c2w) << bm << setw(c3w) << rm << " " << v << endl
		<< 'C' << v << " " << v << " COINS" << setw(bwidth-10) << setfill(' ') << v << " " << v << endl
		<< 'D' << v << " " << lm << setw(c1w) << setfill(h) << tm << setw(c2w) << tm << setw(c3w) << rm << " " << v << endl
		<< 'E' << v << " " << v << setw(c1w) << setfill(' ') << v << " Quarters:" << setw(c2w-10) << v << setw(c3w-1) << quarters << v << " " << v << endl
		<< 'F' << v << " " << lm << setw(c1w) << setfill(h) << c << setw(c2w) << c << setw(c3w) << rm << " " << v << endl
		<< 'G' << v << " " << v << setw(c1w) << setfill(' ') << v << " Nickels:" << setw(c2w-9) << v << setw(c3w-1) << nickels << v << " " << v << endl
		<< 'H' << v << " " << lm << setw(c1w) << setfill(h) << c << setw(c2w) << c << setw(c3w) << rm << " " << v << endl
		<< 'I' << v << " " << v << setw(c1w) << setfill(' ') << v << " Pennies:" << setw(c2w-9) << v << setw(c3w-1) << pennies << v << " " << v << endl
		<< 'J' << v << " " << bl << setw(c1w) << setfill(h) << bm << setw(c2w) << bm << setw(c3w) << br << " " << v << endl
		<< 'K' << v << setw(bwidth) << setfill(' ') << v << endl
		<< 'L' << bl << setw(bwidth) << setfill(h) << br << endl
		;
	_getch();
	return 0;
}

