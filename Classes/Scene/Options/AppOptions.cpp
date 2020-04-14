#include "AppOptions.h"

AppOptions::AppOptions()
{
    cocos2d::log("AppOptions");
}

AppOptions::~AppOptions()
{
    cocos2d::log("Remove: ~AppOptions");
}

cocos2d::Scene* AppOptions::createScene()
{
    return AppOptions::create();
}

bool AppOptions::init()
{
    this->addChild(AppSettings::drawTop());
    this->addChild(AppSettings::drawBottom());
    this->addChild(AppSettings::drawLeft());
    this->addChild(AppSettings::drawRight());

    std::string text = "Back";
    cocos2d::log(">>> add Button: name=(%s)", text.c_str());

    cocos2d::Label* label = cocos2d::Label::createWithTTF(text, TEXT::FONT, TEXT::SIZE);
    label->setName(text);

    cocos2d::MenuItemLabel* item = cocos2d::MenuItemLabel::create(label, [=](cocos2d::Ref* obj)
    {
        cocos2d::log("> Click: Button(Label): \"%s\"", text.c_str());

        Scene* scene = cocos2d::Director::getInstance()->previousScene();
        cocos2d::Director::getInstance()->popScene(cocos2d::TransitionFade::create(0.5f, scene));
    });

    item->setName(text);
    item->setPosition(AppSettings::setVec2MenuItem(item, AppSettings::POINT::TOP_LEFT));

    this->addChild(AppSettings::createMenu(item));

    return true;
}

void AppOptions::createButtonBack()
{
    cocos2d::log("> Click: onButtonBack()");

    cocos2d::Scene* scene = static_cast<cocos2d::Scene*>(this);
    //    cocos2d::Scene* scene = cocos2d::Director::getInstance()->getRunningScene();
    cocos2d::Director::getInstance()->popScene(cocos2d::TransitionFade::create(0.5f, scene));



    //    cocos2d::MenuItem* item = UIButton::create("Back", AppSettings::POINT::TOP_LEFT, CC_CALLBACK_0
    //    (AppOptions::createButtonBack));

    //    this->addChild(AppSettings::createMenu(item));
}

void AppOptions::createUISlider()
{
    //    cocos2d::Vector<UISlider> slider;// = UISlider::create({"Music", "SFX", "Songs"});
    //
    //    UISlider sliderUIMusic = UISlider::createTSlider("Music");
    //    UISlider sliderUISongs = UISlider::createTSlider("Songs");
    //
    //    slider.pushBack(sliderUIMusic);
    //    slider.pushBack(sliderUISongs);

    //    this->addChild(Music.slider);
    //    this->addChild(Music.label);

    //    this->addChild(Song.slider);
    //    this->addChild(Song.label);
}