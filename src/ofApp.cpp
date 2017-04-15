#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    sound.load("spring_sing.mp3");
    sound.play();
    
    for(int i=0; i<NUM; i++){
        mBox[i].setPosition(ofRandom(-700, 700), ofRandom(-700, 700), ofRandom(-700,700));
    }
    ofToggleFullscreen();
}

//--------------------------------------------------------------
void ofApp::update(){
    volume = ofSoundGetSpectrum(1);
    box_size = volume[0]*200;
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    //ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
     for(int i=0; i<NUM; i++){
         ofSetColor(ofColor::fromHsb(i*2, 255, 255));
         mBox[i].set(box_size);
         mBox[i].draw();
     }
    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
