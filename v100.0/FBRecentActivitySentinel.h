/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDate, NSMutableArray, NSMutableDictionary, NSObject, FBRecentActivitySentinelSettings, NSDateFormatter;

@interface FBRecentActivitySentinel : NSObject {

	NSDate* _lastPersistToDiskTime;
	NSMutableArray* _recentEventsRingBuffer;
	NSMutableDictionary* _recentEventsRingBufferContainer;
	NSObject*<OS_dispatch_queue> _recentEventsRingBufferContainerSyncQueue;
	FBRecentActivitySentinelSettings* _settings;
	NSDateFormatter* _dateFormatter;
	NSObject*<OS_dispatch_queue> _saveToDiskQueue;

}
-(void)significantEventDidOccur:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
-(void)significantEventDidOccur:(id)arg1 module:(id)arg2 extraBlock:(/*^block*/id)arg3 ;
-(id)recentActivitiesFilename;
-(id)previousRecentActivitiesFilename;
-(void)moveSavedFileToPrevious;
-(id)recentActivitiesFromDisk;
-(BOOL)timeIsWithinTimeInterval:(id)arg1 timeInterval:(double)arg2 ;
-(id)arrayOfStrings:(id)arg1 ;
-(id)arrayOfStringsWithEvaluatedExtraBlocks:(id)arg1 ;
-(void)addSignificantEventToRecentEventsRingBufferContainer:(id)arg1 module:(id)arg2 extra:(id)arg3 extraBlock:(/*^block*/id)arg4 ;
-(void)recordEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
-(id)recentActivitiesFromCurrentSession:(BOOL)arg1 ;
-(id)recentActivitiesFromPreviousSession;
-(id)customizeActivitiesBeforeReport:(id)arg1 ;
-(void)recentActivitySentinelOnlyEventDidOccur:(id)arg1 extra:(id)arg2 ;
-(id)initWithSettings:(id)arg1 ;
@end

