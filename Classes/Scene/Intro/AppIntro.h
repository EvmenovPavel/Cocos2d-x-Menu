#pragma once

#include "cocos2d.h"
#include "AppSettings.h"
#include "../Menu/AppMenu.h"

class AppIntro : public cocos2d::Scene
{
public:
    AppIntro();
    ~AppIntro() override;

    static cocos2d::Scene* createScene();

    bool init() override;

private:
    CREATE_FUNC(AppIntro);

public:
    void onShowSceneMenu(float delta);

private:
    cocos2d::Sprite* spriteIntro1;
    cocos2d::Sprite* spriteIntro2;

    cocos2d::Vector<cocos2d::FiniteTimeAction*> actionsIntro;
};
