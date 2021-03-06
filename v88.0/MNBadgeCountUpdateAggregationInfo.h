/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNBadgeCountUpdateAggregationInfo : FBValueObject <NSCopying> {

	long long _numberOfBackgroundBadgeUpdates;
	long long _numberOfMissedBadgeCountUpdateEvents;
	long long _missedBadgeCountUpdateMagnitude;
	long long _numberOfBackgrounds;
	double _latestTimeScannedTo;

}

@property (nonatomic,readonly) long long numberOfBackgroundBadgeUpdates;                    //@synthesize numberOfBackgroundBadgeUpdates=_numberOfBackgroundBadgeUpdates - In the implementation block
@property (nonatomic,readonly) long long numberOfMissedBadgeCountUpdateEvents;              //@synthesize numberOfMissedBadgeCountUpdateEvents=_numberOfMissedBadgeCountUpdateEvents - In the implementation block
@property (nonatomic,readonly) long long missedBadgeCountUpdateMagnitude;                   //@synthesize missedBadgeCountUpdateMagnitude=_missedBadgeCountUpdateMagnitude - In the implementation block
@property (nonatomic,readonly) long long numberOfBackgrounds;                               //@synthesize numberOfBackgrounds=_numberOfBackgrounds - In the implementation block
@property (nonatomic,readonly) double latestTimeScannedTo;                                  //@synthesize latestTimeScannedTo=_latestTimeScannedTo - In the implementation block
-(long long)numberOfMissedBadgeCountUpdateEvents;
-(long long)numberOfBackgroundBadgeUpdates;
-(long long)missedBadgeCountUpdateMagnitude;
-(long long)numberOfBackgrounds;
-(double)latestTimeScannedTo;
-(id)initWithNumberOfBackgroundBadgeUpdates:(long long)arg1 numberOfMissedBadgeCountUpdateEvents:(long long)arg2 missedBadgeCountUpdateMagnitude:(long long)arg3 numberOfBackgrounds:(long long)arg4 latestTimeScannedTo:(double)arg5 ;
@end

