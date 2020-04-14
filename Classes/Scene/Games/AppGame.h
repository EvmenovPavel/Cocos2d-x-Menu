#pragma once

#include "cocos2d.h"
#include "AppSettings.h"
#include "Scene/Pause/AppPause.h"
#include "UI/Button/UIButton.h"
#include "UI/TiledMap/UITiledMap.h"
//#include <framework/Events/EventListenerKeyboard/TEventListenerKeyboard.h>

class AppGame : public cocos2d::Scene
{
public:
    AppGame();
    ~AppGame() override;

    static cocos2d::Scene* createScene();

    bool init() override;

private:
    CREATE_FUNC(AppGame);

private:
    cocos2d::TMXTiledMap* uiTiledMap;

    //    virtual void onKeyPressed(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event);
    //    virtual void onKeyReleased(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event);

    //    void onKeyHold(float interval);
    //    std::vector<cocos2d::EventKeyboard::KeyCode> heldKeys;

    cocos2d::Sprite* mario;
};
