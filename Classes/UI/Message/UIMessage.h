//
// Created by pornokot on 17.03.18.
//

#ifndef MYGAME_UIMESSAGE_H
#define MYGAME_UIMESSAGE_H

#include "cocos2d.h"

class UIMessage : public cocos2d::Layer
{
public:
    UIMessage();
    ~UIMessage();
    
    bool initWithNode(cocos2d::Node* node,const std::string& msg, const float& time, cocos2d::Vec2 point,const cocos2d::ccMenuCallback& callback );
    UIMessage* createToast(cocos2d::Node* node, const std::string& msg, const float& time,
                                         cocos2d::Vec2 point,const cocos2d::ccMenuCallback& callback);
    void onEnter();
    void OkClick();
    void CancelClick();
    
    CREATE_FUNC(UIMessage);
};

#endif //MYGAME_UIMESSAGE_H
