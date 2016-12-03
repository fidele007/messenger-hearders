/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadSummaryRequestHandling.h>
#import <Messenger/MNThreadSummaryRequestPropagating.h>

@protocol MNThreadFetchedAffirming, MNThreadDeletedAffirming, MNThreadSummaryCaching;
@class NSString;

@interface MNThreadSummaryRequestMemoryHandler : NSObject <MNThreadSummaryRequestHandling, MNThreadSummaryRequestPropagating> {

	id<MNThreadFetchedAffirming> _threadFetchedAffirmer;
	id<MNThreadDeletedAffirming> _threadDeletedAffirmer;
	id<MNThreadSummaryCaching> _threadSummaryCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)batchThreadSummaryRequestId:(unsigned long long)arg1 propagateResponse:(id)arg2 isComplete:(BOOL)arg3 continueBlock:(/*^block*/id)arg4 ;
-(void)batchThreadSummaryRequestId:(unsigned long long)arg1 failedWithError:(id)arg2 continueBlock:(/*^block*/id)arg3 ;
-(void)handleBatchThreadSummaryRequest:(id)arg1 longOperationDidBeginBlock:(/*^block*/id)arg2 forwardBlock:(/*^block*/id)arg3 responseBlock:(/*^block*/id)arg4 ;
-(id)initWithThreadSummaryCache:(id)arg1 threadFetchedAffirmer:(id)arg2 threadDeletedAffirmer:(id)arg3 ;
@end
