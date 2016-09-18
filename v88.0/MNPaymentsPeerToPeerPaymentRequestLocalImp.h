/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsDataEntityDataFetcher.h>
#import <Messenger/MNPaymentsDataEntityDataMutator.h>
#import <Messenger/MNPaymentsPeerToPeerPaymentRequestDataFetcher.h>
#import <Messenger/MNPaymentsPeerToPeerPaymentRequestDataMutator.h>

@class MNPaymentsPersistentStoreCoordinator, NSString;

@interface MNPaymentsPeerToPeerPaymentRequestLocalImp : NSObject <MNPaymentsDataEntityDataFetcher, MNPaymentsDataEntityDataMutator, MNPaymentsPeerToPeerPaymentRequestDataFetcher, MNPaymentsPeerToPeerPaymentRequestDataMutator> {

	MNPaymentsPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)paymentRequestForId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recentInitedPaymentRequestCountWithRequesteeId:(id)arg1 groupThreadId:(id)arg2 maxCount:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)recentInitedPaymentRequestsWithRequesterId:(id)arg1 requesteeId:(id)arg2 maxCount:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)getInitedPaymentRequestCountWithRequesteeId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)dataEntityForId:(id)arg1 ;
-(void)dataEntityForId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addDataEntity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateDataEntity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)paymentRequestForId:(id)arg1 ;
-(void)recentIncompletedPaymentRequestsInOrderWithRequesterId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentIncompletedPaymentRequestsInOrderWithRequesteeId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 ;
-(void)recentPaymentRequestsWithMaxCount:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)recentPaymentRequestsWithRequesterId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentPaymentRequestsWithRequesteeId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

