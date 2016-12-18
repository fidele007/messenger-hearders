/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNModelSubscriptionProvider.h>
#import <Messenger/MNSingleModelLoadingDelegate.h>
#import <Messenger/MNSingleModelRequestQueuingStrategy.h>

@protocol MNSingleModelLoading;
@class MNSingleModelSubscriptionCallbackHandler, NSCountedSet, NSString;

@interface MNSingleModelSubscriptionProvider : MNModelSubscriptionProvider <MNSingleModelLoadingDelegate, MNSingleModelRequestQueuingStrategy> {

	id<MNSingleModelLoading> _loader;
	MNSingleModelSubscriptionCallbackHandler* _callbackHandler;
	NSCountedSet* _keyToLoadingCountMap;
	atomic<long long> _currentSubscriptionId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelForKey:(id)arg1 ;
-(id)subscriptionForKey:(id)arg1 ;
-(void)setNeedsReloadForKey:(id)arg1 ;
-(void)loadNowForKey:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)enqueueRequest:(id)arg1 forKey:(id)arg2 ;
-(void)dequeueRequestForKey:(id)arg1 inSameQueueAsRequest:(id)arg2 ;
-(id)frontRequestForKey:(id)arg1 inSameQueueAsRequest:(id)arg2 ;
-(BOOL)isEmptyForKey:(id)arg1 ;
-(void)clearForKey:(id)arg1 ;
-(id)initWithKind:(id)arg1 initialBehavior:(long long)arg2 loader:(id)arg3 monitor:(id)arg4 backfeeder:(id)arg5 queue:(id)arg6 ;
-(void)invalidateForKey:(id)arg1 ;
@end

