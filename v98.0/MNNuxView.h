/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MNNuxViewDelegate;
@class UIImageView, MNNuxBubbleView, UIGestureRecognizer, UIView, NSString;

@interface MNNuxView : UIView <UIGestureRecognizerDelegate> {

	UIImageView* _arrowImageView;
	MNNuxBubbleView* _bubbleView;
	UIGestureRecognizer* _touchDownRecognizer;
	id<MNNuxViewDelegate> _delegate;
	UIView* _nuxTargetView;

}

@property (assign,nonatomic,__weak) id<MNNuxViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * nuxTargetView;                      //@synthesize nuxTargetView=_nuxTargetView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 traits:(id)arg2 iconImage:(id)arg3 text:(id)arg4 ;
-(void)setNuxTargetView:(UIView *)arg1 ;
-(UIView *)nuxTargetView;
-(void)setDelegate:(id<MNNuxViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id<MNNuxViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
@end

