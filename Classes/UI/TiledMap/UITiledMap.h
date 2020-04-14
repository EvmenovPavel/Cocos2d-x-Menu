//
// Created by pornokot on 17.01.18.
//

#ifndef MYGAME_VECTORTILEDMAP_H
#define MYGAME_VECTORTILEDMAP_H

#include <cocos2d.h>
#include <iostream>

class UITiledMap
{
public:
    static cocos2d::TMXTiledMap* create(std::string tmxFile);
    void createTMXTiled(cocos2d::TMXTiledMap* tmxTiledMap);
};

#endif //MYGAME_VECTORTILEDMAP_H
