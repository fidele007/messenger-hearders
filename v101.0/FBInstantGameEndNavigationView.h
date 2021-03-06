/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBTransparentView.h>

@class FBInstantGameUIMetrics, CAGradientLayer, UIButton;

@interface FBInstantGameEndNavigationView : FBTransparentView {

	FBInstantGameUIMetrics* _metrics;
	CAGradientLayer* _gradientShadow;
	UIButton* _leftButton;
	UIButton* _middleButton;
	UIButton* _rightButton;

}

@property (nonatomic,readonly) UIButton * leftButton;                //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UIButton * middleButton;              //@synthesize middleButton=_middleButton - In the implementation block
@property (nonatomic,readonly) UIButton * rightButton;               //@synthesize rightButton=_rightButton - In the implementation block
-(UIButton *)middleButton;
-(void)layoutSubviews;
-(id)initWithConfig:(id)arg1 ;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
@end

