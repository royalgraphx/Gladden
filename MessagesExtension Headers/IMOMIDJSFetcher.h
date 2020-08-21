/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMNetworkDelegate.h>

@class IMNetworkServiceProvider, NSString;

@interface IMOMIDJSFetcher : NSObject <IMNetworkDelegate> {

	BOOL _requestInProgress;
	IMNetworkServiceProvider* _nsp;

}

@property (nonatomic,retain) IMNetworkServiceProvider * nsp;              //@synthesize nsp=_nsp - In the implementation block
@property (assign,nonatomic) BOOL requestInProgress;                      //@synthesize requestInProgress=_requestInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(IMNetworkServiceProvider *)nsp;
-(void)setNsp:(IMNetworkServiceProvider *)arg1 ;
-(void)networkServiceProvider:(id)arg1 request:(id)arg2 didGetResponse:(id)arg3 ;
-(id)getOMIDJSContent;
-(BOOL)isOMIDJSContentExpired:(id)arg1 ;
-(void)fetchOMIDJSContent:(id)arg1 ;
-(void)makeNetworkRequestforOMIDJS:(id)arg1 ;
-(id)getOMJSModelFromDAO;
-(void)storeOMJSModelToDAO:(id)arg1 ;
-(void)deleteOMJSModelFromDAO;
-(BOOL)requestInProgress;
-(void)setRequestInProgress:(BOOL)arg1 ;
@end

