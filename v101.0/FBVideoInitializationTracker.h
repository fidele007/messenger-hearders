/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString;

@interface FBVideoInitializationTracker : NSObject {

	double _startTime;
	BOOL _prefetchLogged;
	BOOL _cachedLogged;
	BOOL _networkLogged;
	unsigned long long _rangeCount;
	BOOL _readingFromDiskShouldLogAsCached;
	BOOL _isTracking;
	NSString* _videoID;
	NSString* _trackerID;

}

@property (nonatomic,copy,readonly) NSString * videoID;                //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,copy,readonly) NSString * trackerID;              //@synthesize trackerID=_trackerID - In the implementation block
@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) BOOL isTracking;                        //@synthesize isTracking=_isTracking - In the implementation block
-(NSString *)videoID;
-(NSString *)trackerID;
-(id)initWithTrackerID:(id)arg1 videoID:(id)arg2 ;
-(void)logPlayerSent:(NSRange)arg1 ;
-(void)logPlayerReceivedFirstByte:(unsigned long long)arg1 length:(unsigned long long)arg2 cached:(BOOL)arg3 prefetched:(BOOL)arg4 ;
-(BOOL)isTracking;
-(double)elapsedTime;
-(void)stopTracking;
@end
