#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    for(int i=0; i<length; i++)
    {
        n[i]=(int)rand()%ofGetHeight();
    }
}

//--------------------------------------------------------------
void ofApp::update()
{
    myMergeSort();
}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofBackground(0);
    for(int i=0; i<length; i++)
    {
        ofSetColor(255*n[i]/ofGetHeight(), 255-(255*n[i]/ofGetHeight()), 255);
        ofDrawRectangle(i*ofGetWidth()/length, ofGetHeight()-n[i], ofGetWidth()/length, n[i]);
    }
}
void ofApp::myMergeSort()
{
    if(i<=length)
    {
        int temp[1024];
        for(int j=0; j<length; j+=i)
        {
            int k=0, l=i/2;
            for(int m=0; m<i; m++)
            {
                if(l<i&&k<i/2)
                {
                    if(n[j+l]>n[j+k])
                    {
                        temp[j+m]=n[j+k];
                        k++;
                    } else
                    {
                        temp[j+m]=n[j+l];
                        l++;
                    }
                } else if(k>=i/2)
                {
                    temp[j+m]=n[j+l];
                    l++;
                } else if(l>=i)
                {
                    temp[j+m]=n[j+k];
                    k++;
                }
            }
            runCounter++;
        }
        
        for(int i=0; i<length; i++)
        {
            n[i]=temp[i];
        }
        i*=2;
    }
}
void ofApp::mergeSort()
{
    
}
void ofApp::merge(int list[], int size)
{
    if(size>2)
    {
        if(size%2==0)
        {
            int temp1[size/2];
            int temp2[size/2];
            for(int i=0; i<size/2; i++)
            {
                temp1[i]=list[i];
                temp1[i]=list[i+size/2];
            }
        }
    }
    
}


