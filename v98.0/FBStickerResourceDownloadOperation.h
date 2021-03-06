/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBServiceTransactionMutating.h>

@protocol FBStickerResourceManager, FBNetworkDispatch, OS_dispatch_queue;
@class NSError, FBNetworkerRequest, NSURL, NSObject, NSData, NSString;

@interface FBStickerResourceDownloadOperation : NSOperation <FBNetworkerRequestDelegate, FBServiceTransactionMutating> {

	NSError* _error;
	FBNetworkerRequest* _resourceNetworkerRequest;
	id<FBStickerResourceManager> _resourceManager;
	NSURL* _url;
	id<FBNetworkDispatch> _networkDispatcher;
	unsigned long long _fbId;
	unsigned long long _resourceType;
	unsigned long long _stickerPackFbId;
	BOOL _ofOwnedStickerPack;
	double _requestBeginTime;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _operationExecuting;
	BOOL _operationFinished;
	NSData* _data;

}

@property (assign) BOOL operationExecuting;                         //@synthesize operationExecuting=_operationExecuting - In the implementation block
@property (assign) BOOL operationFinished;                          //@synthesize operationFinished=_operationFinished - In the implementation block
@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithStickerResourceManager:(id)arg1 networkDispatcher:(id)arg2 resourceURL:(id)arg3 fbId:(unsigned long long)arg4 resourceType:(unsigned long long)arg5 downloaderType:(unsigned long long)arg6 stickerPackFbId:(unsigned long long)arg7 ofOwnedStickerPack:(BOOL)arg8 priority:(long long)arg9 ;
-(void)changePriorityToNewPriority:(long long)arg1 ;
-(void)_startOperation;
-(void)_cancelOperation;
-(void)_startDownloadStickerImage;
-(BOOL)operationFinished;
-(void)_imageDownloadSucceededWithResult:(id)arg1 ;
-(void)_finishOperation;
-(void)setOperationFinished:(BOOL)arg1 ;
-(BOOL)isAsynchronous;
-(void)cancel;
-(NSData *)data;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(NSError *)error;
-(void)setOperationExecuting:(BOOL)arg1 ;
-(BOOL)operationExecuting;
@end

