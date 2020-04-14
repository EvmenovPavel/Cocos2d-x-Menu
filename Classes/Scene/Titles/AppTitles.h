#pragma once

#include "cocos2d.h"
#include "AppSettings.h"

class AppTitles : public cocos2d::Scene
{
public:
    AppTitles();
    ~AppTitles() override;

    static cocos2d::Scene* createScene();

    bool init() override;

private:
    CREATE_FUNC(AppTitles);
};