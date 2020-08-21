/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OMIDInmobiVASTProperties : NSObject {

	BOOL _skippable;
	BOOL _autoPlay;
	double _skipOffset;
	unsigned long long _position;

}

@property (getter=isSkippable,nonatomic,readonly) BOOL skippable;              //@synthesize skippable=_skippable - In the implementation block
@property (nonatomic,readonly) double skipOffset;                              //@synthesize skipOffset=_skipOffset - In the implementation block
@property (getter=isAutoPlay,nonatomic,readonly) BOOL autoPlay;                //@synthesize autoPlay=_autoPlay - In the implementation block
@property (nonatomic,readonly) unsigned long long position;                    //@synthesize position=_position - In the implementation block
-(id)initWithSkipOffset:(double)arg1 autoPlay:(BOOL)arg2 position:(unsigned long long)arg3 ;
-(id)initWithAutoPlay:(BOOL)arg1 position:(unsigned long long)arg2 ;
-(id)toJSON;
-(id)initWithSkippable:(BOOL)arg1 skipOffset:(double)arg2 autoPlay:(BOOL)arg3 position:(unsigned long long)arg4 ;
-(id)positionString;
-(double)skipOffset;
-(unsigned long long)position;
-(BOOL)isSkippable;
-(BOOL)isAutoPlay;
@end

