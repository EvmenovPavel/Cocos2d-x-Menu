//
// Created by pornokot on 16.01.18.
//

#ifndef MYGAME_TLABEL_H
#define MYGAME_TLABEL_H

#include "cocos2d.h"
#include "AppSettings.h"

class UILabel
{
public:
    UILabel();
    ~UILabel();
    
    static cocos2d::Label *create(std::string text);
};


#endif //MYGAME_TLABEL_H
