/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol FBNetworkDispatch, FBServerGroupsFetcherDelegate;
@class FBSimpleNetworkerRequest, FBContactSearchQuery, NSString;

@interface FBServerGroupsSearchFetcher : NSObject <FBNetworkerRequestDelegate> {

	FBSimpleNetworkerRequest* _networkRequest;
	id<FBNetworkDispatch> _networkDispatcher;
	FBContactSearchQuery* _query;
	unsigned long long _resultsLimit;
	NSString* _viewerFbId;
	id<FBServerGroupsFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBServerGroupsFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithNetworkDispatcher:(id)arg1 query:(id)arg2 resultsLimit:(unsigned long long)arg3 viewerFbId:(id)arg4 ;
-(void)cancel;
-(void)setDelegate:(id<FBServerGroupsFetcherDelegate>)arg1 ;
-(id<FBServerGroupsFetcherDelegate>)delegate;
-(void)fetch;
-(void)_parseResponse:(id)arg1 ;
@end

