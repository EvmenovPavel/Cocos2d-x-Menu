//
// Created by pornokot on 10.03.18.
//

#ifndef MYGAME_APPSETTINGS_H
#define MYGAME_APPSETTINGS_H

#include "cocos2d.h"
#include "UI/Slider/UISlider.h"

namespace TEXT
{
    const int SIZE = 33;
    
    const std::string FONT = "fonts/Marker Felt.ttf";
}

class AppSettings
{
private:
    AppSettings();
    ~AppSettings();
public:
    static cocos2d::Size getSizeScreen();
    static cocos2d::Size getSizeBorder();
    static cocos2d::DrawNode* drawBottom();
    static cocos2d::DrawNode* drawTop();
    static cocos2d::DrawNode* drawLeft();
    static cocos2d::DrawNode* drawRight();
    
    //createWith
    static cocos2d::Menu* createVectorMenu(cocos2d::Vector<cocos2d::MenuItem*> vector);
    static cocos2d::Menu* createMenu(cocos2d::MenuItem* menuItem);
    
    enum class POINT : int
    {
        ZERO          = 0,
        CENTRE        = 1,
        CENTRE_LEFT   = 2,
        CENTRE_RIGHT  = 3,
        TOP_LEFT      = 4,
        TOP_RIGHT     = 5,
        TOP_CENTRE    = 6,
        BOTTOM_LEFT   = 7,
        BOTTOM_RIGHT  = 8,
        BOTTOM_CENTRE = 9
    };
    
    static cocos2d::Size setPoint(POINT point);
    static cocos2d::Vec2 setVec2MenuItem(cocos2d::MenuItem* menuItem, POINT point);
//    static cocos2d::Vector<UISlider> setVec2T(cocos2d::Vector<UISlider> vector, POINT point);
};

#endif //MYGAME_APPSETTINGS_H
