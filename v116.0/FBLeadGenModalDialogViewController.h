/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBWebViewContainerControllerDelegate.h>

@protocol FBNavigationCoordinator;
@class NSArray, FBLeadGenModalDialogContentViewController, FBUserSession, FBLeadGenDialogStateTracker, UIView, NSString;

@interface FBLeadGenModalDialogViewController : UIViewController <FBWebViewContainerControllerDelegate> {

	NSArray* _trackingCodes;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBLeadGenModalDialogContentViewController* _contentVC;
	FBUserSession* _userSession;
	BOOL _hasCustomDisclaimer;
	FBLeadGenDialogStateTracker* _leadGenDialogStateTracker;
	unsigned long long _totalPageNumber;
	UIView* _overlayView;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;                                               //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) FBLeadGenModalDialogContentViewController * contentVC; 
@property (nonatomic,__weak,readonly) id<FBIntentHandler> intentHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBIntentHandler>)intentHandler;
-(void)dismissWebViewContainerController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentSplitFlowWithConfig:(FBLeadGenSplitFlowWebViewConfig)arg1 toolbox:(id)arg2 ;
-(id)initWithContentView:(id)arg1 trackingCodes:(id)arg2 navigationCoordinator:(id)arg3 userSession:(id)arg4 hasCustomDisclaimer:(BOOL)arg5 leadGenStateTracker:(id)arg6 totalPageNumber:(unsigned long long)arg7 ;
-(void)presentModal;
-(void)_logCommonForDismissPopover;
-(BOOL)_isOnConfirmationPage;
-(void)_logLeadGenEvent:(id)arg1 ;
-(FBLeadGenModalDialogContentViewController *)contentVC;
-(void)handleURLIntentTarget:(id)arg1 ;
-(void)userDidTapTextField:(id)arg1 ;
-(UIView *)contentView;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)stopSpinner;
-(void)showSpinner;
@end

