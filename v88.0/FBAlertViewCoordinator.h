/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBAlertViewCoordinatorProtocol.h>

@class NSMutableArray, NSMapTable, UIViewController, NSString;

@interface FBAlertViewCoordinator : NSObject <UIAlertViewDelegate, FBAlertViewCoordinatorProtocol> {

	NSMutableArray* _activeAlertViews;
	NSMapTable* _alertViewsByToken;
	NSMapTable* _completionsByAlertView;
	UIViewController* _hackPresentingViewControllerForAlertControllerCompatibility;

}

@property (nonatomic,retain) UIViewController * hackPresentingViewControllerForAlertControllerCompatibility;              //@synthesize hackPresentingViewControllerForAlertControllerCompatibility=_hackPresentingViewControllerForAlertControllerCompatibility - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setAlertViewProviderBlock:(/*^block*/id)arg1 ;
+(id)sharedCoordinator;
-(id)alertViewWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(unsigned long long)showAlertViewWithTitle:(id)arg1 message:(id)arg2 configuration:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitles:(id)arg6 ;
-(id)alertViewWithContents:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 ;
-(id)alertViewWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitlesCollection:(id)arg5 ;
-(unsigned long long)showAlertViewWithTitle:(id)arg1 message:(id)arg2 configuration:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitlesCollection:(id)arg6 ;
-(void)cancelAndDismissAlertViewWithToken:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)isAlertViewShown;
-(id)_createAlertViewWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(void)_dispatchAndRemoveCompletionForAlertView:(id)arg1 buttonIndex:(long long)arg2 isTapped:(BOOL)arg3 ;
-(UIViewController *)hackPresentingViewControllerForAlertControllerCompatibility;
-(void)setHackPresentingViewControllerForAlertControllerCompatibility:(UIViewController *)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

