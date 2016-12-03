/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNThreadViewModelLoaderRequestBehavior : NSObject {

	unsigned long long _requestId;
	/*^block*/id _successBlock;
	/*^block*/id _progressBlock;
	/*^block*/id _failureBlock;

}

@property (nonatomic,readonly) unsigned long long requestId;              //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy,readonly) id successBlock;                      //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy,readonly) id progressBlock;                     //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy,readonly) id failureBlock;                      //@synthesize failureBlock=_failureBlock - In the implementation block
-(id)successBlock;
-(id)initWithRequestId:(unsigned long long)arg1 successBlock:(/*^block*/id)arg2 progressBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(unsigned long long)requestId;
-(id)progressBlock;
-(id)failureBlock;
@end
