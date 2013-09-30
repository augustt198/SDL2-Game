//
//  player.h
//  MyGame
//
//  Created by August Trollback on 9/27/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#ifndef __MyGame__player__
#define __MyGame__player__

#include <iostream>
#include "SDL2/SDL.h"

using namespace std;

class Player{

private:
    
    int posX;
    int posY;
    
    SDL_Surface* playerimg;
    
    enum DIRECTION{
        NONE = 0,
        RIGHT = 1,
        LEFT = 2
    };
    
public:
    
    //construct / destruct
    Player();
    ~Player();
    
    void move(int direction);
    SDL_Surface* getPlayerSurface();
    
};

#endif /* defined(__MyGame__player__) */
