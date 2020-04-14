#include "AppMenu.h"
#include "UI/Button/UIButton.h"
#include "Scene/Loading/AppLoading.h"
#include "Scene/Options/AppOptions.h"

AppMenu::AppMenu()
{
    cocos2d::log("AppMenu");
}

AppMenu::~AppMenu()
{
    cocos2d::log("Remove: ~AppMenu");
}

cocos2d::Scene* AppMenu::createScene()
{
    return AppMenu::create();
}

bool AppMenu::init()
{
    this->addChild(AppSettings::drawTop());
    this->addChild(AppSettings::drawBottom());
    this->addChild(AppSettings::drawLeft());
    this->addChild(AppSettings::drawRight());

    this->addMenuButton();

    return true;
}

void AppMenu::addMenuButton()
{
    cocos2d::MenuItem* itemContinue = UIButton::create("Continue", [](cocos2d::Ref* obj)
    {
        cocos2d::log("Click >> onButtonResume()");
        cocos2d::Director::getInstance()->replaceScene(
                cocos2d::TransitionFade::create(0.5f, AppLoading::createScene()));
    });

    cocos2d::MenuItem* itemNewGame = UIButton::create("New Game", [](cocos2d::Ref* obj)
    {
        cocos2d::log("Click >> onButtonNewGame()");
        cocos2d::Director::getInstance()->replaceScene(
                cocos2d::TransitionFade::create(0.5f, AppLoading::createScene()));
    });

    cocos2d::MenuItem* itemOptions = UIButton::create("Options", [](cocos2d::Ref* obj)
    {
        cocos2d::log("Click >> onButtonOptions()");
        cocos2d::Director::getInstance()->pushScene(cocos2d::TransitionFade::create(0.5f, AppOptions::createScene()));
    });

    cocos2d::MenuItem* itemExit = UIButton::create("Exit", [](cocos2d::Ref* obj)
    {
        cocos2d::log("Click >> onButtonExit()");
        cocos2d::Director::getInstance()->end();

        #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        exit(0);
        #endif
    });

    cocos2d::Vector<cocos2d::MenuItem*> vector;
    vector.pushBack(itemContinue);
    vector.pushBack(itemNewGame);
    vector.pushBack(itemOptions);
    vector.pushBack(itemExit);

    this->addChild(AppSettings::createVectorMenu(vector));
}
