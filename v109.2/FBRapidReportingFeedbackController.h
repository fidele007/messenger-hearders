/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/CKComponentProvider.h>
#import <FBSharedFramework/CKComponentSizeRangeProviding.h>
#import <Messenger/CKComponentHostingViewDelegate.h>
#import <Messenger/FBUniversalFeedbackViewControllerDelegate.h>

@class FBUniversalFeedbackViewController, NSString, FBUserSession, CKComponentHostingView;

@interface FBRapidReportingFeedbackController : UIViewController <CKComponentProvider, CKComponentSizeRangeProviding, CKComponentHostingViewDelegate, FBUniversalFeedbackViewControllerDelegate> {

	FBUniversalFeedbackViewController* _feedbackViewController;
	long long _receivedFeedback;
	NSString* _explanationText;
	FBUserSession* _session;
	NSString* _promptID;
	CKComponentHostingView* _componentView;
	CGSize _feedbackSize;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)cancelUF:(id)arg1 ;
-(void)sendUF:(id)arg1 ;
-(void)universalFeedbackViewController:(id)arg1 didUpdateContentSize:(CGSize)arg2 ;
-(void)universalFeedbackViewController:(id)arg1 didReceiveFeedback:(long long)arg2 ;
-(void)universalFeedbackViewController:(id)arg1 didReceiveExplanation:(id)arg2 ;
-(void)universalFeedbackViewControllerDidFinish:(id)arg1 ;
-(id)initWithReportingPromptID:(id)arg1 session:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CKSizeRange)sizeRangeForBoundingSize:(CGSize)arg1 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)viewDidLoad;
-(void)_updateLayout;
@end

