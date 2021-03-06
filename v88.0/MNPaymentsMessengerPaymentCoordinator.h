/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsMessengerPaymentDataFetcher.h>
#import <Messenger/MNPaymentsMessengerPaymentDataMutator.h>
#import <Messenger/MNPaymentsDataEntityCoordinatorListener.h>

@class MNPaymentsMessengerPaymentCoordinatorListenerAnnouncer, MNPaymentsDataEntityCoordinator, MNPaymentsMessengerPaymentLocalImp, NSString;

@interface MNPaymentsMessengerPaymentCoordinator : NSObject <MNPaymentsMessengerPaymentDataFetcher, MNPaymentsMessengerPaymentDataMutator, MNPaymentsDataEntityCoordinatorListener> {

	MNPaymentsMessengerPaymentCoordinatorListenerAnnouncer* _announcer;
	MNPaymentsDataEntityCoordinator* _dataEntityCoordinator;
	MNPaymentsMessengerPaymentLocalImp* _localImp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataFetcher;
-(id)transferForId:(id)arg1 ;
-(void)transferForId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFetchController:(id)arg1 persistentStoreCoordinator:(id)arg2 ;
-(id)dataMutator;
-(void)didUpdateDataEntity:(id)arg1 ;
-(void)addTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recentTransfersWithUserId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentTransfersWithMaxCount:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)recentTransfersWithMaxCount:(long long)arg1 beforeTime:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentTransfersWithUserId:(id)arg1 maxCount:(long long)arg2 beforeTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)recentTransfersFromSenderId:(id)arg1 withMaxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentTransfersFromSenderId:(id)arg1 withMaxCount:(long long)arg2 beforeTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)recentTransfersToRecipientId:(id)arg1 withMaxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentTransfersToRecipientId:(id)arg1 withMaxCount:(long long)arg2 beforeTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

