/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPopoverControllerDelegate.h>
#import <Messenger/MNTooltipOverlayViewDelegate.h>

@protocol FBNuxStepViewController, MNTooltipOverlayControllerDelegate;
@class FBPopoverController, UIViewController, MNTooltipOverlayView, FBKVOController, FBTimer, FBNuxCoordinator, FBNuxTooltip, NSString;

@interface MNTooltipOverlayController : NSObject <FBPopoverControllerDelegate, MNTooltipOverlayViewDelegate> {

	FBPopoverController* _popoverController;
	UIViewController*<FBNuxStepViewController> _tooltipViewController;
	MNTooltipOverlayView* _overlayView;
	FBKVOController* _KVOController;
	FBTimer* _autoHideTimer;
	FBNuxCoordinator* _nuxCoordinator;
	BOOL _autoHideOnTouch;
	double _autoHideTimeInterval;
	FBNuxTooltip* _currentTooltip;
	id<MNTooltipOverlayControllerDelegate> _delegate;

}

@property (assign,nonatomic) double autoHideTimeInterval;                                         //@synthesize autoHideTimeInterval=_autoHideTimeInterval - In the implementation block
@property (assign,nonatomic) BOOL autoHideOnTouch;                                                //@synthesize autoHideOnTouch=_autoHideOnTouch - In the implementation block
@property (nonatomic,readonly) FBNuxTooltip * currentTooltip;                                     //@synthesize currentTooltip=_currentTooltip - In the implementation block
@property (assign,nonatomic,__weak) id<MNTooltipOverlayControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_popoverControllerShouldDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)setAutoHideTimeInterval:(double)arg1 ;
-(BOOL)canShowTooltip;
-(BOOL)isTooltipVisible;
-(void)hideTooltipAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithNuxCoordinator:(id)arg1 ;
-(void)showTooltip:(id)arg1 overlayingView:(id)arg2 animated:(BOOL)arg3 ;
-(FBNuxTooltip *)currentTooltip;
-(void)setAutoHideOnTouch:(BOOL)arg1 ;
-(double)autoHideTimeInterval;
-(BOOL)tooltipOverlayView:(id)arg1 pointInsideTooltip:(CGPoint)arg2 inView:(id)arg3 ;
-(void)tooltipOverlayViewDidReceiveTouch:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_autoHideAnimated:(BOOL)arg1 ;
-(id)_createViewControllerForTooltip:(id)arg1 ;
-(id)_createPopupControllerForTooltip:(id)arg1 ;
-(void)_observeCurrentTooltip;
-(CGPoint)_calculatePosition;
-(void)_unobserveCurrentTooltip;
-(void)_tooltipPositionDidChange;
-(BOOL)autoHideOnTouch;
-(void)setDelegate:(id<MNTooltipOverlayControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNTooltipOverlayControllerDelegate>)delegate;
@end

