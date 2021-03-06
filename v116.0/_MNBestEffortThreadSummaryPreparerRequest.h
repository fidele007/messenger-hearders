/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:03 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, MNBatchThreadSummaryResponse;

@interface _MNBestEffortThreadSummaryPreparerRequest : NSObject {

	/*^block*/id _completionBlock;
	NSSet* _threadKeysRequested;
	MNBatchThreadSummaryResponse* _latestResponse;

}

@property (nonatomic,copy,readonly) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy,readonly) NSSet * threadKeysRequested;                       //@synthesize threadKeysRequested=_threadKeysRequested - In the implementation block
@property (nonatomic,copy) MNBatchThreadSummaryResponse * latestResponse;              //@synthesize latestResponse=_latestResponse - In the implementation block
-(MNBatchThreadSummaryResponse *)latestResponse;
-(void)setLatestResponse:(MNBatchThreadSummaryResponse *)arg1 ;
-(id)initWithCompletionBlock:(/*^block*/id)arg1 threadKeysRequested:(id)arg2 ;
-(NSSet *)threadKeysRequested;
-(id)completionBlock;
@end

