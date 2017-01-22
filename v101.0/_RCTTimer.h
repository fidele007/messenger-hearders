/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSNumber;

@interface _RCTTimer : NSObject {

	BOOL _repeats;
	NSDate* _target;
	NSNumber* _callbackID;
	double _interval;

}

@property (nonatomic,readonly) NSDate * target;                         //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) BOOL repeats;                            //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * callbackID;              //@synthesize callbackID=_callbackID - In the implementation block
@property (nonatomic,readonly) double interval;                         //@synthesize interval=_interval - In the implementation block
-(id)initWithCallbackID:(id)arg1 interval:(double)arg2 targetTime:(double)arg3 repeats:(BOOL)arg4 ;
-(BOOL)updateFoundNeedsJSUpdate;
-(NSNumber *)callbackID;
-(NSDate *)target;
-(double)interval;
-(BOOL)repeats;
@end
