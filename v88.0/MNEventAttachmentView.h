/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNEventAttachmentViewDelegate;
@class FBWebImageView, FBRichTextView, UILabel, UIView, MNEventAttachmentViewModel, FBWebImageFocusPointLayout, NSString, MNEventSegmentControl;

@interface MNEventAttachmentView : UIControl <MNAttachmentView> {

	FBWebImageView* _eventImageView;
	FBRichTextView* _titleView;
	UILabel* _topSubtitleView;
	UILabel* _bottomSubtitleView;
	UILabel* _dateView;
	UILabel* _monthView;
	UIView* _dividerView;
	MNEventAttachmentViewModel* _eventAttachmentViewModel;
	FBWebImageFocusPointLayout* _focusLayout;
	NSString* _viewerGuestStatus;
	MNEventSegmentControl* _segmentControl;
	id<MNEventAttachmentViewDelegate> _delegate;

}

@property (nonatomic,readonly) MNEventSegmentControl * segmentControl;                       //@synthesize segmentControl=_segmentControl - In the implementation block
@property (assign,nonatomic,__weak) id<MNEventAttachmentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_updateEventLabels;
-(void)_updateEventImage;
-(void)_didTapEvent;
-(void)setViewerGuestStatus:(id)arg1 ;
-(MNEventSegmentControl *)segmentControl;
-(void)setDelegate:(id<MNEventAttachmentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNEventAttachmentViewDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end

