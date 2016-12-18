/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <Messenger/Messenger-Structs.h>
@class NSObject, NSSet, NSDictionary, FBExperimentPersistentStore;

@interface FBExperimentDiskFetcher : NSObject {

	unsigned long long _diskFetchTimeoutInSeconds;
	shared_ptr<std::__1::atomic<bool> >* _abortLoad;
	NSObject*<OS_dispatch_semaphore> _loadExperimentsSemaphore;
	BOOL _experimentsLoadedSuccessfuly;
	NSSet* _experiments;
	NSObject*<OS_dispatch_semaphore> _loadExperimentOverridesSemaphore;
	BOOL _experimentOverridesLoadedSuccessfuly;
	NSDictionary* _experimentOverrides;
	FBExperimentPersistentStore* _persistentStore;

}

@property (nonatomic,readonly) FBExperimentPersistentStore * persistentStore;              //@synthesize persistentStore=_persistentStore - In the implementation block
-(void)_waitUntilExperimentsAndExperimentOverridesAreLoaded;
-(id)initWithPersistentStore:(id)arg1 diskFetchTimeoutInSeconds:(unsigned long long)arg2 ;
-(id)experiments;
-(id)experimentOverrides;
-(FBExperimentPersistentStore *)persistentStore;
@end

