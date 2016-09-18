/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/FBAnimationPerformanceTrackerDelegate.h>

@class MNMessageSendExperienceTrackerInjector, FBAnimationPerformanceTracker, FBQuickPerformanceLogger, MNMessageSendAnimationRecord, NSString;

@interface MNMessageSendExperienceTracker : NSObject <FBClassInjectable, FBAnimationPerformanceTrackerDelegate> {

	MNMessageSendExperienceTrackerInjector* _injector;
	FBAnimationPerformanceTracker* _animationPerformanceTracker;
	FBQuickPerformanceLogger* _quickLogger;
	unsigned long long _sendExperienceStartTime;
	MNMessageSendAnimationRecord* _currentAnimationRecord;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isTracking; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)markEndOfMessageSend;
-(void)markStartOfMessageSend;
-(void)reportDurationInMS:(long long)arg1 smallDropEvents:(double)arg2 largeDropEvents:(double)arg3 totalStallTimeInMS:(long long)arg4 ;
-(void)reportStackTrace:(id)arg1 frameTime:(long long)arg2 ;
-(void)willReportStackTraces;
-(void)didReportStackTraces;
-(unsigned long long)_currentMonotonicDuration;
-(void)_logMessageSendEventWithDuration:(unsigned long long)arg1 animationRecord:(id)arg2 ;
-(BOOL)isTracking;
@end

