#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    manager.setup();
    
    manager.setGroupColor(0, ofColor(255,0,100));
    //manager.setGroupColor(1, ofColor(150,140,3));

}

//--------------------------------------------------------------
void ofApp::update(){
    
    manager.update();

}

//--------------------------------------------------------------
void ofApp::draw(){

}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (isKeyReleased == true)
    {
        if (key == 'r') {
            manager.setGroupColor(0, ofColor(255,0,0),-1,2);
            manager.setGroupIntensity(0, 255, 3);
        }
        if (key == 'g'){
            manager.setGroupColor(0, ofColor(0,0,255),-1,2);
            manager.setGroupIntensity(0, 0, 3);
        }
        
        isKeyReleased = false;
    }
}

void ofApp::keyReleased(int key){
        
    isKeyReleased = true;

}


