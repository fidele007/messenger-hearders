/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCancelable;
@interface MNThreadViewModelLoaderRequestBehavior : NSObject {

	unsigned long long _requestId;
	/*^block*/id _successBlock;
	/*^block*/id _progressBlock;
	/*^block*/id _failureBlock;
	id<FBCancelable> _threadViewModelCreationCancelToken;

}

@property (nonatomic,readonly) unsigned long long requestId;                                   //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy,readonly) id successBlock;                                           //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy,readonly) id progressBlock;                                          //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy,readonly) id failureBlock;                                           //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,retain) id<FBCancelable> threadViewModelCreationCancelToken;              //@synthesize threadViewModelCreationCancelToken=_threadViewModelCreationCancelToken - In the implementation block
-(id)initWithRequestId:(unsigned long long)arg1 successBlock:(/*^block*/id)arg2 progressBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(id<FBCancelable>)threadViewModelCreationCancelToken;
-(void)setThreadViewModelCreationCancelToken:(id<FBCancelable>)arg1 ;
-(id)successBlock;
-(unsigned long long)requestId;
-(id)progressBlock;
-(id)failureBlock;
@end

