/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBAnalyticsSequenceLoggerDelegate;
@class NSMutableOrderedSet, NSMutableDictionary, NSObject, FBAnalyticsPerfLogger, FBAnalytics, NSString;

@interface FBAnalyticsSequenceLogger : NSObject {

	NSMutableOrderedSet* _markers;
	NSMutableDictionary* _timestamps;
	NSObject*<OS_dispatch_queue> _queue;
	FBAnalyticsPerfLogger* _perfLogger;
	FBAnalytics* _analytics;
	long long _state;
	NSString* _eventName;
	id<FBAnalyticsSequenceLoggerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * eventName;                                        //@synthesize eventName=_eventName - In the implementation block
@property (assign,nonatomic,__weak) id<FBAnalyticsSequenceLoggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(double)_currentTimestamp;
-(id)initWithEventName:(id)arg1 delegate:(id)arg2 analytics:(id)arg3 perfLogger:(id)arg4 ;
-(/*^block*/id)_analyticsExtraBlockForTimeIntervals:(id)arg1 mergeWithExtrasBlock:(/*^block*/id)arg2 ;
-(id)initWithEventName:(id)arg1 delegate:(id)arg2 ;
-(void)markStepNamed:(id)arg1 ;
-(void)logSequence;
-(void)checkStateWithBlock:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<FBAnalyticsSequenceLoggerDelegate>)arg1 ;
-(id<FBAnalyticsSequenceLoggerDelegate>)delegate;
-(void)stop;
-(void)start;
-(NSString *)eventName;
-(void)_performBlock:(/*^block*/id)arg1 ;
@end

