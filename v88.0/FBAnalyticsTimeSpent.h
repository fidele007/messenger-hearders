/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, FBAnalyticsTimeSpentDelegate;
@class NSObject, NSString;

@interface FBAnalyticsTimeSpent : NSObject {

	double _lastActive;
	double _startTime;
	long long _tosArrayLengthInSeconds;
	long long _sequenceID;
	int _tosCumulativeBitsSet;
	NSObject*<OS_dispatch_queue> _queue;
	double _unixTime;
	long long _persistentUptime;
	int _tosArray[2];
	/*^block*/id _timingBlock;
	NSObject*<OS_dispatch_source> _timer;
	BOOL _isActiveTimer;
	NSString* _userFBID;
	BOOL _hasValidUserFBID;
	long long _bucketForReportingActiveSeconds;
	BOOL _shouldComputeBucketForReportingActiveSeconds;
	id<FBAnalyticsTimeSpentDelegate> delegate;
	unsigned long long _immediateActiveSecondsSamplingRate;
	double _lastForegroundTime;

}

@property (assign,nonatomic,__weak) id<FBAnalyticsTimeSpentDelegate> delegate; 
@property (assign,nonatomic) unsigned long long immediateActiveSecondsSamplingRate;              //@synthesize immediateActiveSecondsSamplingRate=_immediateActiveSecondsSamplingRate - In the implementation block
@property (assign,nonatomic) double lastForegroundTime;                                          //@synthesize lastForegroundTime=_lastForegroundTime - In the implementation block
-(void)setUserFBID:(id)arg1 ;
-(void)setLastForegroundTime:(double)arg1 ;
-(void)updateClientEvent:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 ;
-(double)_currentSystemTime;
-(void)_shipItWithSystemTime:(double)arg1 hasValidUserFBID:(BOOL)arg2 ;
-(BOOL)_shouldReportCurrentActiveSecond:(double)arg1 ;
-(double)_currentUnixTime;
-(long long)_currentPersistentUptime;
-(void)_doUpdate:(double)arg1 withUnixTime:(double)arg2 withPersistentUptime:(long long)arg3 ;
-(BOOL)_existReportableActiveSecondsFromTime:(unsigned long long)arg1 toTime:(unsigned long long)arg2 ;
-(void)_resetArray;
-(id)_packageData;
-(long long)_calculateElapsedFromTime:(double)arg1 ;
-(BOOL)_tosArrayEmpty;
-(void)_setArrayStartTime:(double)arg1 withUnixTime:(double)arg2 withPersistentUptime:(long long)arg3 ;
-(void)setImmediateActiveSecondsSamplingRate:(unsigned long long)arg1 ;
-(unsigned long long)immediateActiveSecondsSamplingRate;
-(double)lastForegroundTime;
-(void)setDelegate:(id<FBAnalyticsTimeSpentDelegate>)arg1 ;
-(void)dealloc;
-(id<FBAnalyticsTimeSpentDelegate>)delegate;
-(void)reset;
-(void)_startTimer:(int)arg1 ;
-(void)update:(double)arg1 ;
-(void)_stopTimer;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
-(void)save;
@end

