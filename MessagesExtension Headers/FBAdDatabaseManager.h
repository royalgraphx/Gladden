/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAdDatabaseManagerDelegate, OS_dispatch_queue;
#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSURL, NSObject, NSOperationQueue, NSString;

@interface FBAdDatabaseManager : NSObject {

	BOOL _initialized;
	id<FBAdDatabaseManagerDelegate> _delegate;
	NSURL* _storagePath;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	NSOperationQueue* _operationQueue;
	sqlite3Ref _database;
	NSString* _databaseFilename;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                            //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> databaseQueue;                   //@synthesize databaseQueue=_databaseQueue - In the implementation block
@property (assign,nonatomic) sqlite3Ref database;                                          //@synthesize database=_database - In the implementation block
@property (assign,getter=isInitialized,nonatomic) BOOL initialized;                        //@synthesize initialized=_initialized - In the implementation block
@property (nonatomic,copy) NSString * databaseFilename;                                    //@synthesize databaseFilename=_databaseFilename - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdDatabaseManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * storagePath;                                            //@synthesize storagePath=_storagePath - In the implementation block
+(id)sharedManager;
-(void)openDatabaseWithCallback:(/*^block*/id)arg1 ;
-(void)openDatabaseWithCallback:(/*^block*/id)arg1 withRetry:(BOOL)arg2 ;
-(void)getDatabase:(/*^block*/id)arg1 ;
-(void)initializeDatabaseWithCompletionCallback:(/*^block*/id)arg1 withDowngradeCallback:(/*^block*/id)arg2 withUpgradeCallback:(/*^block*/id)arg3 ;
-(void)createTableSyncWithDatabase:(sqlite3Ref)arg1 withStatement:(const char*)arg2 withCallback:(/*^block*/id)arg3 ;
-(void)dropTableSyncWithDatabase:(sqlite3Ref)arg1 withTableName:(id)arg2 withCallback:(/*^block*/id)arg3 ;
-(void)queryWithStatementSync:(const char*)arg1 withDatabase:(sqlite3Ref)arg2 withCallback:(/*^block*/id)arg3 ;
-(void)deserializeWithStatementSync:(const char*)arg1 withDatabase:(sqlite3Ref)arg2 withDeserializeCallback:(/*^block*/id)arg3 withCallback:(/*^block*/id)arg4 ;
-(void)insertWithStatementSync:(const char*)arg1 withDatabase:(sqlite3Ref)arg2 withStatementCallback:(/*^block*/id)arg3 withCompletionCallback:(/*^block*/id)arg4 ;
-(void)deleteWithStatementSync:(const char*)arg1 withDatabase:(sqlite3Ref)arg2 withCallback:(/*^block*/id)arg3 ;
-(void)setForeignKeyEnforcementSyncWithDatabase:(sqlite3Ref)arg1 withCallback:(/*^block*/id)arg2 ;
-(int)queryUserVersionSyncWithDatabase:(sqlite3Ref)arg1 ;
-(void)setUserVersionSync:(int)arg1 withDatabase:(sqlite3Ref)arg2 withCallback:(/*^block*/id)arg3 ;
-(id)stringFromChars:(const char*)arg1 ;
-(NSString *)databaseFilename;
-(void)setDatabaseFilename:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id<FBAdDatabaseManagerDelegate>)delegate;
-(void)setDelegate:(id<FBAdDatabaseManagerDelegate>)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setDatabase:(sqlite3Ref)arg1 ;
-(NSObject*<OS_dispatch_queue>)databaseQueue;
-(sqlite3Ref)database;
-(void)setDatabaseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isInitialized;
-(void)setInitialized:(BOOL)arg1 ;
-(NSURL *)storagePath;
-(void)setStoragePath:(NSURL *)arg1 ;
-(int)currentDatabaseVersion;
@end

