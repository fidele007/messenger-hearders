/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNDataConsistencyCheckInitiating.h>

@protocol MNDataConsistencyCheckPerforming, MNDataConsistencyCheckClientSnapshotBuilding;
@class NSString;

@interface MNDataConsistencyCheckInitiator : NSObject <MNDataConsistencyCheckInitiating> {

	id<MNDataConsistencyCheckPerforming> _performer;
	id<MNDataConsistencyCheckClientSnapshotBuilding> _clientSnapshotBuilder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initiateDataConsistencyCheck;
-(id)initWithAuthManager:(id)arg1 analytics:(id)arg2 userSettings:(id)arg3 graphQLFragmentService:(id)arg4 messagingRegionHeaderHelper:(id)arg5 threadSummaryCacheReader:(id)arg6 threadListContinuityTracker:(id)arg7 threadMessageCacheReading:(id)arg8 threadFetchedConfirmer:(id)arg9 syncProtocolDataStore:(id)arg10 queryConfigGenerator:(id)arg11 ;
@end

