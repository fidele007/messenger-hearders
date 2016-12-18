/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBLocalStatsEventData : NSObject {

	NSString* _marauderEvent;
	long long _type;
	unsigned long long _metricsNeeded;

}

@property (nonatomic,copy,readonly) NSString * marauderEvent;                 //@synthesize marauderEvent=_marauderEvent - In the implementation block
@property (nonatomic,readonly) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long metricsNeeded;              //@synthesize metricsNeeded=_metricsNeeded - In the implementation block
-(NSString *)marauderEvent;
-(id)initWithEvent:(id)arg1 type:(long long)arg2 metrics:(unsigned long long)arg3 ;
-(unsigned long long)metricsNeeded;
-(id)init;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
@end
