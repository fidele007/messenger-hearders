/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBSemiTransparentOverlayView, FBTimer;

@interface FBSemiTransparentOverlayPresentingView : UIView {

	FBSemiTransparentOverlayView* _presentedOverlay;
	FBTimer* _ephemeralOverlayTimer;
	double _animationDuration;
	unsigned long long _layoutMode;
	UIEdgeInsets _overlayEdgeInsets;

}

@property (assign,nonatomic) double animationDuration;                    //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) unsigned long long layoutMode;               //@synthesize layoutMode=_layoutMode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets overlayEdgeInsets;              //@synthesize overlayEdgeInsets=_overlayEdgeInsets - In the implementation block
-(void)setLayoutMode:(unsigned long long)arg1 ;
-(void)setOverlayEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)presentEphemeralOverlay:(id)arg1 forDuration:(double)arg2 afterDelay:(double)arg3 animated:(BOOL)arg4 ;
-(void)_hideOverlay:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cancelEphemeralOverlayTimer;
-(id)presentOverlay:(id)arg1 animated:(BOOL)arg2 afterDelay:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_hideEphemeralOverlay;
-(id)presentOverlay:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentEphemeralOverlay:(id)arg1 forDuration:(double)arg2 animated:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAnimationDuration:(double)arg1 ;
-(double)animationDuration;
-(UIEdgeInsets)overlayEdgeInsets;
-(unsigned long long)layoutMode;
@end
