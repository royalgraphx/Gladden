#import <SpriteKit/SpriteKit.h>
#import <SpriteKit/SKView.h>

%hook GameViewController
-(BOOL)clearsContextBeforeDrawing {
     return false;
}
-(BOOL)showsFPS {
     return true;
}
-(BOOL)showsDrawCount {
     return false;
}
-(BOOL)showsNodeCount {
     return false;
}
%end

%ctor {
    %init(GameViewController = objc_getClass("GameViewController.ViewController"));
}
