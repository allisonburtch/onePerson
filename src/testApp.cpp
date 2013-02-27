#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    tspsReceiver.connect(12000);
    
   // ofSetBackgroundAuto(false);
    ofBackground(0 );
    
    ofSetFrameRate(30);
    ofEnableAlphaBlending();
    ofSetCircleResolution(60);
    

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

    
    //ofRect(0,0,ofGetWidth(),ofGetHeight());
    
    vector<ofxTSPS::Person *>  people = tspsReceiver.getPeople();
    
    ofSetColor(255);
    ofDrawBitmapString("people size: " + ofToString(people.size()), 20, 20);
        
        if (people.size() <= 1) {
            
            ofSetColor(50,50,50);
            ofCircle(ofGetWidth()/2, ofGetWidth()/2, 300);
        
        
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}