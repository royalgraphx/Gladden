/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMNetworkDelegate.h>

@protocol IMAdNetworkIntefaceDelegate;
@class IMAdRequestParams, IMNetworkServiceProvider, NSString, IMRequest, IMResponse, IMCoreAdSettings;

@interface IMAdNetworkInterface : NSObject <IMNetworkDelegate> {

	id<IMAdNetworkIntefaceDelegate> _delegate;
	IMAdRequestParams* _params;
	IMNetworkServiceProvider* _nsp;
	NSString* _clientID;
	IMRequest* _request;
	IMResponse* _response;
	IMCoreAdSettings* _adSettings;
	double _loadStartTS;
	double _loadEndTS;

}

@property (nonatomic,retain) IMNetworkServiceProvider * nsp;                               //@synthesize nsp=_nsp - In the implementation block
@property (nonatomic,retain) NSString * clientID;                                          //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) IMRequest * request;                                          //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) IMResponse * response;                                        //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) IMCoreAdSettings * adSettings;                                //@synthesize adSettings=_adSettings - In the implementation block
@property (assign,nonatomic) double loadStartTS;                                           //@synthesize loadStartTS=_loadStartTS - In the implementation block
@property (assign,nonatomic) double loadEndTS;                                             //@synthesize loadEndTS=_loadEndTS - In the implementation block
@property (assign,nonatomic,__weak) id<IMAdNetworkIntefaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IMAdRequestParams * params;                                   //@synthesize params=_params - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IMNetworkServiceProvider *)nsp;
-(void)setNsp:(IMNetworkServiceProvider *)arg1 ;
-(void)networkServiceProvider:(id)arg1 request:(id)arg2 didGetResponse:(id)arg3 ;
-(IMCoreAdSettings *)adSettings;
-(void)setAdSettings:(IMCoreAdSettings *)arg1 ;
-(void)getAdFormNetwork:(id)arg1 withRequestID:(id)arg2 ;
-(void)setLoadStartTS:(double)arg1 ;
-(double)loadStartTS;
-(id)createAdNetworkRequest:(id)arg1 ;
-(void)setLoadEndTS:(double)arg1 ;
-(void)processValidNetworkResponse:(id)arg1 request:(id)arg2 ;
-(void)processEmptyNetworkResponseBody:(id)arg1 ;
-(void)processNetworkResponseError:(id)arg1 ;
-(id)genericTelemetryPayloadForServerEvents;
-(void)sendFailureCallbackWithErrorCode:(int)arg1 andDescription:(id)arg2 ;
-(void)updateDecryptedBidInResponse:(id)arg1 usingRequest:(id)arg2 ;
-(void)sendSuccessCallback:(id)arg1 ;
-(int)convertToAdsErrorFromNetworkResponse:(id)arg1 ;
-(id)getDecryptedBidInfoFromEncryptedString:(id)arg1 andRequest:(id)arg2 ;
-(id)getDecryptedStringFromEncryptedData:(id)arg1 usingiV:(id)arg2 andAESKey:(id)arg3 ;
-(double)loadEndTS;
-(id)init;
-(id<IMAdNetworkIntefaceDelegate>)delegate;
-(void)setDelegate:(id<IMAdNetworkIntefaceDelegate>)arg1 ;
-(void)setRequest:(IMRequest *)arg1 ;
-(IMRequest *)request;
-(IMResponse *)response;
-(void)setResponse:(IMResponse *)arg1 ;
-(IMAdRequestParams *)params;
-(void)setParams:(IMAdRequestParams *)arg1 ;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
@end
