/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNThreadSummarySubscribing.h>

@protocol OS_dispatch_queue, MNThreadSummarySubscribing;
@class NSMutableDictionary, MNThreadSummarySubscribingAnnouncer, NSObject, NSString;

@interface FBMThreadBasedCacheManager : NSObject <MNThreadSummarySubscribing> {

	NSMutableDictionary* _threadKeyObjectMap;
	MNThreadSummarySubscribingAnnouncer* _threadSummarySubscribingAnnouncer;
	NSObject*<OS_dispatch_queue> _serialDispatchQueue;
	id<MNThreadSummarySubscribing> _dispatchedListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCache:(id)arg1 threadSummarySubscribingAnnouncer:(id)arg2 ;
-(void)clearObjectForThreadWithKey:(id)arg1 ;
-(id)initWithThreadSummarySubscribingAnnouncer:(id)arg1 ;
-(void)setObject:(id)arg1 forThreadWithKey:(id)arg2 ;
-(id)getObjectForThreadWithKey:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(void)startWithQueue:(id)arg1 ;
-(void)dealloc;
-(void)stop;
@end

