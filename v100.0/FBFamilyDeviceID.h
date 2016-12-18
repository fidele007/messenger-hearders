/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, FBFamilyDeviceIDReportInternal, NSUserDefaults;

@interface FBFamilyDeviceID : NSObject {

	NSString* _familyDeviceID;
	BOOL _useFamilyDeviceID;
	NSObject*<OS_dispatch_queue> _serialQueue;
	FBFamilyDeviceIDReportInternal* _reporter;
	NSString* _appDeviceID;
	BOOL _hasAccessedSharedStorage;
	BOOL _canRegenByServer;
	NSUserDefaults* _testGroupUserDefaults;

}

@property (nonatomic,copy,readonly) NSUserDefaults * testGroupUserDefaults;              //@synthesize testGroupUserDefaults=_testGroupUserDefaults - In the implementation block
+(id)sharedInstance;
-(id)familyDeviceID;
-(void)logFamilyDeviceIDStatusWithBlock:(/*^block*/id)arg1 ;
-(void)regenerateFDIDUponServerResponse:(id)arg1 analyticsLogBlock:(/*^block*/id)arg2 ;
-(void)setupWithAppDeviceIDWithCompletionBlock:(/*^block*/id)arg1 onQueue:(id)arg2 appDeviceID:(id)arg3 ;
-(id)initCustomized;
-(BOOL)_hasRegenFieldInResponse:(id)arg1 ;
-(void)_doRegenByServerResponseWithLogBlock:(/*^block*/id)arg1 ;
-(void)_doAccessFamilyDeviceID:(id)arg1 ;
-(BOOL)_isRestoredOntoDifferentDevice:(id)arg1 realAppDeviceID:(id)arg2 ;
-(id)setupWithAppDeviceID:(id)arg1 ;
-(id)initWithGroupUserDefaults:(id)arg1 ;
-(id)initToGetUniqueInstance;
-(BOOL)isValidUUID:(id)arg1 ;
-(void)testDoRegenFDIDUponServerResponse:(id)arg1 analyticsLogBlock:(/*^block*/id)arg2 ;
-(void)useFamilyDeviceIDFromNextSetup:(BOOL)arg1 ;
-(BOOL)canUseFamilyDeviceID;
-(void)mayRegenerateByServerResponse:(BOOL)arg1 ;
-(BOOL)canRegenByServerResponse;
-(void)getFamilyDeviceIDWithCompletionBlock:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(NSUserDefaults *)testGroupUserDefaults;
-(id)internalQueue;
@end

