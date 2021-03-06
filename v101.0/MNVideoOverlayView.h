/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNVideoOverlayViewDelegate;
@class FBFullScreenVideoActionOverlayView, NSTimer;

@interface MNVideoOverlayView : UIView {

	FBFullScreenVideoActionOverlayView* _fullscreenVideoActionOverlayView;
	NSTimer* _playbackTimer;
	id<MNVideoOverlayViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNVideoOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showPauseButton; 
@property (assign,nonatomic) double duration; 
-(void)setShowPauseButton:(BOOL)arg1 ;
-(void)startTrackingPlayProgress;
-(void)stopTrackingPlayProgress;
-(void)_setupActionOverlayView;
-(void)_handleTapOnPlayPauseButton:(id)arg1 ;
-(BOOL)showPauseButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNVideoOverlayViewDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<MNVideoOverlayViewDelegate>)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)_updateProgress:(id)arg1 ;
@end

