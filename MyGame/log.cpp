//
//  log.cpp
//  MyGame
//
//  Created by August Trollback on 10/9/13.
//  Copyright (c) 2013 August Trollback. All rights reserved.
//

#include "log.h"

Log::Log(){
    
}

Log::~Log(){
    
}


void Log::error(string error){
    cout<<"========| ERROR |========"<<endl;
    cout<<error<<endl;
}

void Log::warning(string warning){
    cout<<"========| WARNING |========"<<endl;
    cout<<warning<<endl;
}

void Log::info(string info){
    cout<<"========| INFO |========"<<endl;
    cout<<info<<endl;
}