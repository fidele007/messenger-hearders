/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNActionSheetViewDelegate;
@class UIView, UITapGestureRecognizer, UISwipeGestureRecognizer;

@interface MNActionSheetView : UIView {

	UIView* _contentView;
	UIView* _dimmedView;
	CGRect _keyboardFrame;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UISwipeGestureRecognizer* _swipeGestureRecognizer;
	BOOL _presented;
	BOOL _keyboardAware;
	BOOL _allowsFlexibleContentViewHeight;
	id<MNActionSheetViewDelegate> _delegate;
	double _maxHeightRatio;
	double _contentViewPresentedHeight;

}

@property (assign,nonatomic) BOOL presented;                                      //@synthesize presented=_presented - In the implementation block
@property (assign,nonatomic) id<MNActionSheetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double maxHeightRatio;                               //@synthesize maxHeightRatio=_maxHeightRatio - In the implementation block
@property (assign,nonatomic) double contentViewPresentedHeight;                   //@synthesize contentViewPresentedHeight=_contentViewPresentedHeight - In the implementation block
@property (assign,nonatomic) BOOL allowsFlexibleContentViewHeight;                //@synthesize allowsFlexibleContentViewHeight=_allowsFlexibleContentViewHeight - In the implementation block
-(double)_keyboardHeightInView;
-(void)setContentViewPresentedHeight:(double)arg1 ;
-(double)maxHeightRatio;
-(void)showAnimated:(BOOL)arg1 ;
-(void)_handleDismissalGesture:(id)arg1 ;
-(void)_hideAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_resizeAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setPresented:(BOOL)arg1 ;
-(id)initWithContentView:(id)arg1 keyboardAware:(BOOL)arg2 ;
-(void)resizeAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setMaxHeightRatio:(double)arg1 ;
-(void)setAllowsFlexibleContentViewHeight:(BOOL)arg1 ;
-(double)contentViewPresentedHeight;
-(BOOL)allowsFlexibleContentViewHeight;
-(void)setDelegate:(id<MNActionSheetViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNActionSheetViewDelegate>)delegate;
-(BOOL)presented;
-(void)_showAnimated:(BOOL)arg1 ;
-(void)setKeyboardFrame:(CGRect)arg1 ;
-(void)hideAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

