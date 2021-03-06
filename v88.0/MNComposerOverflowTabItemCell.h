/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol MNComposerOverflowTabItemCellDelegate;
@class MNTabBarExtensionIconView, UILabel, UIView, UIImageView, MNFadingButton, MNComposerOverflowTabViewModel;

@interface MNComposerOverflowTabItemCell : UICollectionViewCell {

	MNTabBarExtensionIconView* _iconView;
	UILabel* _label;
	UILabel* _subtitleLabel;
	UIView* _separatorView;
	UIImageView* _arrowImageView;
	MNFadingButton* _actionButton;
	id<MNComposerOverflowTabItemCellDelegate> _delegate;
	UIView* _previewView;
	MNComposerOverflowTabViewModel* _overflowViewModel;

}

@property (assign,nonatomic,__weak) id<MNComposerOverflowTabItemCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNTabBarExtensionIconView * iconView;                                 //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) UIView * previewView;                                                   //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,copy) MNComposerOverflowTabViewModel * overflowViewModel;                       //@synthesize overflowViewModel=_overflowViewModel - In the implementation block
+(double)intrinsicCellHeightWithSubtitle:(BOOL)arg1 hasPreview:(BOOL)arg2 ;
-(void)_updateSubtitle;
-(void)_updatePreviewView;
-(void)_updateAccessoryType;
-(void)_updateRenderingMode;
-(void)_updateIconColor;
-(MNComposerOverflowTabViewModel *)overflowViewModel;
-(id)_controlsTintColor;
-(void)_initSubtitleLabelIfNeeded;
-(BOOL)_actionButtonTitleShouldChange:(unsigned long long)arg1 ;
-(void)_initArrowImageViewIfNeeded;
-(void)_initActionButtonWithAccessoryTypeIfNeeded:(unsigned long long)arg1 ;
-(void)_updateActionButtonColors;
-(void)setOverflowViewModel:(MNComposerOverflowTabViewModel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNComposerOverflowTabItemCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNComposerOverflowTabItemCellDelegate>)delegate;
-(void)_updateBackgroundColor;
-(void)setHighlighted:(BOOL)arg1 ;
-(MNTabBarExtensionIconView *)iconView;
-(void)_actionButtonPressed:(id)arg1 ;
-(void)_updateTitle;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
@end

