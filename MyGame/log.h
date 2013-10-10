//
//  log.h
//  MyGame
//
//  Created by August Trollback on 10/9/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#ifndef __MyGame__log__
#define __MyGame__log__

#include <iostream>
#include <ctime>

using namespace std;

class Log{
private:
    
    
public:
    Log();
    ~Log();
    
    void error(string error);
    void warning(string warning);
    void info(string info);

};


#endif /* defined(__MyGame__log__) */
