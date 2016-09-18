/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBServiceTransactionMutating;
@class FBGraphQLService, NSObject;

@interface MNMessagingRegionFetcher : NSObject {

	FBGraphQLService* _graphQLService;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	id<FBServiceTransactionMutating> _requestToken;

}
-(id)initWithGraphQLService:(id)arg1 ;
-(void)_processResponse:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_processError:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)fetchMessagingRegionWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
@end

