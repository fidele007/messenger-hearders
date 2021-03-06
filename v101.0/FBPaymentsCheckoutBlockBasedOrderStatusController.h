/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutOrderStatusControlling.h>

@protocol FBPaymentsCheckoutOrderStatusControllingDelegate, FBPaymentsCheckoutOrderStatusCollectedDataDelegate;
@class NSString;

@interface FBPaymentsCheckoutBlockBasedOrderStatusController : NSObject <FBPaymentsCheckoutOrderStatusControlling> {

	/*^block*/id _contentConfigurationProvidingBlock;
	id<FBPaymentsCheckoutOrderStatusControllingDelegate> _orderStatusControllingDelegate;
	id<FBPaymentsCheckoutOrderStatusCollectedDataDelegate> _orderStatusCollectedDataDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutOrderStatusControllingDelegate> orderStatusControllingDelegate;                  //@synthesize orderStatusControllingDelegate=_orderStatusControllingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutOrderStatusCollectedDataDelegate> orderStatusCollectedDataDelegate;              //@synthesize orderStatusCollectedDataDelegate=_orderStatusCollectedDataDelegate - In the implementation block
+(id)announcerIdentifier;
-(void)addUpdateListener:(id)arg1 ;
-(id)initWithContentConfigurationProvidingBlock:(/*^block*/id)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(id)contentConfiguration;
-(void)setOrderStatusCollectedDataDelegate:(id<FBPaymentsCheckoutOrderStatusCollectedDataDelegate>)arg1 ;
-(id<FBPaymentsCheckoutOrderStatusControllingDelegate>)orderStatusControllingDelegate;
-(void)setOrderStatusControllingDelegate:(id<FBPaymentsCheckoutOrderStatusControllingDelegate>)arg1 ;
-(id<FBPaymentsCheckoutOrderStatusCollectedDataDelegate>)orderStatusCollectedDataDelegate;
-(long long)dataLoadingStatus;
@end

