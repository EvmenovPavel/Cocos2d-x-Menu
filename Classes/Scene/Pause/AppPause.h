#pragma once

#include "cocos2d.h"
#include "AppSettings.h"
#include "Scene/Games/AppGame.h"
#include "UI/Button/UIButton.h"
#include "Scene/Options/AppOptions.h"
#include "Scene/Menu/AppMenu.h"

class AppPause : public cocos2d::Scene
{
public:
    AppPause();
    ~AppPause();

    static cocos2d::Scene* createScene();

    bool init() override;

private:
    CREATE_FUNC(AppPause);

    void addMenuButton();
};
