/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIActivityIndicatorView, UIView, FBListFooterViewModel;

@interface FBListFooterView : UIView {

	UIImageView* _logoView;
	UILabel* _messageLabel;
	UIActivityIndicatorView* _activityIndicatorView;
	UIView* _accessoryContainerView;
	FBListFooterViewModel* _viewModel;

}

@property (nonatomic,retain) FBListFooterViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBListFooterViewModel *)viewModel;
-(void)setViewModel:(FBListFooterViewModel *)arg1 ;
@end

