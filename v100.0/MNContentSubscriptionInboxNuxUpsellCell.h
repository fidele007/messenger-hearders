/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, MNContentSubscriptionUpsellViewModel;

@interface MNContentSubscriptionInboxNuxUpsellCell : UITableViewCell {

	UILabel* _upsellDescriptionLabel;
	MNContentSubscriptionUpsellViewModel* _viewModel;

}

@property (nonatomic,copy) MNContentSubscriptionUpsellViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(double)cellHeightForViewModel:(id)arg1 boundingSize:(CGSize)arg2 ;
+(id)generateViewModelWithDescription:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(MNContentSubscriptionUpsellViewModel *)viewModel;
-(void)setViewModel:(MNContentSubscriptionUpsellViewModel *)arg1 ;
@end

