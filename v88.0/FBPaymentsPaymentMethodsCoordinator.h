/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPaymentMethodsLocalDataMutator.h>
#import <Messenger/FBPaymentsDataLoadingControlling.h>
#import <Messenger/FBPaymentsPaymentMethodsDataMutator.h>

@protocol FBPaymentsPaymentMethodsDataLoader, FBPaymentsSupportedPaymentMethodOptionsProviding;
@class NSMutableDictionary, FBPaymentsPaymentMethodsModelController, FBPaymentsUpdateListenerAnnouncer, FBPaymentsPaymentMethodsFilter, NSString;

@interface FBPaymentsPaymentMethodsCoordinator : NSObject <FBPaymentsPaymentMethodsLocalDataMutator, FBPaymentsDataLoadingControlling, FBPaymentsPaymentMethodsDataMutator> {

	NSMutableDictionary* _mutatorsForPaymentMethodType;
	id<FBPaymentsPaymentMethodsDataLoader> _dataLoader;
	FBPaymentsPaymentMethodsModelController* _modelController;
	FBPaymentsUpdateListenerAnnouncer* _updateAnnouncer;
	long long _dataLoadingStatus;
	FBPaymentsPaymentMethodsFilter* _paymentMethodsFilter;
	id<FBPaymentsSupportedPaymentMethodOptionsProviding> _paymentMethodOptionsProvider;

}

@property (nonatomic,readonly) id<FBPaymentsPaymentMethodsLocalDataMutator> localDataMutator; 
@property (nonatomic,retain) id<FBPaymentsPaymentMethodsDataLoader> dataLoader;                                              //@synthesize dataLoader=_dataLoader - In the implementation block
@property (nonatomic,readonly) FBPaymentsPaymentMethodsFilter * paymentMethodsFilter;                                        //@synthesize paymentMethodsFilter=_paymentMethodsFilter - In the implementation block
@property (nonatomic,retain) id<FBPaymentsSupportedPaymentMethodOptionsProviding> paymentMethodOptionsProvider;              //@synthesize paymentMethodOptionsProvider=_paymentMethodOptionsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addUpdateListener:(id)arg1 ;
-(FBPaymentsPaymentMethodsFilter *)paymentMethodsFilter;
-(void)registerRemoteDataMutator:(id)arg1 forPaymentMethodTypes:(id)arg2 ;
-(void)setDataLoader:(id<FBPaymentsPaymentMethodsDataLoader>)arg1 ;
-(void)setPaymentMethodOptionsProvider:(id<FBPaymentsSupportedPaymentMethodOptionsProviding>)arg1 ;
-(id<FBPaymentsSupportedPaymentMethodOptionsProviding>)paymentMethodOptionsProvider;
-(void)loadPaymentMethodsInBackground:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addPaymentMethodWithCollectedData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removePaymentMethodLocally:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id<FBPaymentsPaymentMethodsLocalDataMutator>)localDataMutator;
-(void)removeUpdateListener:(id)arg1 ;
-(void)removePaymentMethod:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)dataLoadingStatus;
-(void)updatePaymentMethod:(id)arg1 collectedData:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_updateDataLoadingStatus:(long long)arg1 ;
-(void)_handleLoadedPaymentMethods:(id)arg1 error:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_mutatorForPaymentMethodType:(id)arg1 ;
-(void)_addOrUpdatePaymentMethod:(id)arg1 ;
-(void)_removePaymentMethod:(id)arg1 ;
-(void)_announceUpdate;
-(void)addOrUpdatePaymentMethodLocally:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)reloadPaymentMethodsLocally:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id<FBPaymentsPaymentMethodsDataLoader>)dataLoader;
-(id)init;
@end

