/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPlatformAppListServiceListener.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class MNPlatformAppListService, MNPlatformAppFirstOpenedTimeCache, NSArray, MNPlatformAppManagerListenerAnnouncer, NSString;

@interface MNPlatformAppManager : NSObject <MNPlatformAppListServiceListener, FBViewerContextClassProvidable> {

	MNPlatformAppListService* _platformAppListService;
	MNPlatformAppFirstOpenedTimeCache* _firstOpenedTimeCache;
	NSArray* _installedApps;
	NSArray* _uninstalledApps;
	NSArray* _allApps;
	MNPlatformAppManagerListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)sortedApps;
-(id)initWithPlatformAppListServer:(id)arg1 firstOpenedTimeCache:(id)arg2 announcer:(id)arg3 ;
-(void)_initAppsListIfNeeded;
-(id)_appsListWithInstallStatus:(BOOL)arg1 ;
-(void)didUpdateAppList;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

