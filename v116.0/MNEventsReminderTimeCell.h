/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/MNTableViewCell.h>

@protocol MNEventsReminderTimeCellDelegate;
@class MNEventsReminderTimeCellViewModel, UIButton;

@interface MNEventsReminderTimeCell : MNTableViewCell {

	MNEventsReminderTimeCellViewModel* _viewModel;
	UIButton* _createPollButton;
	id<MNEventsReminderTimeCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEventsReminderTimeCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCellStyle:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)_didTapCreatePollButton;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNEventsReminderTimeCellDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNEventsReminderTimeCellDelegate>)delegate;
-(void)configureWithViewModel:(id)arg1 ;
@end

