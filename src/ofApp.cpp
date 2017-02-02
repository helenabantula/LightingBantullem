#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    manager.setup();
    
    manager.setGroupColor(0, ofColor(255,0,100));
    manager.setGroupColor(1, ofColor(150,140,3));

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
    
    if (key == 'r')
        manager.setGroupColor(3, ofColor(255,0,0));
    if (key == 'g')
        manager.setGroupColor(0, ofColor(0,100,0));

    
}
