#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //exemple osciláladors
    manager.setup();
    manager.makeGroupFollow(0, 2, 100, STATE_SIN, 0.5, 0, 0.02, 0);
    manager.makeGroupFollow(0, 2, 100, STATE_COS, 0.01, 0, 0, 1);

    

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

            manager.setGroupColor(0, ofColor(255,0,0), 0.3, 0);
            
        }
        if (key == 'g'){
            manager.setGroupColor(0, ofColor(0,255,0), 0.3, 1);

        }
        
        isKeyReleased = false;
    }
}

void ofApp::keyReleased(int key){
        
    isKeyReleased = true;

}


