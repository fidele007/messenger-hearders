/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@class FBProviderMapData, FBMAllServicesInitializedDelayer, NSNotificationCenter, NSString;

@interface FBMForegroundJobSchedulerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	FBMAllServicesInitializedDelayer* _allServicesDelayer;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,readonly) FBMAllServicesInitializedDelayer * allServicesDelayer;              //@synthesize allServicesDelayer=_allServicesDelayer - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                          //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMAllServicesInitializedDelayer *)allServicesDelayer;
-(NSNotificationCenter *)notificationCenter;
@end

