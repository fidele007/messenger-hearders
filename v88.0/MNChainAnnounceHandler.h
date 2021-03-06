/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNChainRequestReceiving.h>
#import <Messenger/MNChainRequestForwarding.h>
#import <Messenger/MNChainResponsePropagating.h>

@protocol MNChainRequestHandling, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface MNChainAnnounceHandler : NSObject <MNChainRequestReceiving, MNChainRequestForwarding, MNChainResponsePropagating> {

	id<MNChainRequestHandling> _nextHandler;
	NSObject*<OS_dispatch_queue> _queue;
	long long _sourceIdentifier;
	NSMutableDictionary* _requestKeyToRequestStateMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleMessageFetchRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleMessageBatchRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleBatchSecureAndSyncedThreadRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleThreadListRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleJointThreadListRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleSecureThreadRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleJointRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleBatchThreadSummaryRequest:(id)arg1 listener:(id)arg2 ;
-(void)_handleChainRequest:(id)arg1 ;
-(void)_cleanupRequestForKey:(NSNumber*)arg1 ;
-(void)chainRequestId:(unsigned long long)arg1 failedWithError:(id)arg2 ;
-(void)longOperationDidBeginForChainRequestId:(unsigned long long)arg1 sourceIdentifier:(long long)arg2 ;
-(void)chainRequestId:(unsigned long long)arg1 didUpdateResponse:(id)arg2 ;
-(void)chainRequestId:(unsigned long long)arg1 wasHandled:(id)arg2 ;
-(void)configureWithNextChainHandler:(id)arg1 ;
-(id)initWithSourceIdentifier:(long long)arg1 queue:(id)arg2 ;
@end

