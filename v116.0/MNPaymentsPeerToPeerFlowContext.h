/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsPayableDataModel, FBPaymentsPeerToPeerSendFlowControllerDelegate, FBPaymentsCheckoutRequestHandling, MNPaymentsPeerToPeerFlowLogger, FBPaymentsCheckoutPlatformContextLoader;
@interface MNPaymentsPeerToPeerFlowContext : NSObject {

	id<FBPaymentsPayableDataModel> _payableDataModel;
	id<FBPaymentsPeerToPeerSendFlowControllerDelegate> _delegate;
	long long _dismissingStyle;
	id<FBPaymentsCheckoutRequestHandling> _requestHandler;
	id<MNPaymentsPeerToPeerFlowLogger> _checkoutFlowLogger;
	id<FBPaymentsCheckoutPlatformContextLoader> _checkoutContextLoader;

}

@property (nonatomic,readonly) id<FBPaymentsPayableDataModel> payableDataModel;                                 //@synthesize payableDataModel=_payableDataModel - In the implementation block
@property (nonatomic,__weak,readonly) id<FBPaymentsPeerToPeerSendFlowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long dismissingStyle;                                                       //@synthesize dismissingStyle=_dismissingStyle - In the implementation block
@property (nonatomic,readonly) id<FBPaymentsCheckoutRequestHandling> requestHandler;                            //@synthesize requestHandler=_requestHandler - In the implementation block
@property (nonatomic,readonly) id<MNPaymentsPeerToPeerFlowLogger> checkoutFlowLogger;                           //@synthesize checkoutFlowLogger=_checkoutFlowLogger - In the implementation block
@property (nonatomic,readonly) id<FBPaymentsCheckoutPlatformContextLoader> checkoutContextLoader;               //@synthesize checkoutContextLoader=_checkoutContextLoader - In the implementation block
-(long long)dismissingStyle;
-(id<MNPaymentsPeerToPeerFlowLogger>)checkoutFlowLogger;
-(id)initWithPayableDataModel:(id)arg1 delegate:(id)arg2 dismissingStyle:(long long)arg3 requestHandler:(id)arg4 checkoutFlowLogger:(id)arg5 checkoutContextLoader:(id)arg6 ;
-(id<FBPaymentsPayableDataModel>)payableDataModel;
-(id<FBPaymentsCheckoutPlatformContextLoader>)checkoutContextLoader;
-(id<FBPaymentsPeerToPeerSendFlowControllerDelegate>)delegate;
-(id<FBPaymentsCheckoutRequestHandling>)requestHandler;
@end

