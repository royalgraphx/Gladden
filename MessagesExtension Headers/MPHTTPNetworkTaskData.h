/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData;

@interface MPHTTPNetworkTaskData : NSObject {

	NSMutableData* _responseData;
	/*^block*/id _responseHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _shouldRedirectWithNewRequest;

}

@property (nonatomic,retain) NSMutableData * responseData;               //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,copy) id responseHandler;                           //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                              //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id shouldRedirectWithNewRequest;              //@synthesize shouldRedirectWithNewRequest=_shouldRedirectWithNewRequest - In the implementation block
-(id)initWithResponseHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 shouldRedirectWithNewRequest:(/*^block*/id)arg3 ;
-(id)shouldRedirectWithNewRequest;
-(void)setShouldRedirectWithNewRequest:(id)arg1 ;
-(id)init;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
@end

