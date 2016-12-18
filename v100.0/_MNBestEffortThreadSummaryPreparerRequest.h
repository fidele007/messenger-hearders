/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(id)initWithCompletionBlock:(/*^block*/id)arg1 threadKeysRequested:(id)arg2 ;
-(NSSet *)threadKeysRequested;
-(MNBatchThreadSummaryResponse *)latestResponse;
-(void)setLatestResponse:(MNBatchThreadSummaryResponse *)arg1 ;
-(id)completionBlock;
@end

