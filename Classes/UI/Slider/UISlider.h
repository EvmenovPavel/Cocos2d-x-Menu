//
// Created by pornokot on 27.01.18.
//

#ifndef MYGAME_TSLIDER_H
#define MYGAME_TSLIDER_H

#include "cocos2d.h"
#include "cocos/ui/UISlider.h"
#include "AppSettings.h"

class UISlider
{
public:
    cocos2d::ui::Slider *slider;
    cocos2d::Label      *label;
    
    static UISlider createTSlider(std::string text);

public:
//    static cocos2d::Vector<UISlider>* create(std::vector vector);
};


#endif //MYGAME_TSLIDER_H
