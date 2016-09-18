/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, FBDataUsageStats, NSObject;

@interface FBDataUsageCounter : NSObject {

	NSURL* _URL;
	FBDataUsageStats* _dataUsageStats;
	unsigned long long _dataSinceBeginning;
	unsigned long long _dataSinceYesterday;
	unsigned long long _dataSinceLastMonth;
	unsigned long long _dataPrefetchedSinceBeginning;
	unsigned long long _dataPrefetchedSinceYesterday;
	unsigned long long _dataPrefetchedSinceLastMonth;
	unsigned long long _cellDataSinceBeginning;
	unsigned long long _cellDataSinceYesterday;
	unsigned long long _cellDataSinceLastMonth;
	unsigned long long _dataWatchedSinceBeginning;
	unsigned long long _dataWatchedSinceYesterday;
	unsigned long long _dataWatchedSinceLastMonth;
	unsigned long long _dataPrefetchedWatchedSinceBeginning;
	unsigned long long _dataPrefetchedWatchedSinceYesterday;
	unsigned long long _dataPrefetchedWatchedSinceLastMonth;
	double _timeSinceBeginning;
	double _timeSinceYesterday;
	double _timeSinceLastMonth;
	NSObject*<OS_dispatch_queue> _performer;
	NSObject*<OS_dispatch_queue> _scheduleQueue;
	BOOL _scheduledSaving;

}

@property (nonatomic,readonly) unsigned long long dataSinceBeginning; 
@property (nonatomic,readonly) unsigned long long dataSinceLastMonth; 
@property (nonatomic,readonly) double timeSinceBeginning; 
@property (nonatomic,readonly) double timeSinceLastMonth; 
@property (assign,nonatomic) unsigned long long dataWatchedSinceBeginning;              //@synthesize dataWatchedSinceBeginning=_dataWatchedSinceBeginning - In the implementation block
@property (assign,nonatomic) unsigned long long dataWatchedSinceLastMonth;              //@synthesize dataWatchedSinceLastMonth=_dataWatchedSinceLastMonth - In the implementation block
-(void)_saveAsync:(BOOL)arg1 wasReset:(BOOL)arg2 ;
-(void)_resetAndLogForBeginningOfDay;
-(unsigned long long)dataSinceBeginning;
-(unsigned long long)dataSinceLastMonth;
-(unsigned long long)dataPrefetchedSinceBeginning;
-(unsigned long long)dataPrefetchedSinceLastMonth;
-(unsigned long long)cellDataSinceBeginning;
-(unsigned long long)cellDataSinceLastMonth;
-(unsigned long long)dataWatchedSinceBeginning;
-(unsigned long long)dataWatchedSinceLastMonth;
-(unsigned long long)dataPrefetchedWatchedSinceBeginning;
-(unsigned long long)dataPrefetchedWatchedSinceLastMonth;
-(double)timeSinceBeginning;
-(double)timeSinceLastMonth;
-(void)_scheduleNextSave;
-(void)_logDailyDataUsage;
-(void)_resetForBeginningOfMonthIfNeeded;
-(void)_resetAndLogForBeginningOfDayIfNeeded;
-(void)immediatelyLogDailyUsage;
-(id)initWithURL:(id)arg1 scheduleQueue:(id)arg2 performer:(id)arg3 ;
-(void)increaseDownloadedData:(unsigned long long)arg1 isPrefetching:(BOOL)arg2 isCellular:(BOOL)arg3 ;
-(void)increaseTime:(double)arg1 ;
-(void)increaseDataWatched:(unsigned long long)arg1 prefetchWatched:(unsigned long long)arg2 ;
-(void)setDataWatchedSinceBeginning:(unsigned long long)arg1 ;
-(void)setDataWatchedSinceLastMonth:(unsigned long long)arg1 ;
-(void)reset;
@end

