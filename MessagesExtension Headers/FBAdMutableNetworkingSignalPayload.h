/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/FBAdNetworkingSignalPayload.h>

@class NSDate, NSError, NSString;

@interface FBAdMutableNetworkingSignalPayload : FBAdNetworkingSignalPayload

@property (nonatomic,retain) NSDate * startTime; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) long long httpStatusCode; 
@property (assign,nonatomic) unsigned long long payloadSize; 
@property (assign,nonatomic) unsigned long long uploadSize; 
@property (nonatomic,retain) NSError * error; 
@property (assign,nonatomic) double downloadBandwidthEstimate; 
@property (assign,nonatomic) double uploadBandwidthEstimate; 
@property (nonatomic,copy) NSString * downloadBandwidthState; 
@property (nonatomic,copy) NSString * uploadBandwidthState; 
-(void)setDownloadBandwidthEstimate:(double)arg1 ;
-(void)setDownloadBandwidthState:(NSString *)arg1 ;
-(void)setUploadBandwidthEstimate:(double)arg1 ;
-(void)setUploadBandwidthState:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setUploadSize:(unsigned long long)arg1 ;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(void)setHttpStatusCode:(long long)arg1 ;
@end

