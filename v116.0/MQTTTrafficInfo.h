/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface MQTTTrafficInfo : FBValueObject <NSCopying, NSCoding> {

	unsigned long long _upBytes;
	unsigned long long _downBytes;
	unsigned long long _wakeupCount;
	unsigned long long _trafficCount;
	double _awakeTimeInSecond;

}

@property (nonatomic,readonly) unsigned long long upBytes;                   //@synthesize upBytes=_upBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long downBytes;                 //@synthesize downBytes=_downBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long wakeupCount;               //@synthesize wakeupCount=_wakeupCount - In the implementation block
@property (nonatomic,readonly) unsigned long long trafficCount;              //@synthesize trafficCount=_trafficCount - In the implementation block
@property (nonatomic,readonly) double awakeTimeInSecond;                     //@synthesize awakeTimeInSecond=_awakeTimeInSecond - In the implementation block
-(id)initWithUpBytes:(unsigned long long)arg1 downBytes:(unsigned long long)arg2 wakeupCount:(unsigned long long)arg3 trafficCount:(unsigned long long)arg4 awakeTimeInSecond:(double)arg5 ;
-(double)awakeTimeInSecond;
-(unsigned long long)trafficCount;
-(unsigned long long)wakeupCount;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)upBytes;
-(unsigned long long)downBytes;
@end

