/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBAnalyticsCounter : NSObject {

	unsigned long long _count;
	NSString* _eventName;
	double _sum;

}

@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
-(id)initWithValue:(double)arg1 eventName:(id)arg2 ;
-(id)jsonObject;
-(void)addValue:(double)arg1 ;
-(NSString *)eventName;
@end

