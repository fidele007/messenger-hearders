/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBGravityIBeaconExperimentContext : FBExperimentContext {

	BOOL _sortAscending;
	BOOL _stopOnFirstDidRange;
	BOOL _enabledRaw;
	BOOL _enabledOverride;
	NSString* _iBeaconUUID;
	double _rangeDuration;
	double _beaconExpirationAge;
	long long _monitoredRegionCount;
	NSString* _sortFunc;

}

@property (nonatomic,readonly) BOOL enabledRaw;                             //@synthesize enabledRaw=_enabledRaw - In the implementation block
@property (assign,nonatomic) BOOL enabledOverride;                          //@synthesize enabledOverride=_enabledOverride - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,copy,readonly) NSString * iBeaconUUID;                 //@synthesize iBeaconUUID=_iBeaconUUID - In the implementation block
@property (nonatomic,readonly) double rangeDuration;                        //@synthesize rangeDuration=_rangeDuration - In the implementation block
@property (nonatomic,readonly) double beaconExpirationAge;                  //@synthesize beaconExpirationAge=_beaconExpirationAge - In the implementation block
@property (nonatomic,readonly) long long monitoredRegionCount;              //@synthesize monitoredRegionCount=_monitoredRegionCount - In the implementation block
@property (nonatomic,readonly) BOOL sortAscending;                          //@synthesize sortAscending=_sortAscending - In the implementation block
@property (nonatomic,copy,readonly) NSString * sortFunc;                    //@synthesize sortFunc=_sortFunc - In the implementation block
@property (nonatomic,readonly) BOOL stopOnFirstDidRange;                    //@synthesize stopOnFirstDidRange=_stopOnFirstDidRange - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(void)setEnabledOverride:(BOOL)arg1 ;
-(BOOL)enabledRaw;
-(BOOL)enabledOverride;
-(NSString *)iBeaconUUID;
-(double)rangeDuration;
-(double)beaconExpirationAge;
-(long long)monitoredRegionCount;
-(BOOL)sortAscending;
-(NSString *)sortFunc;
-(BOOL)stopOnFirstDidRange;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
@end

