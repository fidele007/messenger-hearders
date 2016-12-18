/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol MNContentSubscriptionTopicCellDelegate;
@class UILabel, UIButton, UIImageView, MNPhotoMaskView, MNProfileImageView, MNProfileImageViewController, MNContentSubscriptionStationViewModel;

@interface MNContentSubscriptionTopicCell : UITableViewCell {

	UILabel* _nameLabel;
	UILabel* _topicDescriptionLabel;
	UIButton* _subscribeButton;
	UIImageView* _chevronImageView;
	long long _layoutStyle;
	MNPhotoMaskView* _profilePicMaskView;
	MNProfileImageView* _profileImageView;
	MNProfileImageViewController* _profileImageViewController;
	BOOL _subscribeButtonSelected;
	id<MNContentSubscriptionTopicCellDelegate> _delegate;
	MNContentSubscriptionStationViewModel* _viewModel;

}

@property (assign,nonatomic,__weak) id<MNContentSubscriptionTopicCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNContentSubscriptionStationViewModel * viewModel;                         //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) BOOL subscribeButtonSelected;                                          //@synthesize subscribeButtonSelected=_subscribeButtonSelected - In the implementation block
+(double)heightThatFits:(CGSize)arg1 forLayoutStyle:(long long)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 profileImageViewController:(id)arg3 ;
-(void)toggleSubscribeButton:(BOOL)arg1 ;
-(void)toggleSubscribeButton;
-(BOOL)subscribeButtonSelected;
-(void)_toggleSubscription:(id)arg1 ;
-(void)setDelegate:(id<MNContentSubscriptionTopicCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNContentSubscriptionTopicCellDelegate>)delegate;
-(void)setLayoutStyle:(long long)arg1 ;
-(MNContentSubscriptionStationViewModel *)viewModel;
-(void)setViewModel:(MNContentSubscriptionStationViewModel *)arg1 ;
@end

