/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNProfilePreviewing.h>
#import <Messenger/MNInboxTruncatingTextViewDelegate.h>

@protocol MNInboxAttachmentViewDelegate;
@class UIImageView, UILabel, UIButton, MNInboxTruncatingTextView, MNInboxAttachmentViewModel, UIView, NSString;

@interface MNInboxAttachmentView : UIView <MNProfilePreviewing, MNInboxTruncatingTextViewDelegate> {

	UIImageView* _previewImageView;
	UILabel* _titleLabel;
	UIButton* _shareButton;
	UIImageView* _iconView;
	UIImageView* _iconMaskView;
	UIImageView* _previewMaskView;
	MNInboxTruncatingTextView* _truncatingTextView;
	id<MNInboxAttachmentViewDelegate> _delegate;
	MNInboxAttachmentViewModel* _inboxAttachmentViewModel;
	UIView* _previewView;

}

@property (assign,nonatomic,__weak) id<MNInboxAttachmentViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNInboxAttachmentViewModel * inboxAttachmentViewModel;              //@synthesize inboxAttachmentViewModel=_inboxAttachmentViewModel - In the implementation block
@property (nonatomic,retain) UIView * previewView;                                             //@synthesize previewView=_previewView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)previewableProfileAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_updatePreview;
-(MNInboxAttachmentViewModel *)inboxAttachmentViewModel;
-(void)_didTapShare:(id)arg1 ;
-(void)_layoutForPreviewOnlyContent;
-(void)_layoutForPreviewWithDetailContent;
-(void)_updatePreviewImage;
-(void)_updateAttachmentContent;
-(void)_updateDescription;
-(void)_updateViewsVisibility;
-(void)_updateShareButton;
-(void)setInboxAttachmentViewModel:(MNInboxAttachmentViewModel *)arg1 ;
-(void)truncatingTextViewDidTapTruncationString:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNInboxAttachmentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNInboxAttachmentViewDelegate>)delegate;
-(void)_updateTitleLabel;
-(void)setIconImage:(id)arg1 ;
-(void)setPreviewImage:(id)arg1 ;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
@end

