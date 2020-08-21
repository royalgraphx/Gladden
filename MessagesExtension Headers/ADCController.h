/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ADCWebViewModule, ADCJSCoreModule, ADCModule;

@interface ADCController : NSObject {

	BOOL _loaded;
	int _decryptionRetries;
	NSString* _configFilepath;
	NSString* _controllerDataFilepath;
	ADCWebViewModule* _webViewModule;
	ADCJSCoreModule* _jsCoreModule;

}

@property (assign,nonatomic) BOOL loaded;                                    //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,retain) NSString * configFilepath;                      //@synthesize configFilepath=_configFilepath - In the implementation block
@property (nonatomic,retain) NSString * controllerDataFilepath;              //@synthesize controllerDataFilepath=_controllerDataFilepath - In the implementation block
@property (nonatomic,retain) ADCWebViewModule * webViewModule;               //@synthesize webViewModule=_webViewModule - In the implementation block
@property (nonatomic,retain) ADCJSCoreModule * jsCoreModule;                 //@synthesize jsCoreModule=_jsCoreModule - In the implementation block
@property (assign,nonatomic) int decryptionRetries;                          //@synthesize decryptionRetries=_decryptionRetries - In the implementation block
@property (readonly) BOOL useForcedController; 
@property (readonly) NSString * launchServerURL; 
@property (nonatomic,readonly) ADCModule * module; 
+(id)sharedController;
-(void)evaluateJavascriptString:(id)arg1 ;
-(id)valueEvaluatingJavascriptString:(id)arg1 ;
-(void)setConfigFilepath:(NSString *)arg1 ;
-(BOOL)useForcedController;
-(void)setControllerDataFilepath:(NSString *)arg1 ;
-(NSString *)configFilepath;
-(void)setJsCoreModule:(ADCJSCoreModule *)arg1 ;
-(void)setDecryptionRetries:(int)arg1 ;
-(ADCJSCoreModule *)jsCoreModule;
-(NSString *)controllerDataFilepath;
-(NSString *)launchServerURL;
-(void)createControllerConfigRequest:(/*^block*/id)arg1 ;
-(void)makeControllerConfigRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)decryptionRetries;
-(id)decryptControllerSource:(id)arg1 withConfig:(id)arg2 ;
-(void)loadControllerSourceWithConfig:(id)arg1 sha1Check:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)beginMessagePassingWithControllerSource:(id)arg1 ;
-(void)clearConfig;
-(void)configureDynamicControls:(id)arg1 ;
-(id)checkConfigStatus:(id)arg1 ;
-(void)downloadControllerWithConfig:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)downloadConfigWithCompletion:(/*^block*/id)arg1 ;
-(void)getConfigAndControllerWithCheck:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getConfigAndControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getPIEKey:(id)arg1 ;
-(void)startControllerWithSource:(id)arg1 config:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadConfigWithCompletion:(/*^block*/id)arg1 ;
-(void)getConfigAndControllerWithCheck:(/*^block*/id)arg1 ;
-(void)configureOrientationOverrideWithConfig:(id)arg1 ;
-(void)configureLoggingWithConfig:(id)arg1 ;
-(void)configureBatteryMonitoringWithConfig:(id)arg1 ;
-(void)configureUpdatesRate:(id)arg1 ;
-(BOOL)checkSentinel;
-(ADCWebViewModule *)webViewModule;
-(void)setWebViewModule:(ADCWebViewModule *)arg1 ;
-(id)init;
-(void)update;
-(void)disable;
-(BOOL)loaded;
-(ADCModule *)module;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(BOOL)recover;
@end
