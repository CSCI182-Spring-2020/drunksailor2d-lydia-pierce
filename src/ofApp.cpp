#include <iostream>
#include <time.h>		// For the clock to seed the random number
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::ZeroArray() {
	// Zero out the array
	for (int xcounter = 0; xcounter < Array_WIDTH; xcounter++)
		for (int ycounter = 0; ycounter < Array_HEIGHT; ycounter++)
			nMapArray[xcounter][ycounter] = 0;
}

void ofApp::TakeAStep() {
	srand(time(NULL));		// Seed the random number with the computer clock
	
	int m = Array_WIDTH / 2;		// Set the starting point on the array
	int n = Array_HEIGHT / 2;
	int StepCount = 0;
	
	// Depending on the direction he goes determined by the random number, move the sailor and increment the value of the array in that spot
	while (StepCount < MAX_STEPS)
	{
		Direction nNextStep = static_cast<Direction>(rand() % 4);
		int nCurrentValue = nMapArray[m][n];
		switch (nNextStep)
		{
		case NORTH:
			if (n > 0) { n--; nMapArray[m][n]++; break; }
			else { nMapArray[m][n]++; break; }
		case EAST:
			if (m < 19) { m++; nMapArray[m][n]++; break; }
			else { nMapArray[m][n]++; break; }
		case SOUTH:
			if (n < 19) { n++; nMapArray[m][n]++; break; }
			else { nMapArray[m][n]++; break; }
		case WEST:
			if (m > 0) { m--; nMapArray[m][n]++; break; }
			else { nMapArray[m][n]++; break; }
		}
		StepCount++;
	}
}

/*void ofApp::PrintArray(int a, int b) {
	// Print the array to the screen with the values of how many times he stepped there
	for (int a = 0; a < Array_WIDTH; a++)
	{
		for (int b = 0; b < Array_HEIGHT; b++)
		{
			cout << ofApp::nMapArray[a][b] << "\t";
		}
		std::cout << endl;
	}
}*/

void ofApp::setup(){
	// Setup the window
	ofBackground(0, 0, 0);
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	
	ZeroArray();
	TakeAStep();
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofEnableAlphaBlending();
	
	int alpha;
	for (int i = 0; i < Array_HEIGHT - 1; i++) {
		for (int j = 0; j < Array_WIDTH - 1; j++) {
			alpha = ceil(ofMap(nMapArray[i][j], 0, 20, 0, 255));
			ofSetColor(255, 0, 0, alpha);
			ofDrawRectangle(j*30, i*30, 30, 30);
		}
	}
	ofDisableAlphaBlending();
	

	/*
	ofSetColor(0, 0, 255);
	//ofTranslate(10,10,0);
	ofDrawRectangle(0, 0, 20, 20);
	*/
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	ZeroArray();
	TakeAStep();
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
