/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPLogEvent : NSObject {

	NSString* _message;
	unsigned long long _logLevel;

}

@property (nonatomic,copy,readonly) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) unsigned long long logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
+(id)eventWithMessage:(id)arg1 level:(unsigned long long)arg2 ;
+(id)adRequestedWithRequest:(id)arg1 ;
+(id)adRequestReceivedResponse:(id)arg1 ;
+(id)adLoadAttemptForAdapter:(id)arg1 dspCreativeId:(id)arg2 dspName:(id)arg3 ;
+(id)adLoadFailedForAdapter:(id)arg1 error:(id)arg2 ;
+(id)adLoadSuccessForAdapter:(id)arg1 ;
+(id)adWillLeaveApplicationForAdapter:(id)arg1 ;
+(id)adWillPresentModalForAdapter:(id)arg1 ;
+(id)adDidDismissModalForAdapter:(id)arg1 ;
+(id)adTappedForAdapter:(id)arg1 ;
+(id)adWillAppearForAdapter:(id)arg1 ;
+(id)adShowAttemptForAdapter:(id)arg1 ;
+(id)adShowSuccessForAdapter:(id)arg1 ;
+(id)adDidAppearForAdapter:(id)arg1 ;
+(id)adWillDisappearForAdapter:(id)arg1 ;
+(id)adDidDisappearForAdapter:(id)arg1 ;
+(id)adShowFailedForAdapter:(id)arg1 error:(id)arg2 ;
+(id)adLoadAttempt;
+(id)adShowAttempt;
+(id)adShowSuccess;
+(id)adShowFailedWithError:(id)arg1 ;
+(id)adDidLoad;
+(id)adFailedToLoadWithError:(id)arg1 ;
+(id)adExpiredWithTimeInterval:(double)arg1 ;
+(id)adWillPresentModal;
+(id)adDidDismissModal;
+(id)adTapped;
+(id)adWillAppear;
+(id)adDidAppear;
+(id)adWillDisappear;
+(id)adDidDisappear;
+(id)adShouldRewardUserWithReward:(id)arg1 ;
+(id)adWillLeaveApplication;
+(id)sdkInitializedWithNetworks:(id)arg1 ;
+(id)consentSyncAttempted;
+(id)consentSyncCompletedWithMessage:(id)arg1 ;
+(id)consentSyncFailedWithError:(id)arg1 ;
+(id)consentUpdatedTo:(long long)arg1 from:(long long)arg2 reason:(id)arg3 canCollectPersonalInfo:(BOOL)arg4 ;
+(id)consentShouldShowDialog;
+(id)consentDialogLoadAttempted;
+(id)consentDialogLoadSuccess;
+(id)consentDialogLoadFailedWithError:(id)arg1 ;
+(id)consentDialogShowAttempted;
+(id)consentDialogShowSuccess;
+(id)consentDialogShowFailedWithError:(id)arg1 ;
+(id)javascriptConsoleLogWithMessage:(id)arg1 ;
+(id)error:(id)arg1 message:(id)arg2 ;
-(id)initWithMessage:(id)arg1 level:(unsigned long long)arg2 ;
-(NSString *)message;
-(id)initWithMessage:(id)arg1 ;
-(unsigned long long)logLevel;
@end

