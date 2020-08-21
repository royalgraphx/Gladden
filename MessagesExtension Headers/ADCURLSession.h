/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSURLSession, NSString;

@interface ADCURLSession : NSObject <NSURLSessionTaskDelegate> {

	NSURLSession* _urlSession;

}

@property (nonatomic,retain) NSURLSession * urlSession;              //@synthesize urlSession=_urlSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSession;
-(void)download:(id)arg1 withSoftStatusCheck:(BOOL)arg2 intoDestination:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)request:(id)arg1 withSoftStatusCheck:(BOOL)arg2 followingRedirects:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)softStatusCheck:(long long)arg1 ;
-(BOOL)strictStatusCheck:(long long)arg1 ;
-(BOOL)validateResponse:(id)arg1 withRequest:(id)arg2 softStatusCheck:(BOOL)arg3 error:(id)arg4 ;
-(id)init;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSURLSession *)urlSession;
-(void)setUrlSession:(NSURLSession *)arg1 ;
@end

