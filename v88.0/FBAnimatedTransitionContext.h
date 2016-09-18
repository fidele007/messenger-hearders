/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAnimatedTransitionContext.h>

@class UIViewController, NSArray, NSString;

@interface FBAnimatedTransitionContext : NSObject <FBAnimatedTransitionContext> {

	BOOL _animated;
	UIViewController* _fromViewController;
	UIViewController* _toViewController;
	NSArray* _viewsToAnimateAlongsideFromViewController;
	NSArray* _viewsToAnimateAlongsideToViewController;
	CGPoint _translation;
	CGPoint _velocity;
	CGRect _initialFrameForFromViewController;
	CGRect _finalFrameForFromViewController;
	CGRect _initialFrameForToViewController;
	CGRect _finalFrameForToViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * fromViewController;                        //@synthesize fromViewController=_fromViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * toViewController;                          //@synthesize toViewController=_toViewController - In the implementation block
@property (nonatomic,readonly) CGRect initialFrameForFromViewController;                     //@synthesize initialFrameForFromViewController=_initialFrameForFromViewController - In the implementation block
@property (nonatomic,readonly) CGRect finalFrameForFromViewController;                       //@synthesize finalFrameForFromViewController=_finalFrameForFromViewController - In the implementation block
@property (nonatomic,readonly) CGRect initialFrameForToViewController;                       //@synthesize initialFrameForToViewController=_initialFrameForToViewController - In the implementation block
@property (nonatomic,readonly) CGRect finalFrameForToViewController;                         //@synthesize finalFrameForToViewController=_finalFrameForToViewController - In the implementation block
@property (assign,nonatomic) CGPoint translation;                                            //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                                               //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,readonly) BOOL animated;                                                //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy) NSArray * viewsToAnimateAlongsideFromViewController;              //@synthesize viewsToAnimateAlongsideFromViewController=_viewsToAnimateAlongsideFromViewController - In the implementation block
@property (nonatomic,copy) NSArray * viewsToAnimateAlongsideToViewController;                //@synthesize viewsToAnimateAlongsideToViewController=_viewsToAnimateAlongsideToViewController - In the implementation block
-(CGRect)initialFrameForFromViewController;
-(CGRect)finalFrameForFromViewController;
-(CGRect)initialFrameForToViewController;
-(CGRect)finalFrameForToViewController;
-(NSArray *)viewsToAnimateAlongsideFromViewController;
-(void)setViewsToAnimateAlongsideFromViewController:(NSArray *)arg1 ;
-(NSArray *)viewsToAnimateAlongsideToViewController;
-(void)setViewsToAnimateAlongsideToViewController:(NSArray *)arg1 ;
-(id)initWithFromViewController:(id)arg1 toViewController:(id)arg2 initialFrameForFromViewController:(CGRect)arg3 finalFrameForFromViewController:(CGRect)arg4 initialFrameForToViewController:(CGRect)arg5 finalFrameForToViewController:(CGRect)arg6 animated:(BOOL)arg7 ;
-(void)setVelocity:(CGPoint)arg1 ;
-(CGPoint)velocity;
-(BOOL)animated;
-(UIViewController *)fromViewController;
-(UIViewController *)toViewController;
-(CGPoint)translation;
-(void)setTranslation:(CGPoint)arg1 ;
@end

