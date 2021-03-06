/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBNetworkerRequestDelegate.h>
#import <Messenger/FBLoomManager.h>

@protocol FBLoomConfigurationStorageDelegate, FBLoomNetworkingSource;
@class FBLoomConfiguration, NSMutableSet, FBSimpleNetworkerRequest, NSDate, NSString;

@interface FBLoomConfigurationManager : NSObject <FBNetworkerRequestDelegate, FBLoomManager> {

	mutex _mutex;
	FBLoomConfiguration* _configuration;
	NSMutableSet* _configurables;
	FBSimpleNetworkerRequest* _simpleRequest;
	id<FBLoomConfigurationStorageDelegate> _storageDelegate;
	id<FBLoomNetworkingSource> _source;

}

@property (retain) NSDate * lastConfigurationFetch; 
@property (retain) FBLoomConfiguration * internalConfiguration; 
@property (__weak) id<FBLoomConfigurationStorageDelegate> storageDelegate;              //@synthesize storageDelegate=_storageDelegate - In the implementation block
@property (__weak) id<FBLoomNetworkingSource> source;                                   //@synthesize source=_source - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInternalConfiguration:(FBLoomConfiguration *)arg1 ;
-(FBLoomConfiguration *)internalConfiguration;
-(id<FBLoomConfigurationStorageDelegate>)storageDelegate;
-(BOOL)fetchUpdateFromNetwork;
-(NSDate *)lastConfigurationFetch;
-(void)setLastConfigurationFetch:(NSDate *)arg1 ;
-(void)saveInternalConfigurationToDisk;
-(void)removeConfigurable:(id)arg1 ;
-(id)configurables;
-(void)setStorageDelegate:(id<FBLoomConfigurationStorageDelegate>)arg1 ;
-(void)fetchUpdateFromNetworkAfterDelay;
-(void)addConfigurable:(id)arg1 ;
-(void)addConfigurables:(id)arg1 ;
-(BOOL)fetchUpdateFromDisk;
-(void)eraseAllConfigurationData;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2 ;
-(id)init;
-(void)setSource:(id<FBLoomNetworkingSource>)arg1 ;
-(id<FBLoomNetworkingSource>)source;
@end

