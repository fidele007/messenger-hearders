/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNDiagnosticsRow : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSArray* _dataUsage_bytes;
	double _dataUsage_regressionPredicted;
	double _dataUsage_detectorProbability;
	NSArray* _camera_seconds;
	double _camera_detectorProbability;
	NSArray* _messages_counts;
	double _messages_detectorProbability;
	NSArray* _media_counts;
	double _media_detectorProbability;
	NSArray* _realtimeCommunications_seconds;
	double _realtimeCommunications_detectorProbability;
	NSArray* _energy_milliamps;
	double _energy_detectorProbability;

}
+(id)dataUsageWithBytes:(id)arg1 regressionPredicted:(double)arg2 detectorProbability:(double)arg3 ;
+(id)cameraWithSeconds:(id)arg1 detectorProbability:(double)arg2 ;
+(id)messagesWithCounts:(id)arg1 detectorProbability:(double)arg2 ;
+(id)mediaWithCounts:(id)arg1 detectorProbability:(double)arg2 ;
+(id)realtimeCommunicationsWithSeconds:(id)arg1 detectorProbability:(double)arg2 ;
+(id)energyWithMilliamps:(id)arg1 detectorProbability:(double)arg2 ;
-(void)matchDataUsage:(/*^block*/id)arg1 camera:(/*^block*/id)arg2 messages:(/*^block*/id)arg3 media:(/*^block*/id)arg4 realtimeCommunications:(/*^block*/id)arg5 energy:(/*^block*/id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

