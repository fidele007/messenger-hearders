/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class FBFourRoundedCornerView, UILabel, UIImageView;

@interface MNLightweightActionButtonCell : UICollectionViewCell {

	FBFourRoundedCornerView* _roundedCornerView;
	UILabel* _titleLabel;
	UIImageView* _thumbnailBackgroundView;
	UILabel* _thumbnailEmojiLabel;
	NSString* _lightweightActionType;

}
-(void)configureWithViewModel:(id)arg1 cornerColor:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

