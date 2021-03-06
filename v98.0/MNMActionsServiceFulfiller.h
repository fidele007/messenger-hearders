/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMActionsServiceFulfilling.h>

@protocol OS_dispatch_queue;
@class NSObject, MNMActionsStore, MNMActionsStoreListenerAnnouncer, FBMobileConfigContextManager, MNOmniMSettingsStore;

@interface MNMActionsServiceFulfiller : NSObject <MNMActionsServiceFulfilling> {

	NSObject*<OS_dispatch_queue> _queue;
	MNMActionsStore* _actionsStore;
	MNMActionsStoreListenerAnnouncer* _mActionsListenerAnnouncer;
	FBMobileConfigContextManager* _configManager;
	MNOmniMSettingsStore* _omniMSettingsStore;
	double _conservativeConfidenceThreshold;
	double _balancedConfidenceThreshold;
	double _aggressiveConfidenceThreshold;
	long long _suggestionLifetimeInMessageCount;
	long long _maxAdditionalStickerCount;

}
-(void)actionsForThreadKey:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)markAllActionsExpiredForThreadKey:(id)arg1 ;
-(BOOL)_suggestionModeSettingEnabled;
-(void)markActionExpired:(id)arg1 ;
-(void)addActions:(id)arg1 forThreadKey:(id)arg2 overwriteExisting:(BOOL)arg3 ;
-(id)initWithMessagingStore:(id)arg1 messagingStoreDelayer:(id)arg2 mActionsListenerAnnouncer:(id)arg3 configContextManager:(id)arg4 omniMSettingsStore:(id)arg5 queue:(id)arg6 ;
-(void)kickOffRestoreFromDisk;
-(id)_filteredActions:(id)arg1 ;
-(BOOL)_shouldShowSuggestion:(id)arg1 ;
-(BOOL)_canPresentStickerSuggestions;
-(BOOL)_canPresentLocationSuggestions;
-(BOOL)_canPresentRideServiceSuggestions;
-(BOOL)_canPresentPaymentSuggestions;
-(BOOL)_canPresentReminderSuggestions;
-(BOOL)_canPresentPollSuggestions;
-(BOOL)_canPresentScheduleCallSuggestions;
-(BOOL)_canPresentFoodOrderingSuggestions;
-(BOOL)_isSuggestionConfidenceSufficient:(id)arg1 ;
@end

