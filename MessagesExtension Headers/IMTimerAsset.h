/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMAsset.h>

@class IMUITimerProperties, NSString, NSDictionary;

@interface IMTimerAsset : IMAsset {

	BOOL _displayTimer;
	IMUITimerProperties* properties;
	NSString* _timerAction;
	double _timerStartOffset;
	double _timerDuration;
	NSDictionary* _startOffsetDictionary;
	NSDictionary* _durationDictionary;

}

@property (assign,nonatomic) BOOL displayTimer;                                 //@synthesize displayTimer=_displayTimer - In the implementation block
@property (nonatomic,retain) NSString * timerAction;                            //@synthesize timerAction=_timerAction - In the implementation block
@property (assign,nonatomic) double timerStartOffset;                           //@synthesize timerStartOffset=_timerStartOffset - In the implementation block
@property (assign,nonatomic) double timerDuration;                              //@synthesize timerDuration=_timerDuration - In the implementation block
@property (nonatomic,retain) NSDictionary * startOffsetDictionary;              //@synthesize startOffsetDictionary=_startOffsetDictionary - In the implementation block
@property (nonatomic,retain) NSDictionary * durationDictionary;                 //@synthesize durationDictionary=_durationDictionary - In the implementation block
@property (nonatomic,retain) IMUITimerProperties * properties; 
-(id)initWithJson:(id)arg1 withStyles:(id)arg2 atJPath:(id)arg3 forAccountID:(id)arg4 ;
-(id)createViewWithProperties:(id)arg1 ;
-(void)updatePropertiesOnView;
-(void)recycleView;
-(void)generateProperties:(id)arg1 fromJson:(id)arg2 ;
-(void)fetchAssetResources;
-(id)buildAssetViewWithScale:(double)arg1 ;
-(id)propertiesFromJson:(id)arg1 ;
-(void)setStartOffsetDictionary:(NSDictionary *)arg1 ;
-(void)setDurationDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)startOffsetDictionary;
-(double)timeFromDictionary:(id)arg1 withDefaultValue:(double)arg2 ;
-(void)setTimerStartOffset:(double)arg1 ;
-(double)timerStartOffset;
-(void)timerExpired:(id)arg1 ;
-(void)resetAssetAndRebuild:(BOOL)arg1 ;
-(IMUITimerProperties *)properties;
-(void)setProperties:(IMUITimerProperties *)arg1 ;
-(NSString *)timerAction;
-(void)setTimerAction:(NSString *)arg1 ;
-(double)timerDuration;
-(void)setTimerDuration:(double)arg1 ;
-(NSDictionary *)durationDictionary;
-(BOOL)displayTimer;
-(void)setDisplayTimer:(BOOL)arg1 ;
@end

