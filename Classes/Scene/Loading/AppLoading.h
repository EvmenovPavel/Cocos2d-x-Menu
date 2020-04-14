#pragma once

#include "cocos2d.h"
#include "Scene/Games/AppGame.h"
#include "AppSettings.h"

class AppLoading : public cocos2d::Scene
{
public:
    AppLoading();
    ~AppLoading() override;

    static cocos2d::Scene* createScene();

    bool init() override;

private:
    CREATE_FUNC(AppLoading);

public:
    void onShowSceneGame(float delta);

private:
    cocos2d::Sprite* spriteLoading;

    int start = 0;
    bool act = false;
};