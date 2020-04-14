#pragma once

#include "cocos2d.h"
#include "AppSettings.h"

class AppVideo : public cocos2d::Scene
{
public:
    AppVideo();
    ~AppVideo() override;

    static cocos2d::Scene* createScene();
    bool init() override;

private:
    CREATE_FUNC(AppVideo);
};