#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    manager.setup();
    
    manager.setGroupColor(0, ofColor(255,0,0));

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
    
    if (key == 'R')
        manager.setGroupColor(0, ofColor(255,0,0));
    if (key == 'G')
        manager.setGroupColor(0, ofColor(0,255,0));

    
}
