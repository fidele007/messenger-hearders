/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:16 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSingletonInjecting.h>

@class FBProviderMapData, FBAnalytics, MNPlatformConversionTrackingSettings, NSString;

@interface MNPlatformConversionTrackingLoggerInjector : NSObject <FBSingletonInjecting> {

	FBProviderMapData* _mapData;
	FBAnalytics* _analytics;
	MNPlatformConversionTrackingSettings* _platformConversionTrackingSettings;

}

@property (nonatomic,readonly) FBAnalytics * analytics;                                                                //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,readonly) MNPlatformConversionTrackingSettings * platformConversionTrackingSettings;              //@synthesize platformConversionTrackingSettings=_platformConversionTrackingSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNPlatformConversionTrackingSettings *)platformConversionTrackingSettings;
-(FBAnalytics *)analytics;
@end

