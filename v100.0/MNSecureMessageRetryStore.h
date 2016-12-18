/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MNSecureMessagingStore, NSObject, NSDictionary;

@interface MNSecureMessageRetryStore : NSObject {

	MNSecureMessagingStore* _store;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _cachedRetries;

}
-(id)removeRetryForMessageWithId:(id)arg1 ;
-(id)allRetries;
-(void)addRetry:(id)arg1 ;
-(id)initWithStore:(id)arg1 updateQueue:(id)arg2 ;
-(long long)retryStateForMessageWithId:(id)arg1 ;
-(id)_load;
-(void)_save:(id)arg1 ;
@end

