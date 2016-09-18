/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBKeyboardObserverDelegate.h>

@protocol UIViewControllerTransitionCoordinatorContext;
@class FBKeyboardObserver, FBAuthHeaderContentFooterView, NSString;

@interface FBAuthHeaderContentFooterViewController : UIViewController <FBKeyboardObserverDelegate> {

	BOOL _keyboardWasShown;
	CGRect _keyboardFrame;
	BOOL _isRotating_IOS7_ONLY;
	BOOL _isAnimatingRotation_IOS7_ONLY;
	unsigned long long _footerPositioning;
	FBKeyboardObserver* _keyboardObserver;
	id<UIViewControllerTransitionCoordinatorContext> _rotationContext;
	UIEdgeInsets _minimumEdgeInsets;

}

@property (nonatomic,readonly) FBKeyboardObserver * keyboardObserver;                                       //@synthesize keyboardObserver=_keyboardObserver - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitionCoordinatorContext> rotationContext;              //@synthesize rotationContext=_rotationContext - In the implementation block
@property (assign,nonatomic) BOOL isRotating_IOS7_ONLY;                                                     //@synthesize isRotating_IOS7_ONLY=_isRotating_IOS7_ONLY - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingRotation_IOS7_ONLY;                                            //@synthesize isAnimatingRotation_IOS7_ONLY=_isAnimatingRotation_IOS7_ONLY - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets minimumEdgeInsets;                                              //@synthesize minimumEdgeInsets=_minimumEdgeInsets - In the implementation block
@property (nonatomic,readonly) FBAuthHeaderContentFooterView * headerContentFooterView; 
@property (assign,nonatomic) unsigned long long footerPositioning;                                          //@synthesize footerPositioning=_footerPositioning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(UIEdgeInsets)minimumEdgeInsets;
-(FBAuthHeaderContentFooterView *)headerContentFooterView;
-(FBKeyboardObserver *)keyboardObserver;
-(void)setRotationContext:(id<UIViewControllerTransitionCoordinatorContext>)arg1 ;
-(void)_keyboardWillShow:(BOOL)arg1 beginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(unsigned long long)footerPositioning;
-(id<UIViewControllerTransitionCoordinatorContext>)rotationContext;
-(BOOL)isRotating_IOS7_ONLY;
-(void)enableKeyboardObserver;
-(void)setIsRotating_IOS7_ONLY:(BOOL)arg1 ;
-(BOOL)isAnimatingRotation_IOS7_ONLY;
-(void)setIsAnimatingRotation_IOS7_ONLY:(BOOL)arg1 ;
-(id)initWithMinimumInsets:(UIEdgeInsets)arg1 ;
-(void)setFooterPositioning:(unsigned long long)arg1 ;
-(void)disableKeyboardObserver;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
@end

