//
//  geometry.cpp
//  MyGame
//
//  Created by August Trollback on 9/29/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#include "geometry.h"

void geoTest(SDL_Renderer* renderer){
    SDL_Rect fillRect = { 400 / 4, 400 / 4, 400/ 2, 400 / 2 };
    SDL_SetRenderDrawColor( renderer, 0xFF, 0x00, 0x00, 0xFF );
    SDL_RenderFillRect( renderer, &fillRect );
    
    SDL_Rect outlineRect = { 400 / 6, 400 / 6, 400 * 2 / 3, 400 * 2 / 3 };
    SDL_SetRenderDrawColor( renderer, 0x00, 0xFF, 0x00, 0xFF );
    SDL_RenderDrawRect( renderer, &outlineRect );
    
    SDL_SetRenderDrawColor( renderer, 0x00, 0x00, 0xFF, 0xFF );
    SDL_RenderDrawLine( renderer, 0, 400 / 2, 400, 400 / 2 );
}