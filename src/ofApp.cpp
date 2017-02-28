#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    manager.setup();
    
    manager.setGroupColor(0, ofColor(255,0,100));
    //manager.setGroupColor(1, ofColor(150,140,3));
    
    mySignalState1 = STATE_SIN;

    mySignalState2 = STATE_UPSAW;
    
    
    SignalGenerator signalGen11( mySignalState1, 3, 0, 0.05);
    signalGen1 = signalGen11;
    
    SignalGenerator signalGen22( mySignalState2, 3, 0, 0.05);
    signalGen2 = signalGen22;
    
    ofSetBackgroundAuto(false);
    ofBackground(200,200,200);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    manager.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float signal1= signalGen1.getSignal();
    float signal2= signalGen2.getSignal();

    
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


