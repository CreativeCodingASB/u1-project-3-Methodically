#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void myMergeSort();
        void mergeSort();
        void merge(int list[], int size);
    private:
        int length = 1024;
        int n[1024];
        int i=2;
        int runCounter=0;
};
