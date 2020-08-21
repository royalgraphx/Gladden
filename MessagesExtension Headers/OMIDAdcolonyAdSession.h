/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OMIDAdcolonyAdSessionDelegate;
@class NSMutableArray, UIView, OMIDAdcolonyAdSessionContext, OMIDAdcolonyAdSessionConfiguration, NSString, OMIDAdcolonyEventFilter, OMIDAdcolonyBridge, OMIDAdcolonyAdSessionStatePublisher, NSArray;

@interface OMIDAdcolonyAdSession : NSObject {

	NSMutableArray* _friendlyObstructions;
	UIView* _mainAdView;
	OMIDAdcolonyAdSessionContext* _context;
	BOOL _lastPublishedViewStateWasPopulated;
	OMIDAdcolonyAdSessionConfiguration* _configuration;
	NSString* _identifier;
	OMIDAdcolonyEventFilter* _eventFilter;
	OMIDAdcolonyBridge* _bridge;
	OMIDAdcolonyAdSessionStatePublisher* _statePublisher;
	id<OMIDAdcolonyAdSessionDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * friendlyObstructions; 
@property (nonatomic,readonly) OMIDAdcolonyEventFilter * eventFilter;                                  //@synthesize eventFilter=_eventFilter - In the implementation block
@property (nonatomic,readonly) id<OMIDAdcolonyAdEventsPublisher> adEventsPublisher; 
@property (nonatomic,readonly) id<OMIDAdcolonyMediaEventsPublisher> mediaEventsPublisher; 
@property (nonatomic,readonly) OMIDAdcolonyBridge * bridge;                                            //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) OMIDAdcolonyAdSessionStatePublisher * statePublisher;                   //@synthesize statePublisher=_statePublisher - In the implementation block
@property (assign,nonatomic,__weak) id<OMIDAdcolonyAdSessionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL lastPublishedViewStateWasPopulated;                                  //@synthesize lastPublishedViewStateWasPopulated=_lastPublishedViewStateWasPopulated - In the implementation block
@property (nonatomic,readonly) OMIDAdcolonyAdSessionConfiguration * configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) UIView * mainAdView; 
-(double)deviceVolume;
-(void)addFriendlyObstruction:(id)arg1 ;
-(void)setMainAdView:(UIView *)arg1 ;
-(void)logErrorWithType:(unsigned long long)arg1 message:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 adSessionContext:(id)arg2 error:(id*)arg3 ;
-(void)addToRegistry;
-(void)internal_setMainAdView:(id)arg1 ;
-(void)setDeviceVolume;
-(NSArray *)friendlyObstructions;
-(void)internal_removeFriendlyObstruction:(id)arg1 ;
-(void)internal_removeAllFriendlyObstructions;
-(id<OMIDAdcolonyAdEventsPublisher>)adEventsPublisher;
-(UIView *)mainAdView;
-(void)removeFriendlyObstruction:(id)arg1 ;
-(void)removeAllFriendlyObstructions;
-(OMIDAdcolonyAdSessionStatePublisher *)statePublisher;
-(BOOL)lastPublishedViewStateWasPopulated;
-(void)setLastPublishedViewStateWasPopulated:(BOOL)arg1 ;
-(BOOL)addFriendlyObstruction:(id)arg1 purpose:(unsigned long long)arg2 detailedReason:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)friendlyObstructionIndexForView:(id)arg1 ;
-(void)internal_addFriendlyObstruction:(id)arg1 purpose:(unsigned long long)arg2 detailedReason:(id)arg3 ;
-(id<OMIDAdcolonyMediaEventsPublisher>)mediaEventsPublisher;
-(id<OMIDAdcolonyAdSessionDelegate>)delegate;
-(void)setDelegate:(id<OMIDAdcolonyAdSessionDelegate>)arg1 ;
-(NSString *)identifier;
-(void)start;
-(void)finish;
-(OMIDAdcolonyAdSessionConfiguration *)configuration;
-(OMIDAdcolonyBridge *)bridge;
-(void)onStart;
-(OMIDAdcolonyEventFilter *)eventFilter;
-(void)onFinish;
@end

