//
//  elements.cpp
//  MyGame
//
//  Created by August Trollback on 10/4/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#include "elements.h"

Button::Button(SDL_Renderer* renderer) {
    buttontex = loadTexture("/rest/rest2.pmg", renderer);
}

