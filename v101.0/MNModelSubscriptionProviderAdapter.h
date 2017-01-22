/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNViewModelSubscriptionCoordinating.h>

@protocol OS_dispatch_queue;
@class MNModelSubscriptionProvider, MNViewModelSubscriptionAttributes, NSObject, NSMutableDictionary, NSString;

@interface MNModelSubscriptionProviderAdapter : NSObject <MNViewModelSubscriptionCoordinating> {

	MNModelSubscriptionProvider* _modelSubscriptionProvider;
	MNViewModelSubscriptionAttributes* _attributes;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _subscriptionIdToSubscriptionCancelableMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelSubscription:(id)arg1 ;
-(void)startSubscription:(id)arg1 forSubscriptionId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelAllSubscriptions;
-(id)initWithModelSubscriptionProvider:(id)arg1 attributes:(id)arg2 ;
-(id)attributes;
-(id)kind;
-(id)queue;
@end
