/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Messenger/FBPaymentsCheckoutConfirmationActionDelegate.h>
#import <Messenger/FBPaymentsNavigationDelegate.h>

@protocol FBPaymentsCheckoutResponse, FBPaymentsCheckoutConfirmationActionTableViewControllerDelegate;
@class NSArray, FBPaymentsCheckoutFlowCollectedData, NSString;

@interface FBPaymentsCheckoutConfirmationActionTableViewController : UITableViewController <FBPaymentsCheckoutConfirmationActionDelegate, FBPaymentsNavigationDelegate> {

	NSArray* _confirmationActions;
	id<FBPaymentsCheckoutResponse> _checkoutResponse;
	FBPaymentsCheckoutFlowCollectedData* _checkoutFlowCollectedData;
	id<FBPaymentsCheckoutConfirmationActionTableViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutConfirmationActionTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newNavigationController;
-(void)checkoutConfirmationActionDidUpdate:(id)arg1 ;
-(void)setConfirmationActions:(id)arg1 withCheckoutResponse:(id)arg2 checkoutFlowCollectedData:(id)arg3 ;
-(void)handleFollowUpActions;
-(void)setDelegate:(id<FBPaymentsCheckoutConfirmationActionTableViewControllerDelegate>)arg1 ;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBPaymentsCheckoutConfirmationActionTableViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(id)viewControllerForPresenting;
@end

