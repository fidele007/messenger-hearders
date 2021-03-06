/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, MNPeopleCellActionButtonsStateCoordinatorListenerAnnouncer;

@interface MNPeopleCellActionButtonsStateCoordinator : NSObject {

	NSMutableDictionary* _conversationContactToId;
	NSMutableDictionary* _actionButtonStateQueue;
	MNPeopleCellActionButtonsStateCoordinatorListenerAnnouncer* _announcer;

}
-(void)updatePeopleCellActionButtonState:(id)arg1 forConversationContact:(id)arg2 ;
-(id)peopleCellActionButtonStateForConversationContact:(id)arg1 ;
-(void)updateAllButtonsInLoadingStateToTappedState;
-(void)_setPeopleCellActionButtonState:(id)arg1 forConversationContact:(id)arg2 ;
-(BOOL)_areAllActionButtonsInNormalState;
-(id)init;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

