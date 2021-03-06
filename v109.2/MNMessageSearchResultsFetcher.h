/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBGraphQLService, FBGraphQLServiceToken, NSObject;

@interface MNMessageSearchResultsFetcher : NSObject {

	FBGraphQLService* _graphQLService;
	FBGraphQLServiceToken* _graphQLRequest;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithGraphQLService:(id)arg1 queue:(id)arg2 ;
-(void)fetchMessageSearchResultsWithQuery:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_processParsedResponse:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_processResponseWithError:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)dealloc;
@end

