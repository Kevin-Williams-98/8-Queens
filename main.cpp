
#include <stdbool.h>
#include <stdio.h>
#include <iostream>
using namespace std;
/*
 * main.cpp
 *
 *  Created on: Oct 16, 2018
 *      Author: Kevin Williams
 */


int main ()
{

	int chessBoard [8][8] = {0};
	int r,c = 0;
	int numSolutions = 0;


	// print
	print :
	numSolutions ++;
	cout << "Solution # " << numSolutions << ":"<< endl;
	for(int i = 0; i<8;i++)
	{
		for(int j = 0; j<8; j++)
		{
			cout << chessBoard [i][j] << " ";
			cout << endl;
		}
		cout << endl;
	}







	return 0;
}



































/*
 * hw3.cpp
 *
 *  Created on: Sep 13, 2018
 *
Author: Jefrey Zavala
 */
#include <iostream>

using namespace std;


int main()
{
	int b[8][8] = {0}, r,c = 0,counter = 0;

	b[0][0] = 1;

	nextColm:
	c++;
	if(c==8)
		goto print;
	r = -1;

	nextRow:
	r++;
	if(r==8)
		goto backtrack;

	for(int i = 0;i<c;i++)
	{
		if(b[r][i]==1)
			goto nextRow;
	}


	//upDiagonal:
	for (int i = 1; (r-i)>= 0 && (c-i)>=0;i++)
	{
		if(b[r-i][c-i]==1)
			goto nextRow;
	}

	//downDiagonal:
	for(int i = 1;(r+i) < 8 && (c-i)>=0;i++)
	{
		if (b[r+i][c-i]==1)
			goto nextRow;
	}

	b[r][c] = 1;
	goto nextColm;


	backtrack:
	c--;
	if(c==-1)
		return 0;

	r = 0;
	while(b[r][c]!=1)
		r++;
	b[r][c] = 0;
	goto nextRow;

	print:
	counter++;
	cout << "Solution # " << counter << ":" << endl;
	for( int i = 0; i < 8; i++ )
	{
		for( int j = 0; j < 8; j++ )
			cout << b[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	goto backtrack;
	return 0;
}



