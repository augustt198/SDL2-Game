//
//  elements.h
//  MyGame
//
//  Created by August Trollback on 10/4/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#ifndef __MyGame__elements__
#define __MyGame__elements__

#include <iostream>
#include "SDL2/SDL.h"
#include "SDL2_image/SDL_image.h"
#include "renderUtils.h"


using namespace std;

class Button {
private:
    int posX;
    int posY;
    string text;
    
    SDL_Texture* buttontex;
    
public:
    
    Button();
    Button(SDL_Renderer* renderer);
    ~Button();
    
    
    void click();
    bool isHighlighed();
    
    //maybe
    //void set(int x, int y, string mText);
};


#endif /* defined(__MyGame__elements__) */
