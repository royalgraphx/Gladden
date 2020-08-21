/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMJSONModel.h>

@class IMIceWIFIConfig, IMIceCellularOperatorConfig;

@interface IMSignalIceConfig : IMJSONModel {

	BOOL _locationEnabled;
	BOOL _sessionEnabled;
	IMIceWIFIConfig* _w;
	IMIceCellularOperatorConfig* _c;
	long long _stopRequestTimeout;

}

@property (assign,nonatomic) BOOL locationEnabled;                           //@synthesize locationEnabled=_locationEnabled - In the implementation block
@property (assign,nonatomic) BOOL sessionEnabled;                            //@synthesize sessionEnabled=_sessionEnabled - In the implementation block
@property (w,nonatomic,retain) IMIceWIFIConfig * w;                          //@synthesize w=_w - In the implementation block
@property (c,nonatomic,retain) IMIceCellularOperatorConfig * c;              //@synthesize c=_c - In the implementation block
@property (assign,nonatomic) long long stopRequestTimeout;                   //@synthesize stopRequestTimeout=_stopRequestTimeout - In the implementation block
-(long long)stopRequestTimeout;
-(BOOL)sessionEnabled;
-(BOOL)operatorInfoCollectionEnabled;
-(void)setSessionEnabled:(BOOL)arg1 ;
-(void)setStopRequestTimeout:(long long)arg1 ;
-(id)init;
-(IMIceCellularOperatorConfig *)c;
-(void)setC:(IMIceCellularOperatorConfig *)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(void)setW:(IMIceWIFIConfig *)arg1 ;
-(IMIceWIFIConfig *)w;
-(BOOL)locationEnabled;
-(void)setLocationEnabled:(BOOL)arg1 ;
@end
