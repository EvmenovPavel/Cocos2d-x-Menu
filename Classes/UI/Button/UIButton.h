//
// Created by pornokot on 16.01.18.
//

#ifndef MYGAME_TBUTTON_H
#define MYGAME_TBUTTON_H

#include "cocos2d.h"
#include "AppSettings.h"
#include "UI/Label/UILabel.h"

typedef std::function<void(cocos2d::Ref*)> ccMenuCallback;

class UIButton
{
public:
    UIButton();
    ~UIButton();

    static cocos2d::MenuItem* create(const std::string &text, const ccMenuCallback &callback);
    static cocos2d::MenuItem* create(const std::string &text, AppSettings::POINT point, const ccMenuCallback &callback);
};

#endif //MYGAME_TBUTTON_H
