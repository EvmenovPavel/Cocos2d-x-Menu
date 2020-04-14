//
// Created by pornokot on 16.01.18.
//

#include "UILabel.h"

UILabel::UILabel()
{
}

UILabel::~UILabel()
{
}

cocos2d::Label* UILabel::create(std::string text)
{
    cocos2d::log(">> add Label: text=(%s)", text.c_str());
    cocos2d::Label* label = cocos2d::Label::createWithTTF(text, TEXT::FONT, TEXT::SIZE);
    label->setName(text);
    
    return label;
}