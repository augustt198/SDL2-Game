//
//  geometry.h
//  MyGame
//
//  Created by August Trollback on 9/29/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#ifndef __MyGame__geometry__
#define __MyGame__geometry__

#include <iostream>
#include <SDL2/SDL.h>

class Geometry {
    
private:
    
    
public:
    
    //construct / destruct
    Geometry();
    ~Geometry();
    
    //methods
    void prepare(SDL_Renderer* render);
    void draw(SDL_Renderer* render);
    
};

#endif /* defined(__MyGame__geometry__) */

