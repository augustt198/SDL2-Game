//
//  viewport.cpp
//  MyGame
//
//  Created by August Trollback on 9/30/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#include "viewport.h"

SDL_Rect createViewport(int x, int y, int w, int h){
    SDL_Rect viewport;
    viewport.x = x;
    viewport.y = y;
    viewport.w = w;
    viewport.h = h;
    return viewport;
}

void setViewport(SDL_Rect viewport, SDL_Renderer* render){
    SDL_RenderSetViewport(render, &viewport);
}
