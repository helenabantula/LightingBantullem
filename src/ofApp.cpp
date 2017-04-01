#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    manager.setup();
    
    manager.setGroupColor(3, ofColor(255,30,0), 0.01, 0);
    manager.setGroupColor(3, ofColor(255,10,20), 0.01, 1);
    manager.setGroupColor(3, ofColor(255,0,30), 0.01, 2);
    manager.setGroupColor(3, ofColor(255,20,10), 0.01, 3);




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
        if (key == '1') {

            manager.makeGroupBeatColor(0, ofColor(255,0,0), ofColor(0,0,0), 0.3 );
            
        }
        if (key == '2') {
            
            manager.makeGroupBeatColor(1, ofColor(255,0,200), ofColor(0,0,0), 0.3);
            
        }
        if (key == '3') {
            
            manager.makeGroupBeatColor(2, ofColor(0,255,0), ofColor(0,0,0), 0.3);
            
        }
        if (key == '4') {
            
            manager.makeGroupFollow(3, 150, 32, STATE_SIN, 1, 0, 0.005);
            
        }

        
        isKeyReleased = false;
    }
}

void ofApp::keyReleased(int key){
        
    isKeyReleased = true;

}


