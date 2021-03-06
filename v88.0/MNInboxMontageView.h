/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, MNCircularProgressIndicator, MNInboxMontageNullStateView, MNMontageArtPickerCompositionView, MNMontageThumbnailGradientView, MNInboxMontageItemViewModel, MNMontageThumbnailView, MNMontageSeenHeadsView;

@interface MNInboxMontageView : UIView {

	UILabel* _nameLabel;
	UILabel* _timeLabel;
	UIImageView* _maskView;
	UIImageView* _unreadBadgeView;
	UIImageView* _sendStateBackgroundView;
	UIImageView* _failedIconBackgroundView;
	UIImageView* _failedIconView;
	MNCircularProgressIndicator* _progressIndicator;
	UIImageView* _attachmentGenerationPlaceholderView;
	MNInboxMontageNullStateView* _inboxMontageNullStateView;
	MNMontageArtPickerCompositionView* _compositionView;
	MNMontageThumbnailGradientView* _compositionGradientView;
	BOOL _highlighted;
	MNInboxMontageItemViewModel* _inboxMontageViewModel;
	MNMontageThumbnailView* _thumbnailView;
	MNMontageSeenHeadsView* _montageSeenHeadsView;

}

@property (nonatomic,copy) MNInboxMontageItemViewModel * inboxMontageViewModel;              //@synthesize inboxMontageViewModel=_inboxMontageViewModel - In the implementation block
@property (nonatomic,readonly) MNMontageThumbnailView * thumbnailView;                       //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,readonly) MNMontageSeenHeadsView * montageSeenHeadsView;                //@synthesize montageSeenHeadsView=_montageSeenHeadsView - In the implementation block
-(void)_updateMaskImage;
-(void)_updateSeenHeads;
-(MNMontageSeenHeadsView *)montageSeenHeadsView;
-(void)_setUpViews;
-(void)_updateTimeLabel;
-(void)_updateFailedIcon;
-(void)_updateSendStateBackground;
-(id)initWithFrame:(CGRect)arg1 stickerResourceManager:(id)arg2 session:(id)arg3 ;
-(MNInboxMontageItemViewModel *)inboxMontageViewModel;
-(void)setInboxMontageViewModel:(MNInboxMontageItemViewModel *)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(MNMontageThumbnailView *)thumbnailView;
-(void)updateProgress:(double)arg1 ;
-(void)_updateProgress;
-(void)_updateText;
@end

