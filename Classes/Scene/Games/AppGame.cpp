#include "AppGame.h"

AppGame::AppGame()
{
    cocos2d::log("AppGame");
}

AppGame::~AppGame()
{
    cocos2d::log("Remove: ~AppGame");
}

cocos2d::Scene* AppGame::createScene()
{
    return AppGame::create();
}

bool AppGame::init()
{
    this->addChild(AppSettings::drawTop());
    this->addChild(AppSettings::drawBottom());
    this->addChild(AppSettings::drawLeft());
    this->addChild(AppSettings::drawRight());

    cocos2d::MenuItem* item = UIButton::create("STOP", AppSettings::POINT::TOP_RIGHT, [](cocos2d::Ref* obj)
    {
        cocos2d::log("Click >> onButtonPause()");
        cocos2d::Director::getInstance()->pushScene(cocos2d::TransitionFade::create(0.5f, AppPause::createScene()));
    });
    this->addChild(AppSettings::createMenu(item));

//    uiTiledMap = UITiledMap::create("TiledMaps/test.tmx");
//    this->addChild(uiTiledMap);
//
//    mario = cocos2d::Sprite::create("mario1.png");
//    this->addChild(mario);

//    this->getEventDispatcher()->addEventListenerWithSceneGraphPriority(TEventListenerKeyboard::create(), this);

//    auto scheduler = cocos2d::Director::getInstance()->getScheduler();
//    scheduler->performFunctionInCocosThread(CC_CALLBACK_0(TEventListenerKeyboard::updateKey, this));

//    this->schedule(CC_SCHEDULE_SELECTOR(TEventListenerKeyboard::updateKey), 0.5f);

//    this->_eventDispatcher->addEventListenerWithFixedPriority(eventListenerKeyboard, 1);

    return true;
}