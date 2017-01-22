/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, UIButton;

@interface FBBugReportShakeOffView : UIView {

	UILabel* _shakeOffLabel;
	UIView* _divider;
	double _margin;
	double _dividerHeight;
	double _buttonHeight;
	UIButton* _okButton;

}

@property (nonatomic,retain) UIButton * okButton;              //@synthesize okButton=_okButton - In the implementation block
-(void)initializeLayoutParameters;
-(double)heightForLabelText:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)okButton;
-(void)setOkButton:(UIButton *)arg1 ;
@end
