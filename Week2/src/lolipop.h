//
//  lolipop.h
//  lolipop
//
//  Created by Danli Hu on 9/17/15.
//
//

#ifndef __lolipop__lolipop__
#define __lolipop__lolipop__

#include "stdio.h"
#include "ofMain.h"
class lolipop : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();

private:
    float ellipseR; //ellipse
    float candyWidth, candyHeight;//candy
    float spiralX, spiralY;
    int spiralSize; //spiral
    float CandyStickW, CandyStickH; //candyStick
    float stickLength, stickWidth; //stick
    float xPos, yPos;//position
    float rotation; //rotation
    ofColor ellipseColor, spiralColor, stickColor, candyColor;//color
    float scaleFactor;//scale

};

#endif /* defined(__lolipop__lolipop__) */

