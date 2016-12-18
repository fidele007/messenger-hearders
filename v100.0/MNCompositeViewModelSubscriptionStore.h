/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MNCompositeViewModelSubscriptionStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _subscriptionIdToSubscriptionMap;
	NSMutableDictionary* _keyToSubscriptionIdsMap;
	NSMutableDictionary* _keyToChildSubcriptionIdsMap;
	NSMutableDictionary* _subscriptionIdToLastSentViewModelElementMap;

}
-(void)beginSubscription:(id)arg1 forSubscriptionId:(id)arg2 ;
-(void)endSubscription:(id)arg1 ;
-(id)beginChildSubscription:(id)arg1 forParentViewModelElementKey:(id)arg2 ;
-(void)endChildSubscription:(id)arg1 forParentViewModelElementKey:(id)arg2 ;
-(void)endChildSubscriptionsForParentViewModelElementKey:(id)arg1 ;
-(id)subscriptionForSubscriptionId:(id)arg1 ;
-(id)subscriptionIdsForViewModelElementKey:(id)arg1 ;
-(id)allSubscriptionIds;
-(id)childSubscriptionIdsForParentViewModelElementKey:(id)arg1 ;
-(void)setLastSentViewModelElement:(id)arg1 forSubscriptionId:(id)arg2 ;
-(id)lastSentViewModelElementForSubscriptionId:(id)arg1 ;
-(id)_getOrCreateSubscriptionIdsForViewModelElementKey:(id)arg1 ;
-(id)_getOrCreateChildSubscriptionsIdsForViewModelElementKey:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
@end
