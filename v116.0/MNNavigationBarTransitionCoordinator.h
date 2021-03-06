/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIViewControllerTransitionCoordinatorContext;
@class UINavigationController, UIViewController;

@interface MNNavigationBarTransitionCoordinator : NSObject {

	UINavigationController* _navigationController;
	UIViewController* _appearingViewController;
	id<UIViewControllerTransitionCoordinatorContext> _context;
	unsigned long long _transition;

}
-(void)_didChange:(id)arg1 ;
-(void)_showTopTabBarWithNavigationController:(id)arg1 ;
-(void)_hideTopTabBarWithNavigationController:(id)arg1 ;
-(id)initWithNavigationController:(id)arg1 appearingViewController:(id)arg2 transition:(unsigned long long)arg3 ;
-(void)startTransition;
-(void)dealloc;
@end

