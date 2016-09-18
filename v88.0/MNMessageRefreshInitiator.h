/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageRefreshNetworkRunnerListening.h>

@protocol MNMessageRefreshNetworkRunnerListening, OS_dispatch_queue;
@class MNMessageRefreshStateCache, MNMessageRefreshNetworkRunner, NSObject, NSMutableDictionary, NSString;

@interface MNMessageRefreshInitiator : NSObject <MNMessageRefreshNetworkRunnerListening> {

	MNMessageRefreshStateCache* _refreshStateCache;
	MNMessageRefreshNetworkRunner* _networkRunner;
	id<MNMessageRefreshNetworkRunnerListening> _networkRunnerListener;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _currentlyFetchingMessageIdsByThreadKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageRefreshNetworkRunnerDidFetchMesssage:(id)arg1 ;
-(void)messageRefreshNetworkRunnerDidFailToFetchMessageWithId:(id)arg1 onThreadWithKey:(id)arg2 dueToError:(id)arg3 ;
-(void)_cleanUpRequestForMessageWithId:(id)arg1 onThreadWithKey:(id)arg2 ;
-(id)initWithMessageRefreshStateCache:(id)arg1 networkRunner:(id)arg2 networkRunnerListener:(id)arg3 queue:(id)arg4 ;
-(void)initiateRefreshIfNeededForMessagesIds:(id)arg1 onThreadWithKey:(id)arg2 ;
@end

