/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, UILabel, FBButton, FBNetworkImageView;

@interface FBFullscreenDDStyleEmptyView : UIView {

	UIView* _containerView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	FBButton* _actionButton;
	UIView* _endFeedLogoView;
	FBNetworkImageView* _placeHolderView;
	/*^block*/id _actionBlock;

}

@property (nonatomic,copy) id actionBlock;              //@synthesize actionBlock=_actionBlock - In the implementation block
-(void)_actionTouchUpInside;
-(void)layoutSubviews;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

