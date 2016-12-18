/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBInsetWrappingView : UIView {

	UIView* _wrappedView;
	UIView* _touchForwardingView;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) UIView * wrappedView;                      //@synthesize wrappedView=_wrappedView - In the implementation block
@property (nonatomic,retain) UIView * touchForwardingView;              //@synthesize touchForwardingView=_touchForwardingView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                //@synthesize contentInsets=_contentInsets - In the implementation block
-(UIView *)touchForwardingView;
-(void)setTouchForwardingView:(UIView *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIView *)wrappedView;
-(void)setWrappedView:(UIView *)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
@end

