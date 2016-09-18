/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNServiceControllable.h>

@class FBMessagingStore, MNThreadListFetchedTracker, MNMessageListFetchedTracker, MNFetchedThreadKeyTracker, NSString;

@interface MNMessagingStorePruningService : NSObject <FBClassProvidable, MNServiceControllable> {

	FBMessagingStore* _messagingStore;
	MNThreadListFetchedTracker* _threadListFetchedTracker;
	MNMessageListFetchedTracker* _messageListFetchedTracker;
	MNFetchedThreadKeyTracker* _fetchedThreadKeyTracker;
	BOOL _isRunning;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithMessagingStore:(id)arg1 threadListFetchedTracker:(id)arg2 messageListFetchedTracker:(id)arg3 fetchedThreadKeyTracker:(id)arg4 ;
-(void)_kickOffPruningJob;
-(void)_cleanUpAdditionalStatesForPrunedThreadKeys:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

