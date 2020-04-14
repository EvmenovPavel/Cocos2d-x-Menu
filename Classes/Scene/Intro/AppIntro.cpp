#include "AppIntro.h"

AppIntro::AppIntro()
{
    cocos2d::log("AppIntro");
}

AppIntro::~AppIntro()
{
    cocos2d::log("Remove: ~AppIntro");
}

cocos2d::Scene *AppIntro::createScene()
{
    return AppIntro::create();
}

bool AppIntro::init()
{
    cocos2d::Size visibleSize = cocos2d::Director::getInstance()->getVisibleSize();
    cocos2d::Vec2 origin      = cocos2d::Director::getInstance()->getVisibleOrigin();
    
    actionsIntro.pushBack(cocos2d::FadeIn::create(1.5f));
    actionsIntro.pushBack(cocos2d::DelayTime::create(3.0f));
    actionsIntro.pushBack(cocos2d::FadeOut::create(1.5f));
    
    spriteIntro1 = cocos2d::Sprite::create("Scene/Intro/Intro-1.png");
    spriteIntro1->setPosition(AppSettings::setPoint(AppSettings::POINT::CENTRE));
    spriteIntro1->setOpacity(0);
    
    spriteIntro2 = cocos2d::Sprite::create("Scene/Intro/Intro-2.png");
    spriteIntro2->setPosition(AppSettings::setPoint(AppSettings::POINT::CENTRE));
    spriteIntro2->setOpacity(0);
    
    this->addChild(spriteIntro1);
    this->addChild(spriteIntro2);
    
    spriteIntro1->runAction(cocos2d::Sequence::create(actionsIntro));
    
    this->schedule(CC_SCHEDULE_SELECTOR(AppIntro::onShowSceneMenu), 1.0f);
    
    return true;
}

void AppIntro::onShowSceneMenu(float delta)
{
    static int start = 1;
    
    cocos2d::log("int: %i", start);
    
    switch (start)
    {
        case 6:
        {
            spriteIntro2->runAction(cocos2d::Sequence::create(actionsIntro));
            break;
        }
        case 12:
        {
            cocos2d::Director::getInstance()->replaceScene(cocos2d::TransitionFade::create(1.0f, AppMenu::createScene()));
            break;
        }
    }
    
    ++start;
}