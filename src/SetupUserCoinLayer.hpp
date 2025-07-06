#ifndef __SETUP_USER_COIN_LAYER_HPP__
#define __SETUP_USER_COIN_LAYER_HPP__

#include <Geode/Geode.hpp>

namespace spawn_trigger_coins {

class SetupUserCoinLayer : public SetupTriggerPopup {
public:
    static SetupUserCoinLayer* create(EffectGameObject* coin, cocos2d::CCArray* coinsArray);
protected:
    bool init(EffectGameObject* coin, cocos2d::CCArray* coinsArray);
};

}


#endif /* __SETUP_USER_COIN_LAYER_HPP__ */
