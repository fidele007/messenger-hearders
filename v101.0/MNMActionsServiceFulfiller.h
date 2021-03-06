/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNMActionsServiceFulfilling.h>

@protocol OS_dispatch_queue;
@class NSObject, MNMActionsStore, MNMActionsStoreListenerAnnouncer, FBMobileConfigContextManager, MNMessageLiveLocationConfigManager, MNOmniMSettingsStore;

@interface MNMActionsServiceFulfiller : NSObject <MNMActionsServiceFulfilling> {

	NSObject*<OS_dispatch_queue> _queue;
	MNMActionsStore* _actionsStore;
	MNMActionsStoreListenerAnnouncer* _mActionsListenerAnnouncer;
	FBMobileConfigContextManager* _configManager;
	MNMessageLiveLocationConfigManager* _liveLocationConfigManager;
	MNOmniMSettingsStore* _omniMSettingsStore;
	mutex _mutex;
	double _conservativeConfidenceThreshold;
	double _balancedConfidenceThreshold;
	double _aggressiveConfidenceThreshold;
	long long _suggestionLifetimeInMessageCount;
	long long _maxAdditionalStickerCount;

}
-(void)addActions:(id)arg1 forThreadKey:(id)arg2 overwriteExisting:(BOOL)arg3 ;
-(void)deleteAction:(id)arg1 ;
-(void)actionsForThreadKey:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_suggestionModeSettingEnabled;
-(id)actionsSnapshotForThreadKey:(id)arg1 ;
-(void)markAllActionsExpiredForThreadKey:(id)arg1 ;
-(id)_filteredExpiredActions:(id)arg1 ;
-(void)markActionsExpired:(id)arg1 forThreadWithKey:(id)arg2 ;
-(id)initWithMessagingStore:(id)arg1 messagingStoreDelayer:(id)arg2 mActionsListenerAnnouncer:(id)arg3 configContextManager:(id)arg4 liveLocationConfigManager:(id)arg5 omniMSettingsStore:(id)arg6 queue:(id)arg7 ;
-(BOOL)_isSuggestionConfidenceSufficient:(id)arg1 ;
-(id)_filterActionsInPreparationForDisplay:(id)arg1 ;
-(BOOL)_isSuggestionImplementedAndAllowed:(id)arg1 ;
-(BOOL)_canPresentTextSuggestions;
-(BOOL)_canPresentStickerSuggestions;
-(BOOL)_canPresentLocationSuggestions;
-(BOOL)_canPresentRideServiceSuggestions;
-(BOOL)_canPresentPaymentSuggestions;
-(BOOL)_canPresentReminderSuggestions;
-(BOOL)_canPresentPollSuggestions;
-(BOOL)_canPresentScheduleCallSuggestions;
-(BOOL)_canPresentFoodOrderingSuggestions;
-(BOOL)_canPresentLiveLocationSuggestions;
-(BOOL)_canPresentLiveVideoSuggestions;
-(void)kickOffRestoreFromDisk;
@end

