//
//  renderUtils.h
//  MyGame
//
//  Created by August Trollback on 10/5/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#ifndef __MyGame__renderUtils__
#define __MyGame__renderUtils__

#include <iostream>
#include "SDL2/SDL.h"
#include "SDL2_image/SDL_image.h"

using namespace std;

SDL_Texture* SurfaceToTex(SDL_Surface* mSurface, SDL_Renderer* mRender);

void renderTex(SDL_Renderer* render, SDL_Texture* texture);

void renderSurface(SDL_Renderer* render, SDL_Surface* surface);

SDL_Texture* loadTexture(string path, SDL_Renderer* renderer);

#endif /* defined(__MyGame__renderUtils__) */
