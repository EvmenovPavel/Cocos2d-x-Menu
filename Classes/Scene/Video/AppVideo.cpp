#include "AppVideo.h"

AppVideo::AppVideo()
{
    cocos2d::log("AppVideo");
}

AppVideo::~AppVideo()
{
    cocos2d::log("Remove: ~AppVideo");
}

cocos2d::Scene* AppVideo::createScene()
{
    return AppVideo::create();
}

bool AppVideo::init()
{
    return true;
}