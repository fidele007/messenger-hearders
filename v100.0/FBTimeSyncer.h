/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDateFormatter, NSDate;

@interface FBTimeSyncer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSDateFormatter* _dateStringFormatter;
	double _lastServerTimeSyncUnixTime;
	BOOL _hasTimeEstimate;
	double _serverTimeDelta;

}

@property (assign) double serverTimeDelta;                             //@synthesize serverTimeDelta=_serverTimeDelta - In the implementation block
@property (readonly) NSDate * estimatedCurrentServerTime; 
+(id)sharedTimeSyncer;
-(double)serverTimeDelta;
-(void)setServerTimeDelta:(double)arg1 ;
-(void)_processDateString:(id)arg1 receiptTime:(id)arg2 ;
-(NSDate *)estimatedCurrentServerTime;
-(void)didReceiveFacebookDateString:(id)arg1 ;
-(id)init;
@end
