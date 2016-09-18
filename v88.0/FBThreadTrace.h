/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBThreadTrace : NSObject {

	unsigned long long _startTime;
	FBTraceEvent* _preallocatedEvents;
	FBTraceEvent* _firstStart;
	FBDoubleLinkedList* _eventFreeList;
	FBDoubleLinkedList* _outstandingEventsList;
	FBDoubleLinkedList* _threadTrace;
	unsigned long long _loggedEventCount;
	unsigned long long _evictedEventCount;
	unsigned long long _silencedEventCount;
	unsigned long long _invalidEventCount;
	unsigned long long _reportingThreshold;
	unsigned long long _threadLocalReferenceCount;
	/*^block*/id _currentTimeBlock;

}

@property (nonatomic,copy) id currentTimeBlock;                                           //@synthesize currentTimeBlock=_currentTimeBlock - In the implementation block
@property (assign,nonatomic) unsigned long long reportingThreshold;                       //@synthesize reportingThreshold=_reportingThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long threadLocalReferenceCount;              //@synthesize threadLocalReferenceCount=_threadLocalReferenceCount - In the implementation block
-(id)initWithCurrentTimeBlock:(/*^block*/id)arg1 ;
-(void)setReportingThreshold:(unsigned long long)arg1 ;
-(id)completedEvents;
-(unsigned long long)invalidEventCount;
-(unsigned long long)evictedEventCount;
-(unsigned long long)silencedEventCount;
-(unsigned long long)loggedEventCount;
-(unsigned long long)stopTraceEvent:(FBTraceEvent*)arg1 reportingThreshold:(unsigned long long)arg2 instructionPointer:(void*)arg3 ;
-(FBTraceEvent*)startTracerWithComment:(id)arg1 aggregationTag:(id)arg2 info:(id)arg3 nodeID:(id)arg4 instructionPointer:(void*)arg5 ;
-(void)addCommentForFBTraceEvent:(int)arg1 withIdentifier:(id)arg2 withInfo:(id)arg3 withNodeID:(id)arg4 withInstructionPointer:(void*)arg5 ;
-(void)_clearOutstandingEvents;
-(FBTraceEvent*)_eventFromFreeList;
-(void)incrementThreadLocalReferenceCount;
-(void)decrementThreadLocalReferenceCount;
-(id)formattedTrace;
-(unsigned long long)reportingThreshold;
-(unsigned long long)threadLocalReferenceCount;
-(id)currentTimeBlock;
-(void)setCurrentTimeBlock:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)reset;
@end

