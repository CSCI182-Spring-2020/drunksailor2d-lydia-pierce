#pragma once
#include <iostream>
#include <time.h>		// For the clock to seed the random number
#include <stdio.h>
#include <stdlib.h>

#include "ofMain.h"
using namespace std;
#define Array_WIDTH 20							// The constant variables for the program
#define Array_HEIGHT 20
#define MAX_STEPS 1000

class ofApp : public ofBaseApp{

	public:
		glm::vec2 rectPosition;
		
		enum Direction { NORTH, EAST, SOUTH, WEST };	// Create an enum for the direction he goes

		int nMapArray[Array_WIDTH][Array_HEIGHT];		// Declare the array

		void ZeroArray();
		void TakeAStep();
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
};






/*
//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>		// For the clock to seed the random number
//using namespace std;

/// <summary>
/// Defines the constant variables in the program
/// </summary>
//constexpr auto Array_WIDTH = 20;
//constexpr auto Array_HEIGHT = 20;
//constexpr auto MAX_STEPS = 1000;

//enum Direction { NORTH, EAST, SOUTH, WEST };	// Create an enum for the direction he goes

//int nMapArray[Array_WIDTH][Array_HEIGHT];		// Declare the array

int main()
{
	//srand(time(NULL));		// Seed the random number with the computer clock

	// Zero out the array
	//for (int xcounter = 0; xcounter < Array_WIDTH; xcounter++)
	//	for (int ycounter = 0; ycounter < Array_HEIGHT; ycounter++)
	//		nMapArray[xcounter][ycounter] = 0;

	//int x = Array_WIDTH / 2;		// Set the starting point on the array
	//int y = Array_HEIGHT / 2;
	//int StepCount = 0;

	//// Depending on the direction he goes determined by the random number, move the sailor and increment the value of the array in that spot
	//while (StepCount < MAX_STEPS)
	//{
	//	Direction nNextStep = static_cast<Direction>(rand() % 4);
	//	int nCurrentValue = nMapArray[x][y];
	//	switch (nNextStep)
	//	{
	//	case NORTH:
	//		if (y > 0) { y--; nMapArray[x][y]++; break; }
	//		else { nMapArray[x][y]++; break; }
	//	case EAST:
	//		if (x > 0) { x--; nMapArray[x][y]++; break; }
	//		else { nMapArray[x][y]++; break; }
	//	case SOUTH:
	//		if (y > 0) { y++; nMapArray[x][y]++; break; }
	//		else { nMapArray[x][y]++; break; }
	//	case WEST:
	//		if (x > 0) { x++; nMapArray[x][y]++; break; }
	//		else { nMapArray[x][y]++; break; }
	//	}
	//	StepCount++;
	//}

	//// Print the array to the screen with the values of how many times he stepped there
	//for (a = 0; a < Array_WIDTH; a++)
	//{
	//	for (b = 0; b < Array_HEIGHT; b++)
	//	{
	//		cout << nMapArray[x][y] << "\t";
	//	}
	//	std::cout << endl;
	//}
	return 0;
}
*/