#import <SpriteKit/SpriteKit.h>
#import <SpriteKit/SKView.h>

%hook PoolBall
-(BOOL)isBlack {
     return true;
}
%end

%ctor {
    %init(PoolBall = objc_getClass("PoolBall"));
}
