/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutFlowOtherButtonActionHandler.h>

@protocol FBPaymentsCheckoutOtherButtonHandlingDelegate;
@class FBUserSession, NSString;

@interface MNPaymentsPeerToPeerDeclineRequestActionButtonHandler : NSObject <FBPaymentsCheckoutFlowOtherButtonActionHandler> {

	FBUserSession* _session;
	NSString* _requestId;
	id<FBPaymentsCheckoutOtherButtonHandlingDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutOtherButtonHandlingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)otherButtonTitle;
-(void)handleDeclineRequestWithRequestId:(id)arg1 requesterFirstName:(id)arg2 navigationService:(id)arg3 ;
-(void)handleOtherButtonActionWithPresentingViewController:(id)arg1 paymentRecipient:(id)arg2 ;
-(void)_declinePaymentRequestWithRequestId:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_logDeclineEventWithEventName:(id)arg1 requestId:(id)arg2 ;
-(void)_handleSuccessWithRequestId:(id)arg1 ;
-(void)_handleFailureWithRequestId:(id)arg1 error:(id)arg2 presentingViewController:(id)arg3 ;
-(id)initWithSession:(id)arg1 requestId:(id)arg2 ;
-(void)setDelegate:(id<FBPaymentsCheckoutOtherButtonHandlingDelegate>)arg1 ;
-(id<FBPaymentsCheckoutOtherButtonHandlingDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end

