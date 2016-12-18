/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBImageDownloaderCancelationHandle.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL, FBScenePath, NSSet, NSString;

@interface FBImageDownload : NSObject <FBImageDownloaderCancelationHandle> {

	BOOL _completed;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _imageDecodeQueue;
	BOOL _needsMutex;
	mutex _mutex;
	BOOL _cancelled;
	NSURL* _URL;
	FBScenePath* _scenePath;
	long long _priority;
	unsigned long long _options;
	/*^block*/id _completionBlock;
	/*^block*/id _downloadProgressBlock;
	NSSet* _analyticsTags;

}

@property (nonatomic,copy,readonly) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                 //@synthesize scenePath=_scenePath - In the implementation block
@property (assign,nonatomic) long long priority;                        //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id completionBlock;                          //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id downloadProgressBlock;                    //@synthesize downloadProgressBlock=_downloadProgressBlock - In the implementation block
@property (nonatomic,copy,readonly) NSSet * analyticsTags;              //@synthesize analyticsTags=_analyticsTags - In the implementation block
@property (nonatomic,readonly) BOOL cancelled;                          //@synthesize cancelled=_cancelled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBScenePath *)scenePath;
-(NSSet *)analyticsTags;
-(void)completeWithImage:(id)arg1 type:(unsigned long long)arg2 error:(id)arg3 delegate:(id)arg4 ;
-(id)initWithURL:(id)arg1 scenePath:(id)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 callbackQueue:(id)arg5 downloadProgressBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 analyticsTags:(id)arg8 ;
-(void)cleanUpAfterCompletionOrCancelation;
-(void)dispatchBlockOnCallbackQueue:(/*^block*/id)arg1 ;
-(BOOL)decodeCachedImageIfNeeded:(id)arg1 ;
-(void)completeAndCleanupWithImage:(id)arg1 type:(unsigned long long)arg2 error:(id)arg3 delegate:(id)arg4 ;
-(id)finalCachedImageToBeUsedFromCachedImage:(id)arg1 ;
-(void)_executeLockedBlock:(/*^block*/id)arg1 ;
-(void)callDownloadProgressBlockWithProgress:(double)arg1 delegate:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)cancelled;
-(NSURL *)URL;
-(unsigned long long)options;
-(id)downloadProgressBlock;
-(void)setDownloadProgressBlock:(id)arg1 ;
@end

