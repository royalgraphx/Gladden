/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ADCGCDWebServerHandler : NSObject {

	/*^block*/id _matchBlock;
	/*^block*/id _asyncProcessBlock;

}

@property (nonatomic,readonly) id matchBlock;                     //@synthesize matchBlock=_matchBlock - In the implementation block
@property (nonatomic,readonly) id asyncProcessBlock;              //@synthesize asyncProcessBlock=_asyncProcessBlock - In the implementation block
-(id)initWithMatchBlock:(/*^block*/id)arg1 asyncProcessBlock:(/*^block*/id)arg2 ;
-(id)asyncProcessBlock;
-(id)matchBlock;
@end
