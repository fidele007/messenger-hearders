/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNMessagesViewModelSourceUpdateListenerAnnouncer, MNThreadViewModel, NSArray, MNAppMessage, NSDictionary, FBMMessageKey, MNMontageSeenStateViewModel;

@interface MNMessagesViewModelSourceUpdater : NSObject {

	MNMessagesViewModelSourceUpdateListenerAnnouncer* _announcer;
	BOOL _showsLoadingIndicator;
	BOOL _lastViewModelLoadAttemptFailed;
	BOOL _isTypingActive;
	MNThreadViewModel* _threadViewModel;
	NSArray* _optimisticOutgoingAppMessages;
	MNAppMessage* _detailsExpandedMessage;
	NSDictionary* _foldableAdminMessageViewStateMap;
	FBMMessageKey* _recentForwardedMontageMessageKey;
	MNMontageSeenStateViewModel* _montageSeenStateViewModel;
	NSArray* _unfoldedAdminMessages;

}

@property (nonatomic,copy) MNAppMessage * detailsExpandedMessage;                                         //@synthesize detailsExpandedMessage=_detailsExpandedMessage - In the implementation block
@property (nonatomic,copy) NSArray * unfoldedAdminMessages;                                               //@synthesize unfoldedAdminMessages=_unfoldedAdminMessages - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * foldableAdminMessageViewStateMap;                      //@synthesize foldableAdminMessageViewStateMap=_foldableAdminMessageViewStateMap - In the implementation block
@property (nonatomic,copy,readonly) MNMontageSeenStateViewModel * montageSeenStateViewModel;              //@synthesize montageSeenStateViewModel=_montageSeenStateViewModel - In the implementation block
-(void)updateThreadViewModel:(id)arg1 updateType:(long long)arg2 ;
-(void)updateDetailsExpandedMessage:(id)arg1 updateType:(long long)arg2 ;
-(void)updateMontageSeenStateViewModel:(id)arg1 updateType:(long long)arg2 ;
-(void)updateRecentForwardedMontageMessageKey:(id)arg1 updateType:(long long)arg2 ;
-(MNAppMessage *)detailsExpandedMessage;
-(id)messagesViewModelSource;
-(void)updateExternalState;
-(void)updateFoldableAdminMessageViewStateMap:(id)arg1 updateType:(long long)arg2 ;
-(NSDictionary *)foldableAdminMessageViewStateMap;
-(void)updateTypingState:(BOOL)arg1 updateType:(long long)arg2 ;
-(void)updateOptimisticOutgoingAppMessages:(id)arg1 updateType:(long long)arg2 ;
-(void)updateShowsLoadingIndicator:(BOOL)arg1 updateType:(long long)arg2 ;
-(void)updateLastViewModelLoadAttemptFailed:(BOOL)arg1 updateType:(long long)arg2 ;
-(MNMontageSeenStateViewModel *)montageSeenStateViewModel;
-(void)_updateForType:(long long)arg1 ;
-(void)setDetailsExpandedMessage:(MNAppMessage *)arg1 ;
-(NSArray *)unfoldedAdminMessages;
-(void)setUnfoldedAdminMessages:(NSArray *)arg1 ;
-(id)init;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
