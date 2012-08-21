#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
  if (model.loadModel("sandy_beach.obj",true)) {
    model.calculateDimensions();
    model.setPosition(ofGetWidth()/2, ofGetHeight()/2, 0);
    model.setScale(2, 2, 2);
    mesh = model.getMesh(0);
    material = model.getMaterialForMesh(0);
    tex = model.getTextureForMesh(0);
  }
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
  model.drawFaces();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    model.setPosition(x, y, 0);
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
