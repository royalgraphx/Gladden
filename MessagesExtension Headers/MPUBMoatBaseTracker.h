/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CALayer;

@interface MPUBMoatBaseTracker : NSObject {

	BOOL _isActive;
	BOOL _isNativeDisplay;
	BOOL _isNativeVideo;
	NSString* _name;
	CALayer* _trackedLayer;

}

@property (retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (__weak) CALayer * trackedLayer;              //@synthesize trackedLayer=_trackedLayer - In the implementation block
@property (assign) BOOL isActive;                       //@synthesize isActive=_isActive - In the implementation block
@property (assign) BOOL isNativeDisplay;                //@synthesize isNativeDisplay=_isNativeDisplay - In the implementation block
@property (assign) BOOL isNativeVideo;                  //@synthesize isNativeVideo=_isNativeVideo - In the implementation block
-(CALayer *)trackedLayer;
-(id)getViewableState;
-(BOOL)isNativeVideo;
-(void)setIsNativeVideo:(BOOL)arg1 ;
-(void)setIsNativeDisplay:(BOOL)arg1 ;
-(void)setTrackedLayer:(CALayer *)arg1 ;
-(BOOL)isNativeDisplay;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isActive;
-(void)setIsActive:(BOOL)arg1 ;
-(void)stopTracking;
-(void)startTracking;
@end

