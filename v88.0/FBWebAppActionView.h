/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebAppActionViewDelegate;
@class UIButton, UILabel, UIImageView, UIView;

@interface FBWebAppActionView : UIView {

	UIButton* _actionButton;
	UIButton* _dismissButton;
	UILabel* _subtitleLabel;
	UIImageView* _imageView;
	UIView* _bottomSeparator;
	id<FBWebAppActionViewDelegate> _delegate;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebAppActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)defaultHeight;
-(void)_didTapActionButton:(id)arg1 ;
-(void)_didTapDismissButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 titleLabel:(id)arg2 buttonLabel:(id)arg3 style:(unsigned long long)arg4 ;
-(double)_separatorThickness;
-(id)initWithFrame:(CGRect)arg1 titleLabel:(id)arg2 subtitleLabel:(id)arg3 buttonLabel:(id)arg4 icon:(id)arg5 style:(unsigned long long)arg6 ;
-(void)setDelegate:(id<FBWebAppActionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBWebAppActionViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

