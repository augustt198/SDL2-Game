//
//  drawTex.cpp
//  MyGame
//
//  Created by August Trollback on 9/28/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#include "drawTex.h"

SDL_Texture* SurfaceToTex(SDL_Surface* surface, SDL_Renderer* render){
    SDL_Texture* texture = SDL_CreateTextureFromSurface(render, surface);
    return texture;
}

void renderTex(SDL_Renderer *render, SDL_Texture *texture){
    SDL_RenderCopy(render, texture, NULL, NULL);
}