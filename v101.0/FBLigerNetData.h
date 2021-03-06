/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBLigerNetData : NSObject {

	long long _fullPowerTime;
	long long _lowPowerTime;
	long long _totalBytesDown;
	long long _totalBytesUp;
	long long _totalRequestCount;
	long long _totalWakeupCount;
	NSString* _attirbutionData;

}

@property (nonatomic,readonly) long long fullPowerTime;                      //@synthesize fullPowerTime=_fullPowerTime - In the implementation block
@property (nonatomic,readonly) long long lowPowerTime;                       //@synthesize lowPowerTime=_lowPowerTime - In the implementation block
@property (nonatomic,readonly) long long totalBytesDown;                     //@synthesize totalBytesDown=_totalBytesDown - In the implementation block
@property (nonatomic,readonly) long long totalBytesUp;                       //@synthesize totalBytesUp=_totalBytesUp - In the implementation block
@property (nonatomic,readonly) long long totalRequestCount;                  //@synthesize totalRequestCount=_totalRequestCount - In the implementation block
@property (nonatomic,readonly) long long totalWakeupCount;                   //@synthesize totalWakeupCount=_totalWakeupCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * attirbutionData;              //@synthesize attirbutionData=_attirbutionData - In the implementation block
-(long long)fullPowerTime;
-(long long)lowPowerTime;
-(long long)totalBytesDown;
-(long long)totalBytesUp;
-(long long)totalRequestCount;
-(long long)totalWakeupCount;
-(NSString *)attirbutionData;
-(id)initWithFullPowerTime:(long long)arg1 LowPowerTime:(long long)arg2 TotalBytesDown:(long long)arg3 TotalBytesUp:(long long)arg4 TotalRequestCount:(long long)arg5 TotalWakeupCount:(long long)arg6 AttributionData:(id)arg7 ;
@end

