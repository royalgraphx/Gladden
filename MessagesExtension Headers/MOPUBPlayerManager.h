/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MOPUBPlayerViewController;

@interface MOPUBPlayerManager : NSObject {

	MOPUBPlayerViewController* _currentPlayerViewController;

}

@property (nonatomic,retain) MOPUBPlayerViewController * currentPlayerViewController;              //@synthesize currentPlayerViewController=_currentPlayerViewController - In the implementation block
+(id)sharedInstance;
-(void)disposePlayerViewController;
-(id)playerViewControllerWithVideoConfig:(id)arg1 nativeVideoAdConfig:(id)arg2 ;
-(MOPUBPlayerViewController *)currentPlayerViewController;
-(void)setCurrentPlayerViewController:(MOPUBPlayerViewController *)arg1 ;
@end

