/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFAssetResourceLoaderDelegate, OS_dispatch_queue;
@class NSObject, NSString, NSSet;

@interface FNFAssetResourceLoader : NSObject {

	id<FNFAssetResourceLoaderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSString* _videoID;
	NSString* _trackerID;
	NSSet* _analyticsTags;

}

@property (nonatomic,__weak,readonly) id<FNFAssetResourceLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoID;                                         //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,copy,readonly) NSString * trackerID;                                       //@synthesize trackerID=_trackerID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * analyticsTags;                                      //@synthesize analyticsTags=_analyticsTags - In the implementation block
-(NSString *)trackerID;
-(void)setDelegate:(id)arg1 queue:(id)arg2 videoID:(id)arg3 trackerID:(id)arg4 analyticsTags:(id)arg5 ;
-(NSSet *)analyticsTags;
-(id<FNFAssetResourceLoaderDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSString *)videoID;
@end

