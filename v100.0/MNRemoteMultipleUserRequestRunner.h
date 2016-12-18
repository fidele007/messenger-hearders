/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMultipleUserRequestRunning.h>

@protocol MNMultipleUserRequestRunning;
@class FBNetworkActivityManager, MNUserNetworkRequestingListenerFactory, NSHashTable, NSString;

@interface MNRemoteMultipleUserRequestRunner : NSObject <MNMultipleUserRequestRunning> {

	FBNetworkActivityManager* _networkActivityManager;
	/*^block*/id _userFetcherCreationBlock;
	MNUserNetworkRequestingListenerFactory* _listenerFactory;
	id<MNMultipleUserRequestRunning> _nextRunner;
	NSHashTable* _pendingFetchers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleMultipleUserRequest:(id)arg1 currentPendingResult:(id)arg2 listener:(id)arg3 ;
-(void)_processResultForRequest:(unsigned long long)arg1 listener:(id)arg2 usersByUserId:(id)arg3 pendingResponse:(id)arg4 loadingIndicatorKey:(id)arg5 fetcher:(id)arg6 didFail:(BOOL)arg7 error:(id)arg8 ;
-(id)initWithNetworkActivityManager:(id)arg1 userFetcherCreationBlock:(/*^block*/id)arg2 nextRunner:(id)arg3 listenerFactory:(id)arg4 ;
@end

