/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol MNInboxContentSubscriptionLinkCellDelegate;
@class UIButton, UIImageView, FBFourRoundedCornerView, MNImageRequester, FBImageLoader, UILabel, MNInboxContentSubscriptionLinkRowViewModel;

@interface MNInboxContentSubscriptionLinkCell : UITableViewCell {

	UIButton* _shareButton;
	UIImageView* _lightningBoltImageView;
	FBFourRoundedCornerView* _contentPreviewMaskView;
	MNImageRequester* _imageRequester;
	FBImageLoader* _imageLoader;
	UILabel* _contentLinkTitleLabel;
	UILabel* _contentSourceLabel;
	UIImageView* _contentPreviewImageView;
	MNInboxContentSubscriptionLinkRowViewModel* _viewModel;
	id<MNInboxContentSubscriptionLinkCellDelegate> _delegate;

}

@property (nonatomic,retain) UILabel * contentLinkTitleLabel;                                             //@synthesize contentLinkTitleLabel=_contentLinkTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * contentSourceLabel;                                                //@synthesize contentSourceLabel=_contentSourceLabel - In the implementation block
@property (nonatomic,retain) UIImageView * contentPreviewImageView;                                       //@synthesize contentPreviewImageView=_contentPreviewImageView - In the implementation block
@property (nonatomic,copy) MNInboxContentSubscriptionLinkRowViewModel * viewModel;                        //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNInboxContentSubscriptionLinkCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)cellHeight;
-(void)_didTapShareButton:(id)arg1 ;
-(UILabel *)contentLinkTitleLabel;
-(void)setContentLinkTitleLabel:(UILabel *)arg1 ;
-(UILabel *)contentSourceLabel;
-(void)setContentSourceLabel:(UILabel *)arg1 ;
-(UIImageView *)contentPreviewImageView;
-(void)setContentPreviewImageView:(UIImageView *)arg1 ;
-(void)setDelegate:(id<MNInboxContentSubscriptionLinkCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<MNInboxContentSubscriptionLinkCellDelegate>)delegate;
-(MNInboxContentSubscriptionLinkRowViewModel *)viewModel;
-(void)setViewModel:(MNInboxContentSubscriptionLinkRowViewModel *)arg1 ;
@end

