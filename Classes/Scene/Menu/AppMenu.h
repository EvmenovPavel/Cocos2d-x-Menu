#pragma once

#include "cocos2d.h"
#include "AppSettings.h"

class AppMenu : public cocos2d::Scene
{
public:
    AppMenu();
    ~AppMenu() override;

    static cocos2d::Scene* createScene();

    bool init() override;

private:
    CREATE_FUNC(AppMenu);

private:
    void addMenuButton();
};