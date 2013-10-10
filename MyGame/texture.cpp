//
//  texture.cpp
//  MyGame
//
//  Created by August Trollback on 10/9/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#include "texture.h"

Texture::Texture(){
    mTexture = NULL;
    mWidth = 0;
    mHeight = 0;
}

Texture::~Texture(){
    freeTex();
}

void Texture::freeTex(){
    if(mTexture != NULL){
        SDL_DestroyTexture(mTexture);
        mTexture = NULL;
        mWidth = 0;
        mHeight = 0;
    }
}

void Texture::render(int x, int y, SDL_Rect* clip, SDL_Renderer* renderer){
    SDL_Rect renderQuad = { x, y, mWidth, mHeight };
    
    if(clip != NULL){
        renderQuad.w = clip->w;
        renderQuad.h = clip->h;
    
    }
    
    SDL_RenderCopy(renderer, mTexture, clip, &renderQuad);
    
}

void Texture::setTex(SDL_Texture *newTex){
    mTexture = newTex;
}