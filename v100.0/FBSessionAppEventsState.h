/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBSessionAppEventsState : NSObject {

	BOOL _requestInFlight;
	NSMutableArray* _accumulatedEvents;
	NSMutableArray* _inFlightEvents;
	unsigned long long _numSkippedEventsDueToFullBuffer;

}

@property (retain) NSMutableArray * accumulatedEvents;                              //@synthesize accumulatedEvents=_accumulatedEvents - In the implementation block
@property (retain) NSMutableArray * inFlightEvents;                                 //@synthesize inFlightEvents=_inFlightEvents - In the implementation block
@property (assign) unsigned long long numSkippedEventsDueToFullBuffer;              //@synthesize numSkippedEventsDueToFullBuffer=_numSkippedEventsDueToFullBuffer - In the implementation block
@property (assign) BOOL requestInFlight;                                            //@synthesize requestInFlight=_requestInFlight - In the implementation block
-(void)addEvent:(id)arg1 isImplicit:(BOOL)arg2 ;
-(unsigned long long)getAccumulatedEventCount;
-(BOOL)requestInFlight;
-(NSMutableArray *)inFlightEvents;
-(NSMutableArray *)accumulatedEvents;
-(BOOL)areAllEventsImplicit;
-(id)jsonEncodeInFlightEvents:(BOOL)arg1 ;
-(unsigned long long)numSkippedEventsDueToFullBuffer;
-(void)setRequestInFlight:(BOOL)arg1 ;
-(void)clearInFlightAndStats;
-(void)setNumSkippedEventsDueToFullBuffer:(unsigned long long)arg1 ;
-(void)setAccumulatedEvents:(NSMutableArray *)arg1 ;
-(void)setInFlightEvents:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
@end

