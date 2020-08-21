/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ADCWebServicesAPI : NSObject
+(void)postWithDict:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)setupWebViewAsMobile:(id)arg1 ;
+(unsigned long long)maxSizeFromDict:(id)arg1 ;
+(void)withUserAgent:(/*^block*/id)arg1 ;
+(void)createRequestWithUrl:(id)arg1 wifiOnly:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)requestErrorWithDict:(id)arg1 message:(id)arg2 fatal:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)checkMaxSizeWithDownloadedBytes:(unsigned long long)arg1 andDict:(id)arg2 ;
+(void)createRequestWithDict:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)handleDataResponse:(id)arg1 request:(id)arg2 success:(BOOL)arg3 data:(id)arg4 dict:(id)arg5 messageId:(id)arg6 errorHandler:(/*^block*/id)arg7 completionHandler:(/*^block*/id)arg8 ;
+(void)dataRequestWithDict:(id)arg1 completion:(/*^block*/id)arg2 requestHandler:(/*^block*/id)arg3 ;
+(void)downloadWithDict:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)getWithDict:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
