/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <FBSharedFramework/MNServiceControllable.h>

@protocol OS_dispatch_queue;
@class MNStateRestoreServiceInjector, NSObject, NSError, NSString;

@interface MNStateRestoreService : NSObject <FBClassInjectable, MNServiceControllable> {

	MNStateRestoreServiceInjector* _injector;
	NSObject*<OS_dispatch_queue> _storeOpeningQueue;
	NSError* _openStoresError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSError * openStoresError;                       //@synthesize openStoresError=_openStoresError - In the implementation block
+(Class)injectorClass;
-(NSError *)openStoresError;
-(void)setOpenStoresError:(NSError *)arg1 ;
-(void)_openStoresAndRestoreState:(long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_restoreStateInStore:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_openStores:(/*^block*/id)arg1 ;
-(void)handleIdle;
-(id)initWithInjector:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
@end

