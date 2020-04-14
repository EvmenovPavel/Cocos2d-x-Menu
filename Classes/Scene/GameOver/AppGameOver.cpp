#include "AppGameOver.h"

AppGameOver::AppGameOver()
{
    cocos2d::log("AppGameOver");
}

AppGameOver::~AppGameOver()
{
    cocos2d::log("Remove: ~AppGameOver");
}

cocos2d::Scene* AppGameOver::createScene()
{
    return AppGameOver::create();
}

bool AppGameOver::init()
{
    return true;
}