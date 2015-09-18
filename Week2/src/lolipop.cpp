//
//  lolipop.cpp
//  lolipop
//
//  Created by Danli Hu on 9/17/15.
//
//

#include "lolipop.h"

void lolipop::setup(){
//    float ellipseR; //ellipse
//    float candyWidth, candyHeight;//candy
//    float CandyStickW, CandyStickH; //candyStick
//    float spiralX, spiralY;
//    int spiralSize; //spiral
//    float stickLength, stickWidth; //stick
//    float xPos, yPos;//position
//    float rotation; //rotation
//    ofColor ellipseColor, spiralColor, stickColor, candyColor;//color
//    float scaleFactor;//scale
    
    xPos = ofGetWidth()/2;
    yPos = ofGetHeight()/2;
    ellipseR = ofRandom(50,80);
//    spiralSize = ofRandom(50,80);
    stickLength = ofRandom(150,200);
    stickWidth = 5;
    rotation = ofRandom(0,360);
    ellipseColor = ofColor(ofRandom(180,255),ofRandom(50,100),ofRandom(50,100),ofRandom(200,225));
    spiralColor = ofColor(255,255,255,120);
    stickColor = ofColor(100,100,200);
    scaleFactor = ofRandom(.5,1);
    candyWidth = 25;
    candyHeight = 30;
    CandyStickH = ofRandom(50,80);
    CandyStickW = 5;
    candyColor = ofColor(ofRandom(225,255),ofRandom(10,30),ofRandom(100,130),ofRandom(100,150));
}

//--------------------------------------------------------------
void lolipop::update(){
    
}

//--------------------------------------------------------------
void lolipop::draw(){
    
    ofPushMatrix();
        ofTranslate(xPos,yPos);
        ofRotateZ(rotation);
        ofScale(scaleFactor,scaleFactor);
    
    //draw lolipop
        //draw stick
        ofSetColor(stickColor);
        ofRect(0,0,stickWidth,stickLength);
    
        //draw ellipse
        ofSetColor(ellipseColor);
        ofCircle(0,+stickLength,ellipseR);
    
        //draw spiral
        ofSetColor(spiralColor);
        ofPushMatrix();
        ofTranslate(0,stickLength);
        ofBeginShape();
        for(int i=0;i<ellipseR;i++)
        {
            ofCurveVertex(i*sin(i),i*cos(i));
        }
        ofEndShape();
        ofPopMatrix();
    
    //draw candy
        //draw body
        ofSetColor(candyColor);
        ofEllipse(-CandyStickW/2, -CandyStickH, candyWidth, candyHeight);
    
     ofPopMatrix();
    
}
