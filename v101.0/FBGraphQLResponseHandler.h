/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBResponseHandling.h>

@protocol FBGraphQLObjectFactory, FBRequest, FBResponseHandlerDelegate;
@class FBGraphQLClassicStreamingParser, NSHTTPURLResponse, FBAnalyticsPerfLogger, NSSet, FBGraphQLQuery, NSString;

@interface FBGraphQLResponseHandler : NSObject <FBResponseHandling> {

	FBGraphQLClassicStreamingParser* _parser;
	NSHTTPURLResponse* _HTTPURLResponse;
	id<FBGraphQLObjectFactory> _objectFactory;
	FBAnalyticsPerfLogger* _perfLogger;
	double _start;
	int _dataSize;
	NSSet* _contentTypes;
	FBGraphQLQuery* _graphQLQuery;
	unsigned long long _responseCount;
	id<FBRequest> _request;
	id<FBResponseHandlerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBRequest> request;                                    //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<FBResponseHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultContentTypes;
-(id)initWithRequest:(id)arg1 HTTPURLResponse:(id)arg2 acceptedContentTypes:(id)arg3 graphQLQuery:(id)arg4 objectFactory:(id)arg5 perfLogger:(id)arg6 ;
-(void)_didProcessResponse:(id)arg1 ;
-(void)_didHandleError:(id)arg1 ;
-(void)logParsingWithStatus:(id)arg1 ;
-(id)initWithRequest:(id)arg1 HTTPURLResponse:(id)arg2 graphQLQuery:(id)arg3 objectFactory:(id)arg4 ;
-(void)setDelegate:(id<FBResponseHandlerDelegate>)arg1 ;
-(id<FBResponseHandlerDelegate>)delegate;
-(id<FBRequest>)request;
-(void)close;
-(void)open;
-(void)handleData:(id)arg1 ;
-(void)abort;
@end
