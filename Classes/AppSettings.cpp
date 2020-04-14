#include "AppSettings.h"

AppSettings::AppSettings()
{
}

AppSettings::~AppSettings()
{
}

cocos2d::Size AppSettings::getSizeBorder()
{
    cocos2d::Size sizeBorder = cocos2d::Size(TEXT::SIZE,
                                             TEXT::SIZE);
//    cocos2d::log("sizeBorder\n\tx: %f\n\ty: %f", sizeBorder.width, sizeBorder.height);
//    cocos2d::log("Remove: ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    
    return sizeBorder;
}

cocos2d::Size AppSettings::getSizeScreen()
{
    cocos2d::Size sizeScreen = cocos2d::Director::getInstance()->getOpenGLView()->getFrameSize();
    
//    cocos2d::log("sizeScreen\n\tx: %f\n\ty: %f", sizeScreen.width, sizeScreen.height);
//    cocos2d::log("Remove: ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    
    return sizeScreen;
}

cocos2d::DrawNode* AppSettings::drawBottom()
{
    auto drawBottom = cocos2d::DrawNode::create();
    drawBottom->drawLine(cocos2d::Point(AppSettings::getSizeBorder().width,
                                        AppSettings::getSizeBorder().height),
                         cocos2d::Point(AppSettings::getSizeScreen().width - AppSettings::getSizeBorder().width,
                                        AppSettings::getSizeBorder().height),
                         cocos2d::Color4F::RED);
    return drawBottom;
}

cocos2d::DrawNode* AppSettings::drawTop()
{
    auto drawTop = cocos2d::DrawNode::create();
    drawTop->drawLine(cocos2d::Point(AppSettings::getSizeBorder().width,
                                     AppSettings::getSizeScreen().height - AppSettings::getSizeBorder().height),
                      cocos2d::Point(AppSettings::getSizeScreen().width - AppSettings::getSizeBorder().width,
                                     AppSettings::getSizeScreen().height - AppSettings::getSizeBorder().height),
                      cocos2d::Color4F::RED);
    return drawTop;
}

cocos2d::DrawNode* AppSettings::drawLeft()
{
    auto drawLeft = cocos2d::DrawNode::create();
    drawLeft->drawLine(cocos2d::Point(AppSettings::getSizeBorder().width,
                                      AppSettings::getSizeBorder().height),
                       cocos2d::Point(AppSettings::getSizeBorder().width,
                                      AppSettings::getSizeScreen().height - AppSettings::getSizeBorder().height),
                       cocos2d::Color4F::RED);
    return drawLeft;
}

cocos2d::DrawNode* AppSettings::drawRight()
{
    auto drawRight = cocos2d::DrawNode::create();
    drawRight->drawLine(cocos2d::Point(AppSettings::getSizeScreen().width - AppSettings::getSizeBorder().width,
                                       AppSettings::getSizeBorder().height),
                        cocos2d::Point(AppSettings::getSizeScreen().width - AppSettings::getSizeBorder().width,
                                       AppSettings::getSizeScreen().height - AppSettings::getSizeBorder().height),
                        cocos2d::Color4F::RED);
    
    return drawRight;
}

cocos2d::Size AppSettings::setPoint(POINT point)
{
    cocos2d::Size size;
    cocos2d::Size sizeScreen = cocos2d::Size(getSizeScreen().width - getSizeBorder().width * 2,
                                             getSizeScreen().height - getSizeBorder().height * 2);
    
    switch (point)
    {
        case POINT::ZERO:
            size = cocos2d::Size(0 + getSizeBorder().width,
                                 0 + getSizeBorder().height);
            cocos2d::log("ZERO - width: %f, height: %f", size.width, size.height);
            break;
        
        case POINT::CENTRE:
            size = cocos2d::Size(sizeScreen.width / 2 + getSizeBorder().width / 2,
                                 sizeScreen.height / 2 + getSizeBorder().height / 2);
            cocos2d::log("CENTRE - width: %f, height: %f", size.width, size.height);
            break;
        
        case POINT::CENTRE_LEFT:
            size = cocos2d::Size(0 + getSizeBorder().width,
                                 sizeScreen.height / 2 + getSizeBorder().height / 2);
            cocos2d::log("CENTRE_LEFT - width: %f, height: %f", size.width, size.height);
            break;
        
        case POINT::CENTRE_RIGHT:
            size = cocos2d::Size(sizeScreen.width + getSizeBorder().width,
                                 sizeScreen.height / 2 + +getSizeBorder().height / 2);
            cocos2d::log("CENTRE_RIGHT - width: %f, height: %f", size.width, size.height);
            break;
        
        case POINT::TOP_LEFT:
            size = cocos2d::Size(0 + getSizeBorder().width,
                                 sizeScreen.height + getSizeBorder().height);
            cocos2d::log("TOP_LEFT - width: %f, height: %f", size.width, size.height);
            break;
        
        case POINT::TOP_RIGHT:
            size = cocos2d::Size(sizeScreen.width + getSizeBorder().width,
                                 sizeScreen.height + getSizeBorder().height);
            cocos2d::log("TOP_RIGHT - width: %f, height: %f", size.width, size.height);
            break;
        
        case POINT::TOP_CENTRE:
            size = cocos2d::Size(sizeScreen.width / 2,
                                 sizeScreen.height + getSizeBorder().height);
            cocos2d::log("TOP_CENTRE - width: %f, height: %f", size.width, size.height);
            break;
        
        case POINT::BOTTOM_LEFT:
            size = cocos2d::Size(0 + getSizeBorder().width,
                                 0 + getSizeBorder().height);
            cocos2d::log("BOTTOM_LEFT - width: %f, height: %f", size.width, size.height);
            break;
        
        case POINT::BOTTOM_RIGHT:
            size = cocos2d::Size(sizeScreen.width + getSizeBorder().width,
                                 0 + getSizeBorder().height);
            cocos2d::log("BOTTOM_RIGHT - width: %f, height: %f", size.width, size.height);
            break;
        
        case POINT::BOTTOM_CENTRE:
            size = cocos2d::Size(sizeScreen.width / 2,
                                 0 + getSizeBorder().height);
            cocos2d::log("BOTTOM_CENTRE - width: %f, height: %f", size.width, size.height);
            break;
    }
    
    return size;
}

cocos2d::Vec2 AppSettings::setVec2MenuItem(cocos2d::MenuItem* menuItem, POINT point)
{
    cocos2d::Size size = setPoint(point);
    switch (point)
    {
        case POINT::ZERO:
            cocos2d::log("POINT ZERO");
            return cocos2d::Vec2(size.width + menuItem->getContentSize().width / 2,
                                 size.height + menuItem->getContentSize().height / 2);
        
        case POINT::TOP_LEFT:
            cocos2d::log("POINT TOP_LEFT");
            return cocos2d::Vec2(size.width + menuItem->getContentSize().width / 2,
                                 size.height - menuItem->getContentSize().height / 2);
        
        case POINT::TOP_RIGHT:
            cocos2d::log("POINT TOP_RIGHT");
            return cocos2d::Vec2(size.width - menuItem->getContentSize().width / 2,
                                 size.height - menuItem->getContentSize().height / 2);
        
        case POINT::TOP_CENTRE:
            cocos2d::log("POINT TOP_CENTRE");
            return cocos2d::Vec2(size.width + menuItem->getContentSize().width / 2,
                                 size.height - menuItem->getContentSize().height / 2);
        
        case POINT::BOTTOM_LEFT:
            cocos2d::log("POINT BOTTOM_LEFT");
            return cocos2d::Vec2(size.width + menuItem->getContentSize().width / 2,
                                 size.height + menuItem->getContentSize().height / 2);
        
        case POINT::BOTTOM_RIGHT:
            cocos2d::log("POINT BOTTOM_RIGHT");
            return cocos2d::Vec2(size.width - menuItem->getContentSize().width / 2,
                                 size.height + menuItem->getContentSize().height / 2);
        
        case POINT::BOTTOM_CENTRE:
            cocos2d::log("POINT BOTTOM_CENTRE");
            return cocos2d::Vec2(size.width + menuItem->getContentSize().width / 2,
                                 size.height + menuItem->getContentSize().height / 2);
        
        case POINT::CENTRE_LEFT:
            cocos2d::log("POINT CENTRE_LEFT");
            return cocos2d::Vec2(size.width + menuItem->getContentSize().width / 2,
                                 size.height + menuItem->getContentSize().height / 2);
        
        case POINT::CENTRE_RIGHT:
            cocos2d::log("POINT CENTRE_RIGHT");
            return cocos2d::Vec2(size.width - menuItem->getContentSize().width / 2,
                                 size.height + menuItem->getContentSize().height / 2);
        
        case POINT::CENTRE:
            cocos2d::log("POINT CENTRE");
            return cocos2d::Vec2(size.width + menuItem->getContentSize().height / 2,
                                 size.height + menuItem->getContentSize().height / 2);
    }
}

cocos2d::Menu* AppSettings::createVectorMenu(cocos2d::Vector<cocos2d::MenuItem*> vector)
{
    std::reverse(vector.rbegin(), vector.rend());
    
    int count = 0;
    
    for (auto item : vector)
    {
        cocos2d::Point point = cocos2d::Point(setVec2MenuItem(item, POINT::CENTRE).x,
                                              setVec2MenuItem(item, POINT::BOTTOM_CENTRE).y +
                                               (item->getContentSize().height * count + 1) + (item->getContentSize().height * count / 2 / 2));
        item->setPosition(point);
        
//        cocos2d::log("Button: %s", item->getName().c_str());
//        cocos2d::log("Size: width:%f, height:%f", item->getContentSize().width, item->getContentSize().height);
//        cocos2d::log("Point: x:%f, y:%f", item->getPosition().x, item->getPosition().y);
//        cocos2d::log("Remove: ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        
        ++count;
    }
    
    cocos2d::Menu* menu = cocos2d::Menu::createWithArray(vector);
    menu->setPosition(cocos2d::Vec2::ZERO);
    
    return menu;
}

cocos2d::Menu* AppSettings::createMenu(cocos2d::MenuItem* menuItem)
{
    cocos2d::Vec2 vec2 = menuItem->getPosition();
    cocos2d::Size size = menuItem->getContentSize();
    
//    cocos2d::log("Button: %s", menuItem->getName().c_str());
//    cocos2d::log("getContentSize: width:%f, height:%f", menuItem->getContentSize().width,
//                 menuItem->getContentSize().height);
//    cocos2d::log("getPosition: x:%f, y:%f", menuItem->getPosition().x, menuItem->getPosition().y);
//    cocos2d::log("Remove: ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    
    cocos2d::Menu* menu = cocos2d::Menu::createWithItem(menuItem);
    menu->setPosition(cocos2d::Vec2::ZERO);
    
    return menu;
}

//cocos2d::Vector<UISlider> AppSettings::setVec2T(cocos2d::Vector<UISlider> vector, POINT point)
//{
//    for (int i = 0; i < vector.size() / 2; ++i)
//    {
//
//    }
//
//    return vector;
//}
