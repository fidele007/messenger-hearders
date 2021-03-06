/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBReportingFlowCoordinator, FBReportingFlowResponseModel, FBReportingFlowMessageView, NSString;

@interface FBReportingFlowMessageViewController : UIViewController {

	FBReportingFlowCoordinator* _coordinator;
	FBReportingFlowResponseModel* _responseModel;
	FBReportingFlowMessageView* _messageView;
	NSString* _targetFBID;

}
-(id)initWithCoordinator:(id)arg1 responseModel:(id)arg2 ;
-(void)recepientDidChange:(id)arg1 fbid:(id)arg2 ;
-(void)sendButtonWasPressed;
-(void)recepientButtonWasPressed;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

