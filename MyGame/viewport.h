//
//  viewport.h
//  MyGame
//
//  Created by August Trollback on 9/30/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#ifndef __MyGame__viewport__
#define __MyGame__viewport__

#include <iostream>
#include "SDL2/SDL.h"

/*
 SDL_Rect topRightViewport;
 topRightViewport.x = SCREEN_WIDTH / 2;
 topRightViewport.y = 0;
 topRightViewport.w = SCREEN_WIDTH / 2;
 topRightViewport.h = SCREEN_HEIGHT / 2;
 SDL_RenderSetViewport( renderer, &topRightViewport );
 */

SDL_Rect createViewport(int x, int y, int w, int h);

void setViewport(SDL_Rect viewport, SDL_Renderer* render);

#endif /* defined(__MyGame__viewport__) */

