/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBActivitySession;

@interface FBMotionActivity : NSObject {

	unsigned long long _activity;
	unsigned long long _activityUnknownReason;
	double _confidence;
	FBActivitySession* _activitySession;

}

@property (nonatomic,readonly) unsigned long long activity;                           //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) unsigned long long activityUnknownReason;              //@synthesize activityUnknownReason=_activityUnknownReason - In the implementation block
@property (nonatomic,readonly) double confidence;                                     //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) FBActivitySession * activitySession;                   //@synthesize activitySession=_activitySession - In the implementation block
+(BOOL)validMotionActivity:(id)arg1 ;
-(id)_initWithActivity:(unsigned long long)arg1 activityUnknownReason:(unsigned long long)arg2 confidence:(double)arg3 activitySession:(id)arg4 ;
-(id)initWithUnknowActivityReason:(unsigned long long)arg1 activitySession:(id)arg2 ;
-(id)initWithActivity:(unsigned long long)arg1 confidence:(double)arg2 activitySession:(id)arg3 ;
-(unsigned long long)activityUnknownReason;
-(FBActivitySession *)activitySession;
-(unsigned long long)activity;
-(double)confidence;
@end

