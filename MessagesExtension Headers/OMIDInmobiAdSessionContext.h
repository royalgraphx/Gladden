/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, NSArray, NSString, OMIDInmobiPartner;

@interface OMIDInmobiAdSessionContext : NSObject {

	unsigned long long _type;
	UIView* _webView;
	NSArray* _resources;
	NSString* _script;
	OMIDInmobiPartner* _partner;
	NSString* _identifier;

}

@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) UIView * webView;                         //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) NSArray * resources;                      //@synthesize resources=_resources - In the implementation block
@property (nonatomic,readonly) NSString * script;                        //@synthesize script=_script - In the implementation block
@property (nonatomic,readonly) OMIDInmobiPartner * partner;              //@synthesize partner=_partner - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
-(OMIDInmobiPartner *)partner;
-(id)initWithPartner:(id)arg1 webView:(id)arg2 customReferenceIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)initWithPartner:(id)arg1 script:(id)arg2 resources:(id)arg3 customReferenceIdentifier:(id)arg4 error:(id*)arg5 ;
-(id)toJSON;
-(id)resourcesJSON;
-(unsigned long long)type;
-(NSString *)identifier;
-(id)typeString;
-(UIView *)webView;
-(NSString *)script;
-(NSArray *)resources;
@end
