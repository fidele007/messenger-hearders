/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNInboxAnnouncementViewDelegate;
@class UILabel, UIButton, UIImageView, MNInboxAnnouncementViewModel;

@interface MNInboxAnnouncementView : UIView {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _actionButton;
	UIImageView* _imageView;
	UIImageView* _imageMaskView;
	MNInboxAnnouncementViewModel* _viewModel;
	id<MNInboxAnnouncementViewDelegate> _delegate;

}

@property (nonatomic,copy) MNInboxAnnouncementViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNInboxAnnouncementViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_layoutContentViews;
-(void)updateImage:(id)arg1 ;
-(void)_didTapActionButton:(id)arg1 ;
-(void)_updateDescription;
-(void)_updateViewsVisibility;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNInboxAnnouncementViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNInboxAnnouncementViewDelegate>)delegate;
-(MNInboxAnnouncementViewModel *)viewModel;
-(void)_updateActionButton;
-(void)setViewModel:(MNInboxAnnouncementViewModel *)arg1 ;
-(void)_updateTitle;
@end

