/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLFragmentService, FBServiceTransactionMutating, MNAuthenticationManager, OS_dispatch_queue;
@class MNGraphQLQueryConfigGenerator, NSObject;

@interface MNTopGroupListFetcher : NSObject {

	id<FBGraphQLFragmentService> _graphQLFragmentService;
	id<FBServiceTransactionMutating> _graphQLRequest;
	MNGraphQLQueryConfigGenerator* _queryConfigGenerator;
	id<MNAuthenticationManager> _authManager;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_configureGraphQLServiceConfig:(id)arg1 ;
-(void)_processParsedResponse:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_processResponseWithError:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(id)initWithGraphQLFragmentService:(id)arg1 queryConfigGenerator:(id)arg2 authManager:(id)arg3 queue:(id)arg4 ;
-(void)fetchTopGroupThreadsListWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)cancel;
@end
