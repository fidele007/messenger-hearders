/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNBadgeCountChangedListening.h>
#import <Messenger/MNServiceControllable.h>

@class MNInboxTabBadgeCountServiceUpdateListeningAnnouncer, MNInboxTabBadgeCountServiceInjector, MNPendingRequestsBadgeCounter, MNSyncedInboxBadgeCounter, NSString;

@interface MNInboxTabBadgeCountService : NSObject <FBClassInjectable, MNBadgeCountChangedListening, MNServiceControllable> {

	MNInboxTabBadgeCountServiceUpdateListeningAnnouncer* _announcer;
	MNInboxTabBadgeCountServiceInjector* _injector;
	MNPendingRequestsBadgeCounter* _pendingRequestsBadgeCounter;
	MNSyncedInboxBadgeCounter* _syncedInboxBadgeCounter;
	unsigned long long _cachedBadgeCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long cachedBadgeCount;                                          //@synthesize cachedBadgeCount=_cachedBadgeCount - In the implementation block
@property (nonatomic,readonly) MNSyncedInboxBadgeCounter * syncedInboxBadgeCounter;              //@synthesize syncedInboxBadgeCounter=_syncedInboxBadgeCounter - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(unsigned long long)cachedBadgeCount;
-(void)_updateCachedCountIfNecessary;
-(void)setCachedBadgeCount:(unsigned long long)arg1 ;
-(void)didUpdateBadgeSourceStates:(id)arg1 ;
-(unsigned long long)badgeCountExcludingCurrentlyViewedThread;
-(MNSyncedInboxBadgeCounter *)syncedInboxBadgeCounter;
-(NSString *)description;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(unsigned long long)badgeCount;
-(void)handleIdle;
@end

