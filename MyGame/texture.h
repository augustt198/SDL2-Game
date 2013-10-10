//
//  texture.h
//  MyGame
//
//  Created by August Trollback on 10/9/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#ifndef __MyGame__texture__
#define __MyGame__texture__

#include <iostream>
#include "SDL2/SDL.h"
#include "renderUtils.h"

class Texture {
private:
    SDL_Texture* mTexture;
    
    int mWidth;
    int mHeight;
    
public:
    Texture();
    ~Texture();
    
    void freeTex();
    
    //not sure if will be used
    void render(int x, int y, SDL_Rect* clip, SDL_Renderer* renderer);
    
    //gets
    int getWidth();
    int getHeight();
    
    void setTex(SDL_Texture* newTex);
    
};


#endif /* defined(__MyGame__texture__) */
