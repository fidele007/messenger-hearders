/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <Messenger/FBAuthUIPresenting.h>

@protocol OS_dispatch_queue, FBAuthUIPresenterAnimationDelegate;
@class NSObject, UINavigationController, NSString;

@interface FBAuthUIPresenter : NSObject <UINavigationControllerDelegate, FBAuthUIPresenting> {

	/*^block*/id _presentationBlock;
	/*^block*/id _dismissalBlock;
	/*^block*/id _modalPresentationBlock;
	/*^block*/id _navigationControllerCreationBlock;
	NSObject*<OS_dispatch_queue> _navOperationQueue;
	BOOL _topViewIsTransient;
	BOOL _navOperationQueueNeedsResume;
	BOOL _resetNavStackOnPush;
	id<FBAuthUIPresenterAnimationDelegate> _animationDelegate;
	UINavigationController* _navController;

}

@property (nonatomic,readonly) UINavigationController * navController;                                     //@synthesize navController=_navController - In the implementation block
@property (assign,nonatomic) BOOL topViewIsTransient;                                                      //@synthesize topViewIsTransient=_topViewIsTransient - In the implementation block
@property (assign,nonatomic) BOOL navOperationQueueNeedsResume;                                            //@synthesize navOperationQueueNeedsResume=_navOperationQueueNeedsResume - In the implementation block
@property (assign,nonatomic) BOOL resetNavStackOnPush;                                                     //@synthesize resetNavStackOnPush=_resetNavStackOnPush - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthUIPresenterAnimationDelegate> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)pushTransientViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)replaceTopViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTopViewControllerIsTransient:(BOOL)arg1 ;
-(void)replaceAllWithViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithPresentationBlock:(/*^block*/id)arg1 dismissalBlock:(/*^block*/id)arg2 modalPresentationBlock:(/*^block*/id)arg3 navigationControllerCreationBlock:(/*^block*/id)arg4 ;
-(void)_onQueuePushViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_onQueuePushTransientViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_onQueueSetTopViewControllerIsTransient:(BOOL)arg1 ;
-(void)_onQueueReplaceTopViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_onQueueReplaceAllWithViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_onQueuePopViewControllerAnimated:(BOOL)arg1 ;
-(void)_onQueuePopTransientViewControllerAnimated:(BOOL)arg1 ;
-(void)_onQueuePresentToastWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_onQueueResetStackOnNextPush;
-(void)_onQueueResetPresenterForReuse;
-(void)_resumeQueue;
-(void)_pauseQueueIfNeeded;
-(void)_pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setTopViewIsTransient:(BOOL)arg1 ;
-(BOOL)topViewIsTransient;
-(void)setResetNavStackOnPush:(BOOL)arg1 ;
-(void)_replaceTopViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_replaceAllWithViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_pushNonTransientViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_popViewControllerIfTop:(id)arg1 animated:(BOOL)arg2 ;
-(id)_newNavControllerWithRootViewController:(id)arg1 ;
-(void)setNavOperationQueueNeedsResume:(BOOL)arg1 ;
-(void)popTransientViewControllerAnimated:(BOOL)arg1 ;
-(void)presentToastWithTitle:(id)arg1 message:(id)arg2 ;
-(void)resetStackOnNextPush;
-(void)resetPresenterForReuse;
-(void)dismissPresenter;
-(id)initWithPresentationBlock:(/*^block*/id)arg1 modalPresentationBlock:(/*^block*/id)arg2 ;
-(BOOL)navOperationQueueNeedsResume;
-(BOOL)resetNavStackOnPush;
-(void)dealloc;
-(void)popViewControllerAnimated:(BOOL)arg1 ;
-(void)setAnimationDelegate:(id<FBAuthUIPresenterAnimationDelegate>)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(UINavigationController *)navController;
-(id<FBAuthUIPresenterAnimationDelegate>)animationDelegate;
@end

