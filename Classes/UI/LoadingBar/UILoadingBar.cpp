//
// Created by pornokot on 09.03.18.
//

#include "UILoadingBar.h"

USING_NS_CC;

UILoadingBar::UILoadingBar()
{
}

UILoadingBar::~UILoadingBar()
{
}

cocos2d::ui::LoadingBar* UILoadingBar::create()
{
    ui::LoadingBar* loadingBar = ui::LoadingBar::create("LoadingBarFile.png");
//    loadingBar->setDirection(LoadingBar::Direction::RIGHT);

// something happened, change the percentage of the loading bar
    loadingBar->setPercent(25);

    return loadingBar;
}