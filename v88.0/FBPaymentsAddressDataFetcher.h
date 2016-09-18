/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBPaymentsAddressDataFetcherDelegate;
@class FBUserSession, FBMemMailingAddress;

@interface FBPaymentsAddressDataFetcher : NSObject {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _ongoingTransaction;
	FBMemMailingAddress* _defaultAddress;
	id<FBPaymentsAddressDataFetcherDelegate> _delegate;

}

@property (nonatomic,readonly) FBMemMailingAddress * defaultAddress;                                //@synthesize defaultAddress=_defaultAddress - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsAddressDataFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_cancelDownloadRequest;
-(void)loadDefaultAddressWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)loadAddresses;
-(void)_performDownloadRequest;
-(void)_downloadDefaultAddressWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_processDownloadedResponse:(id)arg1 withDefaultAddressCompletionBlock:(/*^block*/id)arg2 ;
-(void)_processDownloadedResponse:(id)arg1 ;
-(void)_handlerError:(id)arg1 ;
-(id)_parseAndUpdateDefaultAddressWith:(id)arg1 ;
-(FBMemMailingAddress *)defaultAddress;
-(void)setDelegate:(id<FBPaymentsAddressDataFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPaymentsAddressDataFetcherDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end

