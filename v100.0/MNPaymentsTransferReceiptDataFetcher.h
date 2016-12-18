/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerFetchControllerListener.h>
#import <Messenger/MNPaymentsMessengerPaymentCoordinatorListener.h>
#import <Messenger/MNPaymentsTransferReceiptDataFetcherExtensionDelegate.h>
#import <Messenger/MNPaymentsActivityDetailsLoader.h>

@protocol FBQueriedMessengerPaymentFieldsProtocol, MNPaymentsTransferReceiptDataFetcherExtension, MNPaymentsActivityDetailsLoaderDelegate;
@class NSString, FBMemModelObject, FBMemPeerToPeerPaymentMethod, FBMUser, FBPaymentsPeerToPeerFetchController, FBPaymentsPeerToPeerContactsService, MNPaymentsMessengerPaymentCoordinator, FBGraphQLService, FBUserSession, NSDictionary, FBExponentialBackoffTimer;

@interface MNPaymentsTransferReceiptDataFetcher : NSObject <FBPaymentsPeerToPeerFetchControllerListener, MNPaymentsMessengerPaymentCoordinatorListener, MNPaymentsTransferReceiptDataFetcherExtensionDelegate, MNPaymentsActivityDetailsLoader> {

	NSString* _paymentId;
	FBMemModelObject*<FBQueriedMessengerPaymentFieldsProtocol> _messengerPayment;
	FBMemPeerToPeerPaymentMethod* _paymentMethod;
	FBMUser* _sender;
	FBMUser* _receiver;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	FBPaymentsPeerToPeerContactsService* _contactsService;
	MNPaymentsMessengerPaymentCoordinator* _transferCoordinator;
	FBGraphQLService* _graphQLService;
	FBUserSession* _session;
	NSDictionary* _dataFetcherExtensionFactories;
	id<MNPaymentsTransferReceiptDataFetcherExtension> _dataFetcherExtension;
	FBExponentialBackoffTimer* _paymentStatusBackoffTimer;
	long long _paymentStatusRetryCounter;
	id _paymentMethodFetchToken;
	id _paymentStatusFetchToken;
	id<MNPaymentsActivityDetailsLoaderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNPaymentsActivityDetailsLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)fetchController:(id)arg1 didFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 response:(id)arg5 date:(id)arg6 ;
-(void)fetchController:(id)arg1 didFailToFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 error:(id)arg5 ;
-(void)didUpdateTransfer:(id)arg1 ;
-(void)loadActivityDetails;
-(void)_resetPaymentStatusBackoffTimer;
-(void)_resetPaymentStatusRetryCounter;
-(void)_prepareMessengerPayment;
-(void)_fetchWithMessengerPayment:(id)arg1 ;
-(id)_getStyleIdentifer:(id)arg1 ;
-(void)_updateMessengerPayment:(id)arg1 ;
-(void)_updateDataFetcherExtensionWithMessengerPayment:(id)arg1 ;
-(void)_fetchActorsForMessengerPayment:(id)arg1 ;
-(void)_fetchPaymentMethodForMessengerPayment:(id)arg1 ;
-(void)_fetchTransferStatusForMessengerPaymentNow:(id)arg1 ;
-(void)_updateWithSender:(id)arg1 withReceiver:(id)arg2 ;
-(void)_handleDownloadedResponse:(id)arg1 dataTypes:(unsigned long long)arg2 withError:(id)arg3 ;
-(void)_retryBackoffFetchTransferStatusForMessengerPayment:(id)arg1 ;
-(void)_updatePaymentMethod:(id)arg1 ;
-(void)transferDataFetcherExtension:(id)arg1 didFetchContent:(id)arg2 ;
-(id)initWithSession:(id)arg1 messengerPaymentId:(id)arg2 transferCoordinator:(id)arg3 fetchController:(id)arg4 contactsService:(id)arg5 dataFetcherExtensionFactories:(id)arg6 ;
-(void)cancel;
-(void)setDelegate:(id<MNPaymentsActivityDetailsLoaderDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPaymentsActivityDetailsLoaderDelegate>)delegate;
@end

