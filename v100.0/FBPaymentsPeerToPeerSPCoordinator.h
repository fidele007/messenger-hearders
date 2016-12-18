/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSyncProtocolPluginService, FBPaymentsPeerToPeerTransferOfflineDeltaHandler;
@class FBPaymentsPeerToPeerSPSnapshotController, FBPaymentsPeerToPeerSPSequenceIdProvider, FBPaymentsPeerToPeerSPSyncTokenProvider, FBPaymentsPeerToPeerSPErrorCodeProvider, FBPaymentsPeerToPeerSPDeltaHandlerMap, FBPaymentsPeerToPeerSPPayloadHandler;

@interface FBPaymentsPeerToPeerSPCoordinator : NSObject {

	id<MNSyncProtocolPluginService> _syncProtocolPluginService;
	id _syncProtocolPluginServiceToken;
	FBPaymentsPeerToPeerSPSnapshotController* _snapshotController;
	FBPaymentsPeerToPeerSPSequenceIdProvider* _sequenceIdProvider;
	FBPaymentsPeerToPeerSPSyncTokenProvider* _syncTokenProvider;
	FBPaymentsPeerToPeerSPErrorCodeProvider* _errorCodeProvider;
	FBPaymentsPeerToPeerSPDeltaHandlerMap* _deltaHandlerMap;
	FBPaymentsPeerToPeerSPPayloadHandler* _payloadHandler;
	id<FBPaymentsPeerToPeerTransferOfflineDeltaHandler> _transferOfflineDeltaHandler;

}
-(id)initWithUserSession:(id)arg1 syncProtocolPluginService:(id)arg2 persistentStoreCoordinator:(id)arg3 fetchController:(id)arg4 paymentPinController:(id)arg5 paymentTransfersDataFetcher:(id)arg6 paymentTransfersDataMutator:(id)arg7 paymentRequestDataFetcher:(id)arg8 paymentRequestDataMutator:(id)arg9 featureGatingController:(id)arg10 transferOfflineDeltaHandler:(id)arg11 platformContextDataFetcher:(id)arg12 platformContextDataMutator:(id)arg13 paymentMethodsCoordinator:(id)arg14 defaultCardManager:(id)arg15 ;
-(void)_stopService;
-(void)_startService;
-(void)_resetService;
-(void)dealloc;
@end

