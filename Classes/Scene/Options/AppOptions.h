//
// Created by pornokot on 26.01.18.
//

#ifndef MYGAME_TOPTIONS_H
#define MYGAME_TOPTIONS_H

#include "cocos2d.h"
#include "AppSettings.h"
#include "UI/Button/UIButton.h"
#include "UI/Slider/UISlider.h"

class AppOptions : public cocos2d::Scene
{
public:
    AppOptions();
    ~AppOptions() override;

    static cocos2d::Scene* createScene();

    bool init() override;

    void createButtonBack();
    void createUISlider();

private:
    CREATE_FUNC(AppOptions);
};

#endif //MYGAME_TOPTIONS_H
