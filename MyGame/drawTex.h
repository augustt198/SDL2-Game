//
//  drawTex.h
//  MyGame
//
//  Created by August Trollback on 9/28/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#ifndef __MyGame__drawTex__
#define __MyGame__drawTex__

#include <iostream>
#include "SDL2/SDL.h"
  
SDL_Texture* SurfaceToTex(SDL_Surface* mSurface, SDL_Renderer* mRender);
    
void renderTex(SDL_Renderer* render, SDL_Texture* texture);

void renderSurface(SDL_Renderer* render, SDL_Surface* surface);

#endif /* defined(__MyGame__drawTex__) */
