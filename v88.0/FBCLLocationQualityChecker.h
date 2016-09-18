/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBCLLocationQualityChecker : NSObject {

	double _oldestLocTimestamp;
	NSMutableArray* _lastLocations;
	double _bestAccuracy;
	double _timeWindow;

}

@property (nonatomic,readonly) double timeWindow;              //@synthesize timeWindow=_timeWindow - In the implementation block
-(id)initWithTimeWindow:(double)arg1 ;
-(unsigned long long)qualityLevelUntilDate:(id)arg1 ;
-(void)addLocations:(id)arg1 forDate:(id)arg2 ;
-(double)timeWindow;
@end

