/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIButton.h>

@class FBCameraModifiedTouchTrackingButtonListenerAnnouncer;

@interface FBCameraModifiedTouchTrackingButton : UIButton {

	FBCameraModifiedTouchTrackingButtonListenerAnnouncer* _announcer;
	double _boundsExtensionForTracking;

}

@property (assign,nonatomic) double boundsExtensionForTracking;              //@synthesize boundsExtensionForTracking=_boundsExtensionForTracking - In the implementation block
-(void)setBoundsExtensionForTracking:(double)arg1 ;
-(void)addModifiedTouchTrackingButtonListener:(id)arg1 ;
-(void)removeModifiedTouchTrackingButtonListener:(id)arg1 ;
-(CGRect)_extendedBounds;
-(double)boundsExtensionForTracking;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end
