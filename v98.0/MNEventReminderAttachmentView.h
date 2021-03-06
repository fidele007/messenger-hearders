/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNEventReminderAttachmentViewDelegate;
@class UIImageView, FBRichTextView, MNEventReminderAttachmentViewModel, NSString;

@interface MNEventReminderAttachmentView : UIControl <MNAttachmentView> {

	UIImageView* _reminderIconView;
	FBRichTextView* _titleView;
	FBRichTextView* _subtitleView;
	MNEventReminderAttachmentViewModel* _viewModel;
	id<MNEventReminderAttachmentViewDelegate> _delegate;

}

@property (nonatomic,copy) MNEventReminderAttachmentViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNEventReminderAttachmentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_didTapAttachmentView;
-(void)setDelegate:(id<MNEventReminderAttachmentViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(id<MNEventReminderAttachmentViewDelegate>)delegate;
-(MNEventReminderAttachmentViewModel *)viewModel;
-(void)setViewModel:(MNEventReminderAttachmentViewModel *)arg1 ;
@end

