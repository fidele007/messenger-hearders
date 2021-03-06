/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class UIView, UINavigationBar, UIImageView, UILabel, UIButton;

@interface FBStarRatingsESRView : UIImageView {

	UIView* _containerView;
	UINavigationBar* _navigationBar;
	UIImageView* _imageView;
	UILabel* _messageLabel;
	UIView* _longDividerBottom;
	UIButton* _cancelButton;
	UIView* _verticalDividerBetweenButtons;
	UIView* _horizontalDividerTop;
	UIView* _horizontalDividerBottom;
	double _margin;
	double _imageWidth;
	double _imageHeight;
	double _dividerHeight;
	double _buttonHeight;
	double _navigationBarHeight;
	UIButton* _okButton;

}

@property (nonatomic,retain) UIButton * okButton;                  //@synthesize okButton=_okButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
-(void)initializeLayoutParameters;
-(void)windowDidBecomeKey:(id)arg1 ;
-(void)windowDidResignKey:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)okButton;
-(void)setOkButton:(UIButton *)arg1 ;
-(void)animateIn;
@end

