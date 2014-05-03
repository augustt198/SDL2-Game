//
//  renderUtils.cpp
//  MyGame
//
//  Created by August Trollback on 10/5/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#include "renderUtils.h"


SDL_Texture* SurfaceToTex(SDL_Surface* surface, SDL_Renderer* render){
    SDL_Texture* texture = NULL;
    texture = SDL_CreateTextureFromSurface(render, surface);
    
    if(texture == NULL){
        cout<<"Unable to convert surface to texture: "<<SDL_GetError()<<endl;
    }
    return texture;
}

void renderTex(SDL_Renderer *render, SDL_Texture *texture){
    SDL_RenderCopy(render, texture, NULL, NULL);
}

void renderSurface(SDL_Renderer* render, SDL_Surface* surface){
    SDL_Texture* texture = SDL_CreateTextureFromSurface(render, surface);
    SDL_RenderCopy(render, texture, NULL, NULL);
    SDL_DestroyTexture(texture);
}

SDL_Texture* loadTexture(string path, SDL_Renderer* renderer){
    SDL_Texture* texture = NULL;
    SDL_Surface* loadedSurface = IMG_Load(path.c_str());
    
    if(loadedSurface == NULL){
        cout<<"Unable to load image onto surface: "<<SDL_GetError()<<endl;
    }
    else {
        texture = SDL_CreateTextureFromSurface(renderer, loadedSurface);
        if(texture == NULL){
            cout<<"Unable to convert surface to texture: "<<SDL_GetError()<<endl;
        }
        
        SDL_FreeSurface(loadedSurface);
    }
    
    return texture;
}
