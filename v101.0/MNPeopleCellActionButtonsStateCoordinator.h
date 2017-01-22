/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, MNPeopleCellActionButtonsStateCoordinatorListenerAnnouncer;

@interface MNPeopleCellActionButtonsStateCoordinator : NSObject {

	NSMutableDictionary* _conversationContactToId;
	NSMutableDictionary* _actionButtonStateQueue;
	MNPeopleCellActionButtonsStateCoordinatorListenerAnnouncer* _announcer;

}
-(id)initWithConversationContactButtonStateMap:(id)arg1 ;
-(void)updatePeopleCellActionButtonState:(id)arg1 forConversationContact:(id)arg2 ;
-(id)peopleCellActionButtonStateForConversationContact:(id)arg1 ;
-(void)updateAllButtonsInLoadingStateToTappedState;
-(void)_setPeopleCellActionButtonState:(id)arg1 forConversationContact:(id)arg2 ;
-(BOOL)_areAllActionButtonsInNormalState;
-(id)init;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
