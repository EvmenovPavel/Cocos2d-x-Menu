#include "AppPause.h"

AppPause::AppPause()
{
    cocos2d::log("AppPause");
}

AppPause::~AppPause()
{
    cocos2d::log("Remove: ~AppPause");
}

cocos2d::Scene* AppPause::createScene()
{
    return AppPause::create();
}

bool AppPause::init()
{
    this->addChild(AppSettings::drawTop());
    this->addChild(AppSettings::drawBottom());
    this->addChild(AppSettings::drawLeft());
    this->addChild(AppSettings::drawRight());

    this->addMenuButton();

    return true;
}

void AppPause::addMenuButton()
{
    cocos2d::MenuItem* itemResume = UIButton::create("Resume", [](cocos2d::Ref* obj)
    {
        cocos2d::log("Click >> onButtonResume()");
        cocos2d::Director::getInstance()->popSceneWithTransitionFade(0.5f);
    });

    cocos2d::MenuItem* itemOptions = UIButton::create("Options", [](cocos2d::Ref* obj)
    {
        cocos2d::log("Click >> onButtonOptions()");
        cocos2d::Director::getInstance()->pushScene(cocos2d::TransitionFade::create(0.5f, AppOptions::createScene()));
    });

    cocos2d::MenuItem* itemMainMenu = UIButton::create("Main Menu", [](cocos2d::Ref* obj)
    {
        cocos2d::log("Click >> onButtonQuitGame()");
        cocos2d::Director::getInstance()->replaceScene(cocos2d::TransitionFade::create(0.5f, AppMenu::createScene()));
    });

    cocos2d::Vector<cocos2d::MenuItem*> vector;
    vector.pushBack(itemResume);
    vector.pushBack(itemOptions);
    vector.pushBack(itemMainMenu);

    this->addChild(AppSettings::createVectorMenu(vector));
}