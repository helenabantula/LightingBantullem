#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    manager.setup();
    
    manager.setGroupColor(0, ofColor(255,0,100));
    //manager.setGroupColor(1, ofColor(150,140,3));
    
    mySignalState1 = STATE_SIN;

    mySignalState2 = STATE_UPSAW;
    
    
    //SignalGenerator signalGen1;
    signalGen1.setParams(mySignalState1, 3, 0, 0.50, 0, 1);
    
    //SignalGenerator signalGen2;
    signalGen2.setParams(mySignalState2, 3, 0, 0.05, 0, 2);
    
    ofSetBackgroundAuto(false);
    ofBackground(200,200,200);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    manager.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float signal1 = signalGen1.getSignal();
    cout<< signal1 << endl;
    float signal2 = signalGen2.getSignal();

    
    ofDrawSphere(ofGetElapsedTimeMillis()/10, 200 + signal1*100, 2);
    
    ofDrawSphere(ofGetElapsedTimeMillis()/10, 400 + signal2*100, 2);

    
    //ofDrawBitmapString(signal, 100, 100);

}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (isKeyReleased == true)
    {
        if (key == 'r') {

            manager.makeGroupFollow(0, 0, 255, STATE_TRIANGLE, 1, 0, 0.01);
            
        }
        if (key == 'g'){
            manager.setGroupColor(0, ofColor(0,0,255),2);
            manager.setGroupIntensity(0, 0, 4);
        }
        
        isKeyReleased = false;
    }
}

void ofApp::keyReleased(int key){
        
    isKeyReleased = true;

}


