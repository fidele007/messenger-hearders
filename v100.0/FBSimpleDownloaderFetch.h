/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSimpleDownloaderFetch.h>
@class NSString, NSURL;


@protocol FBSimpleDownloaderFetch <NSObject>
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSURL * remoteURL; 
@property (nonatomic,readonly) BOOL didDownload; 
@property (nonatomic,readonly) BOOL isCancelled; 
@required
-(BOOL)didDownload;
-(BOOL)isCancelled;
-(NSString *)uniqueIdentifier;
-(NSURL *)remoteURL;

@end


@protocol OS_dispatch_queue, FBHttpRequestToken;
@class NSString, NSURL, NSObject;

@interface FBSimpleDownloaderFetch : NSObject <FBSimpleDownloaderFetch> {

	BOOL _isCancelled;
	NSURL* _remoteURL;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	id<FBHttpRequestToken> _networkDispatch;

}

@property (nonatomic,readonly) NSURL * remoteURL;                                     //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,copy) id progressBlock;                                          //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) id<FBHttpRequestToken> networkDispatch;                  //@synthesize networkDispatch=_networkDispatch - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled;                                      //@synthesize isCancelled=_isCancelled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) BOOL didDownload; 
-(BOOL)didDownload;
-(id<FBHttpRequestToken>)networkDispatch;
-(id)initWithRemoteURL:(id)arg1 callbackQueue:(id)arg2 progressBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setNetworkDispatch:(id<FBHttpRequestToken>)arg1 ;
-(void)cancel;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)isCancelled;
-(NSString *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSURL *)remoteURL;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
@end

