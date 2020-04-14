//
// Created by pornokot on 09.03.18.
//

#ifndef MYGAME_TLOADINGBAR_H
#define MYGAME_TLOADINGBAR_H

#include "cocos2d.h"
#include "ui/CocosGUI.h"

class UILoadingBar
{
public:
    UILoadingBar();
    ~UILoadingBar();
    
    cocos2d::ui::LoadingBar *create();
};

#endif //MYGAME_TLOADINGBAR_H
