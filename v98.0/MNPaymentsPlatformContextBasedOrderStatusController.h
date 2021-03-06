/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutOrderStatusControlling.h>
#import <Messenger/FBPaymentsPurchaseInfoShippingOptionProviding.h>

@protocol FBPaymentsCheckoutOrderStatusControllingDelegate;
@class FBUserSession, NSString, FBMemPeerToPeerPlatformContext, FBGraphQLMutationHandle, FBPaymentsUpdateListenerAnnouncer, FBMemPeerToPeerPlatformProductItem;

@interface MNPaymentsPlatformContextBasedOrderStatusController : NSObject <FBPaymentsCheckoutOrderStatusControlling, FBPaymentsPurchaseInfoShippingOptionProviding> {

	FBUserSession* _session;
	NSString* _itemId;
	NSString* _platformContextId;
	/*^block*/id _contentConfigurationProvidingBlock;
	long long _dataLoadingStatus;
	long long _lastNonLoadingDataLoadingStatus;
	FBMemPeerToPeerPlatformContext* _memPlatformContext;
	NSString* _updatingAddressGraphQLID;
	FBGraphQLMutationHandle* _ongoingAddressMutation;
	FBPaymentsUpdateListenerAnnouncer* _updateAnnouncer;
	id<FBPaymentsCheckoutOrderStatusControllingDelegate> _orderStatusControllingDelegate;

}

@property (nonatomic,copy,readonly) FBMemPeerToPeerPlatformProductItem * productItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutOrderStatusControllingDelegate> orderStatusControllingDelegate;              //@synthesize orderStatusControllingDelegate=_orderStatusControllingDelegate - In the implementation block
+(id)announcerIdentifier;
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)addUpdateListener:(id)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(id)contentConfiguration;
-(id)initWithSession:(id)arg1 itemId:(id)arg2 contentConfigurationProvidingBlock:(/*^block*/id)arg3 ;
-(id)shippingOptions;
-(id)orderData;
-(id)initWithSession:(id)arg1 contentConfigurationProvidingBlock:(/*^block*/id)arg2 ;
-(void)_cancelOngoingMutation;
-(void)_handlePlatformContextUpdateWithPlatformContext:(id)arg1 ;
-(void)_cleanupMutation;
-(void)_restoreDataLoadingStatus;
-(void)updateOrderStatus;
-(id<FBPaymentsCheckoutOrderStatusControllingDelegate>)orderStatusControllingDelegate;
-(void)setOrderStatusControllingDelegate:(id<FBPaymentsCheckoutOrderStatusControllingDelegate>)arg1 ;
-(long long)dataLoadingStatus;
-(BOOL)isShippingOptionApplicable;
-(id)userFacingReasonForNotApplicableShippingOptions;
-(id)initWithSession:(id)arg1 platformContextId:(id)arg2 contentConfigurationProvidingBlock:(/*^block*/id)arg3 ;
-(void)_handleFailureWithError:(id)arg1 ;
-(FBMemPeerToPeerPlatformProductItem *)productItem;
-(void)setUp;
@end

