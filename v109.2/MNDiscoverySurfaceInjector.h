/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBInjecting.h>

@protocol MNPluginManager, MNThreadPresentation;
@class FBProviderMapData, FBUserSession, MNGameListPresenter, MNDiscoverySurfaceViewModelLoaderFactory, MNProfileImage, NSString;

@interface MNDiscoverySurfaceInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	id<MNPluginManager> _pluginManager;
	id<MNThreadPresentation> _threadPresenter;
	MNGameListPresenter* _gameListPresenter;
	MNDiscoverySurfaceViewModelLoaderFactory* _discoverySurfaceViewModelLoaderFactory;
	MNProfileImage* _profileImage;

}

@property (nonatomic,readonly) FBUserSession * session;                                                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<MNPluginManager> pluginManager;                                                              //@synthesize pluginManager=_pluginManager - In the implementation block
@property (nonatomic,readonly) id<MNThreadPresentation> threadPresenter;                                                       //@synthesize threadPresenter=_threadPresenter - In the implementation block
@property (nonatomic,readonly) MNGameListPresenter * gameListPresenter;                                                        //@synthesize gameListPresenter=_gameListPresenter - In the implementation block
@property (nonatomic,readonly) MNDiscoverySurfaceViewModelLoaderFactory * discoverySurfaceViewModelLoaderFactory;              //@synthesize discoverySurfaceViewModelLoaderFactory=_discoverySurfaceViewModelLoaderFactory - In the implementation block
@property (nonatomic,readonly) MNProfileImage * profileImage;                                                                  //@synthesize profileImage=_profileImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(MNGameListPresenter *)gameListPresenter;
-(MNDiscoverySurfaceViewModelLoaderFactory *)discoverySurfaceViewModelLoaderFactory;
-(id<MNThreadPresentation>)threadPresenter;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBUserSession *)session;
-(MNProfileImage *)profileImage;
-(id<MNPluginManager>)pluginManager;
@end

