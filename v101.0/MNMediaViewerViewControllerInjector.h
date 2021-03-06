/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@class FBProviderMapData, FBUserSession, FBMobileConfigContextManager, MNUserSettings, MNPhotoViewImageDownloadController, NSString;

@interface MNMediaViewerViewControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _userSession;
	FBMobileConfigContextManager* _configManager;
	MNUserSettings* _userSettings;
	MNPhotoViewImageDownloadController* _imageDownloadController;

}

@property (nonatomic,readonly) FBUserSession * userSession;                                               //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                              //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNUserSettings * userSettings;                                             //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,readonly) MNPhotoViewImageDownloadController * imageDownloadController;              //@synthesize imageDownloadController=_imageDownloadController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNPhotoViewImageDownloadController *)imageDownloadController;
-(id)nonCachedComposerViewControllerWithIdentifier:(id)arg1 ;
-(FBUserSession *)userSession;
-(MNUserSettings *)userSettings;
@end

