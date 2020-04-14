#include "UIButton.h"

UIButton::UIButton()
{
    cocos2d::log("UIButton");
}

UIButton::~UIButton()
{
    cocos2d::log("UIButtonn");
}

cocos2d::MenuItem* UIButton::create(const std::string &text, const ccMenuCallback &callback)
{
    cocos2d::log(">>> add Button: name=(%s)", text.c_str());

    cocos2d::Label* label = UILabel::create(text);
    cocos2d::MenuItemLabel* item = cocos2d::MenuItemLabel::create(label, callback);

    item->setName(text);

    return item;
}

cocos2d::MenuItem* UIButton::create(const std::string &text, AppSettings::POINT point, const ccMenuCallback &callback)
{
    cocos2d::log(">>> add Button: name=(%s)", text.c_str());

    cocos2d::Label* label = UILabel::create(text);
    cocos2d::MenuItemLabel* item = cocos2d::MenuItemLabel::create(label, callback);

    item->setName(text);
    item->setPosition(AppSettings::setVec2MenuItem(item, point));

    return item;
}