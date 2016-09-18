/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBKeyboardObserverDelegate.h>

@class FBKeyboardObserver, MNFormHeaderView, UIView, NSString;

@interface MNFormView : UIView <FBKeyboardObserverDelegate> {

	CGRect _keyboardFrame;
	FBKeyboardObserver* _keyboardObserver;
	MNFormHeaderView* _headerView;
	UIView* _contentView;
	UIView* _footerView;
	double _contentViewYForKeyboardDown;

}

@property (nonatomic,retain) MNFormHeaderView * headerView;                   //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                            //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                             //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) double contentViewYForKeyboardDown;              //@synthesize contentViewYForKeyboardDown=_contentViewYForKeyboardDown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)setContentViewYForKeyboardDown:(double)arg1 ;
-(void)setHeaderView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_replaceView:(id)arg1 withView:(id)arg2 animated:(BOOL)arg3 ;
-(void)animateContentWithDuration:(double)arg1 curve:(long long)arg2 ;
-(double)contentViewYForKeyboardDown;
-(void)_layoutSubviewsInternal;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(MNFormHeaderView *)headerView;
-(void)setHeaderView:(MNFormHeaderView *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setFooterView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setContentView:(id)arg1 animated:(BOOL)arg2 ;
@end

