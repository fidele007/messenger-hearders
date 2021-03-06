/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, MNProfileImageView, MNPhotoMaskView, MNProfileImageViewController, MNBusinessFavoritesCellViewModel;

@interface MNBusinessFavoritesCell : UITableViewCell {

	UILabel* _nameLabel;
	UILabel* _descriptionLabel;
	UILabel* _subtitleLabel;
	MNProfileImageView* _profileImageView;
	MNPhotoMaskView* _profilePicMaskView;
	MNProfileImageViewController* _profileImageViewController;
	MNBusinessFavoritesCellViewModel* _viewModel;

}

@property (nonatomic,copy) MNBusinessFavoritesCellViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(double)heightThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 profileImageViewController:(id)arg3 ;
-(void)layoutSubviews;
-(MNBusinessFavoritesCellViewModel *)viewModel;
-(void)setViewModel:(MNBusinessFavoritesCellViewModel *)arg1 ;
@end

