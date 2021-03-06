/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBSingletonInjecting.h>

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
-(MNPlatformConversionTrackingSettings *)platformConversionTrackingSettings;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBAnalytics *)analytics;
@end

