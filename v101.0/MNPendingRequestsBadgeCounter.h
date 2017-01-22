/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:16 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPendingRequestsStoreListener.h>
#import <Messenger/MNInboxPendingRequestsViewStateListening.h>
#import <Messenger/MNInboxTabBadgeCountSourceTracking.h>

@class MNBadgeCountSourceAdapter, MNPendingRequestsStore, MNInboxPendingRequestsViewStateHandler, MNBadgeCountUpdateService, NSString;

@interface MNPendingRequestsBadgeCounter : NSObject <MNPendingRequestsStoreListener, MNInboxPendingRequestsViewStateListening, MNInboxTabBadgeCountSourceTracking> {

	MNBadgeCountSourceAdapter* _badgeCountAdapter;
	MNPendingRequestsStore* _pendingRequestsStore;
	MNInboxPendingRequestsViewStateHandler* _inboxPendingRequestsViewStateHandler;
	MNBadgeCountUpdateService* _badgeCountService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBadgeCountService:(id)arg1 pendingRequestsStore:(id)arg2 inboxPendingRequestsViewStateHandler:(id)arg3 ;
-(long long)_numberOfPendingRequests;
-(void)pendingRequestsMetadataDidUpdateFromOldMetadata:(id)arg1 toNewMetadata:(id)arg2 ;
-(void)inboxPendingRequestsViewNeedsUpdate;
-(void)startListening;
-(void)stopListening;
-(long long)badgeCount;
@end
