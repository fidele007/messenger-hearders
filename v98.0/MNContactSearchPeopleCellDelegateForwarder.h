/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPeopleCellDelegate.h>

@protocol MNContactSearchPeopleCellActionButtonControlling;
@class MNContactSearchResult, MNContactSearchIndexedPreppedDataSet, NSString;

@interface MNContactSearchPeopleCellDelegateForwarder : NSObject <MNPeopleCellDelegate> {

	id<MNContactSearchPeopleCellActionButtonControlling> _actionButtonController;
	MNContactSearchResult* _result;
	MNContactSearchIndexedPreppedDataSet* _preppedDataSet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contextTappedForConversationContact:(id)arg1 ;
-(void)callButtonTappedForConversationContact:(id)arg1 isVideoCall:(BOOL)arg2 ;
-(void)peopleCell:(id)arg1 didTapLightweightActionButtonForConversationContact:(id)arg2 ;
-(void)peopleCell:(id)arg1 didTapActionButtonForConversationContact:(id)arg2 ;
-(void)peopleCell:(id)arg1 didTapSecondaryActionButtonForConversationContact:(id)arg2 ;
-(void)didUpdatePeopleCellActionButtonState:(id)arg1 forConversationContact:(id)arg2 ;
-(id)initWithActionButtonController:(id)arg1 ;
-(void)bindToResult:(id)arg1 preppedDataSet:(id)arg2 ;
@end
