//
//  player.cpp
//  MyGame
//
//  Created by August Trollback on 9/27/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#include "player.h"

Player::Player(){
    playerimg = SDL_LoadBMP("res/player_rest.bmp");
    cout<<"Player succesfully made!"<<endl;
}


Player::~Player(){
    
}

SDL_Surface* Player::getPlayerSurface(){
    return playerimg;
}

void Player::move(int direction){
    
    //move right
    if(direction == 1){
        
    }
    
    //move left
    if(direction == 2){
        
    }
}