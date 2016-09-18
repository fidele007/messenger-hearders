/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNPaymentsSetupStackableView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MNPaymentsSetupViewDelegate;
@class UITapGestureRecognizer, MNPaymentsSetupHeaderView, MNPaymentsSetupStackableView, UIButton, NSString;

@interface MNPaymentsSetupView : MNPaymentsSetupStackableView <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _tapGestureRecognizer;
	MNPaymentsSetupHeaderView* _headerView;
	MNPaymentsSetupStackableView* _contentView;
	UIButton* _notNowButton;
	UIButton* _skipButton;
	CGRect _keyboardFrame;
	BOOL _shouldUseGrayButton;
	id<MNPaymentsSetupViewDelegate> _delegate;
	long long _skipButtonStyle;

}

@property (assign,nonatomic,__weak) id<MNPaymentsSetupViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long skipButtonStyle;                                    //@synthesize skipButtonStyle=_skipButtonStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldUseGrayButton;                                     //@synthesize shouldUseGrayButton=_shouldUseGrayButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)minimumSizeThatFits:(CGSize)arg1 ;
-(void)_didTapView;
-(void)_didTapNotNow;
-(void)setShouldUseGrayButton:(BOOL)arg1 ;
-(void)_layoutButtonWithBounds:(CGRect)arg1 ;
-(CGRect)_getEffectiveRectForBounds:(CGRect)arg1 ;
-(double)_getExpansionRatioWithSize:(CGSize)arg1 ;
-(void)_layoutHeaderViewWithExpantionRatio:(double)arg1 effectiveRect:(CGRect)arg2 ;
-(void)_layoutContentViewWithExpantionRatio:(double)arg1 effectiveRect:(CGRect)arg2 ;
-(void)_updateSkipButtonStyle;
-(id)initWithHeaderView:(id)arg1 contentView:(id)arg2 ;
-(void)setHeaderViewState:(long long)arg1 keyboardFrame:(CGRect)arg2 animateWithDuration:(double)arg3 animationOptions:(unsigned long long)arg4 ;
-(void)setContentView:(id)arg1 animated:(BOOL)arg2 transitionDirection:(long long)arg3 ;
-(void)setSkipButtonStyle:(long long)arg1 ;
-(long long)skipButtonStyle;
-(BOOL)shouldUseGrayButton;
-(void)setDelegate:(id<MNPaymentsSetupViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNPaymentsSetupViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)canResignFirstResponder;
@end

