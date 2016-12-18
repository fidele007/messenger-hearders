/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/RCTInvalidating.h>

@protocol RCTModalHostViewInteractor;
@class RCTBridge, RCTModalHostViewController, RCTTouchHandler, UIView, NSString, NSArray;

@interface RCTModalHostView : UIView <RCTInvalidating> {

	RCTBridge* _bridge;
	BOOL _isPresented;
	RCTModalHostViewController* _modalViewController;
	RCTTouchHandler* _touchHandler;
	UIView* _reactSubview;
	long long _lastKnownOrientation;
	NSString* _animationType;
	/*^block*/id _onShow;
	id<RCTModalHostViewInteractor> _delegate;
	NSArray* _supportedOrientations;
	/*^block*/id _onOrientationChange;

}

@property (nonatomic,copy) NSString * animationType;                                      //@synthesize animationType=_animationType - In the implementation block
@property (assign,getter=isTransparent,nonatomic) BOOL transparent; 
@property (nonatomic,copy) id onShow;                                                     //@synthesize onShow=_onShow - In the implementation block
@property (assign,nonatomic,__weak) id<RCTModalHostViewInteractor> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * supportedOrientations;                               //@synthesize supportedOrientations=_supportedOrientations - In the implementation block
@property (nonatomic,copy) id onOrientationChange;                                        //@synthesize onOrientationChange=_onOrientationChange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBridge:(id)arg1 ;
-(void)insertReactSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeReactSubview:(id)arg1 ;
-(void)didUpdateReactSubviews;
-(void)notifyForBoundsChange:(CGRect)arg1 ;
-(void)notifyForOrientationChange;
-(BOOL)hasAnimationType;
-(unsigned long long)supportedOrientationsMask;
-(void)dismissModalViewController;
-(id)onShow;
-(void)setOnShow:(id)arg1 ;
-(id)onOrientationChange;
-(void)setOnOrientationChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<RCTModalHostViewInteractor>)arg1 ;
-(void)didMoveToWindow;
-(id<RCTModalHostViewInteractor>)delegate;
-(void)invalidate;
-(void)didMoveToSuperview;
-(void)setSupportedOrientations:(NSArray *)arg1 ;
-(NSArray *)supportedOrientations;
-(void)setAnimationType:(NSString *)arg1 ;
-(BOOL)isTransparent;
-(NSString *)animationType;
-(void)setTransparent:(BOOL)arg1 ;
@end
