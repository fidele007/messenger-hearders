/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBInstantGamePlayButtonViewDelegate;
@class FBInstantGameUIMetrics, UIButton, CAGradientLayer;

@interface FBInstantGamePlayButtonView : UIView {

	FBInstantGameUIMetrics* _metrics;
	UIButton* _playButton;
	CAGradientLayer* _gradientShadow;
	id<FBInstantGamePlayButtonViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGamePlayButtonViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_userDidTapButton;
-(id)initWithButtonTitle:(id)arg1 ;
-(void)setDelegate:(id<FBInstantGamePlayButtonViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<FBInstantGamePlayButtonViewDelegate>)delegate;
@end

