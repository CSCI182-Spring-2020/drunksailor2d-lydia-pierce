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