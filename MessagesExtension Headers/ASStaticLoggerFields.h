/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ASStaticLoggerFields : NSObject {

	NSString* _os;
	NSString* _osv;
	NSString* _adid;
	NSString* _bundleid;
	NSString* _sid;
	NSString* _appId;
	NSString* _sdkv;
	NSString* _ua;

}

@property (nonatomic,retain) NSString * os;                    //@synthesize os=_os - In the implementation block
@property (nonatomic,retain) NSString * osv;                   //@synthesize osv=_osv - In the implementation block
@property (nonatomic,retain) NSString * adid;                  //@synthesize adid=_adid - In the implementation block
@property (nonatomic,retain) NSString * bundleid;              //@synthesize bundleid=_bundleid - In the implementation block
@property (nonatomic,retain) NSString * sid;                   //@synthesize sid=_sid - In the implementation block
@property (nonatomic,retain) NSString * appId;                 //@synthesize appId=_appId - In the implementation block
@property (nonatomic,retain) NSString * sdkv;                  //@synthesize sdkv=_sdkv - In the implementation block
@property (nonatomic,retain) NSString * ua;                    //@synthesize ua=_ua - In the implementation block
+(BOOL)areStaticFieldsDefined;
+(void)generateSessionId;
+(id)fields;
+(void)setUserAgent:(id)arg1 ;
+(void)setAppId:(id)arg1 ;
-(NSString *)ua;
-(void)setOsv:(NSString *)arg1 ;
-(void)setAdid:(NSString *)arg1 ;
-(void)setSdkv:(NSString *)arg1 ;
-(void)setUa:(NSString *)arg1 ;
-(NSString *)osv;
-(NSString *)adid;
-(NSString *)sdkv;
-(void)dealloc;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(void)setOs:(NSString *)arg1 ;
-(NSString *)os;
-(void)setBundleid:(NSString *)arg1 ;
-(NSString *)bundleid;
-(NSString *)sid;
-(void)setSid:(NSString *)arg1 ;
@end

