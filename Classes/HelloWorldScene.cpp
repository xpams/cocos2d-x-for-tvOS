#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}


bool HelloWorld::init()
{
    
    if ( !LayerColor::initWithColor(Color4B::WHITE) )
    {
        return false;
        
        
    }
    
    auto s = cocos2d::Sprite::create("HelloWorld.png");
    s->setScale(3);
    this->addChild(s);
    
    
    return true;

    
}