/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PlayerIOChannel, NSArray;

@interface PIOGameRequests : NSObject {

	PlayerIOChannel* _channel;
	NSArray* _waitingRequests;

}

@property (readonly) NSArray * waitingRequests;              //@synthesize waitingRequests=_waitingRequests - In the implementation block
-(void)refreshWithSuccessBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)refreshWithSuccessBlock:(/*^block*/id)arg1 ;
-(void)sendWithRequestType:(id)arg1 requestData:(id)arg2 recipients:(id)arg3 successBlock:(/*^block*/id)arg4 errorBlock:(/*^block*/id)arg5 ;
-(BOOL)readList:(id)arg1 moreWaiting:(BOOL)arg2 ;
-(id)convertRequests:(id)arg1 ;
-(void)deleteWithGameRequests:(id)arg1 successBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(NSArray *)waitingRequests;
-(void)sendWithRequestType:(id)arg1 requestData:(id)arg2 recipients:(id)arg3 ;
-(void)sendWithRequestType:(id)arg1 requestData:(id)arg2 recipients:(id)arg3 successBlock:(/*^block*/id)arg4 ;
-(void)deleteWithGameRequests:(id)arg1 ;
-(void)deleteWithGameRequests:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)showSendDialogWithRequestType:(id)arg1 requestData:(id)arg2 closeBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)refresh;
-(id)initWithChannel:(id)arg1 ;
@end

