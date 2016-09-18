/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBUniversalFeedbackViewControllerDelegate.h>

@class FBUniversalFeedbackViewController, NSString, FBUserSession, UIViewController;

@interface FBUniversalFeedbackController : NSObject <FBUniversalFeedbackViewControllerDelegate> {

	FBUniversalFeedbackViewController* _viewController;
	long long _feedback;
	NSString* _explanationText;
	FBUserSession* _userSession;
	unsigned long long _experienceType;
	unsigned long long _deliveryType;
	UIViewController* _contentViewController;
	/*^block*/id _completionBlock;
	/*^block*/id _inputProvider;

}

@property (nonatomic,copy) id completionBlock;                                                  //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id inputProvider;                                                    //@synthesize inputProvider=_inputProvider - In the implementation block
@property (nonatomic,readonly) FBUniversalFeedbackViewController * viewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 contentViewController:(id)arg2 experienceType:(unsigned long long)arg3 deliveryType:(unsigned long long)arg4 inputProvider:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)universalFeedbackViewController:(id)arg1 didUpdateContentSize:(CGSize)arg2 ;
-(void)universalFeedbackViewController:(id)arg1 didReceiveFeedback:(long long)arg2 ;
-(void)universalFeedbackViewController:(id)arg1 didReceiveExplanation:(id)arg2 ;
-(void)universalFeedbackViewControllerDidFinish:(id)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(FBUniversalFeedbackViewController *)viewController;
-(id)inputData;
-(id)inputProvider;
-(void)setInputProvider:(id)arg1 ;
@end

