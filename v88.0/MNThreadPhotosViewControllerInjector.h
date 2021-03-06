/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@protocol MNAuthenticationManager;
@class FBProviderMapData, MNCollectionViewPreviewingHandler, MNNavigationCoordinator, MNPhotoNodeActionHandler, MNSharedPhotosConfiguration, MNThreadPhotosOverlayViewController, MNPhotoViewNodeConfiguration, MNThreadParticipantNameFormatter, MNPhotoImageRequester, MNPhotoViewImageDownloadController, FBMobileConfigContextManager, MNMediaViewerViewController, NSString;

@interface MNThreadPhotosViewControllerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	MNCollectionViewPreviewingHandler* _collectionViewPreviewingHandler;
	MNNavigationCoordinator* _navigationCoordinator;
	MNPhotoNodeActionHandler* _nodeActionHandler;
	MNSharedPhotosConfiguration* _sharedPhotosConfiguration;
	MNThreadPhotosOverlayViewController* _overlayViewController;
	id<MNAuthenticationManager> _authenticationManager;
	MNPhotoViewNodeConfiguration* _nodeConfiguration;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNPhotoImageRequester* _imageRequester;
	MNPhotoViewImageDownloadController* _imageDownloadController;
	FBMobileConfigContextManager* _configManager;
	MNMediaViewerViewController* _mediaViewerViewController;

}

@property (nonatomic,readonly) MNCollectionViewPreviewingHandler * collectionViewPreviewingHandler;              //@synthesize collectionViewPreviewingHandler=_collectionViewPreviewingHandler - In the implementation block
@property (nonatomic,readonly) MNNavigationCoordinator * navigationCoordinator;                                  //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNPhotoNodeActionHandler * nodeActionHandler;                                     //@synthesize nodeActionHandler=_nodeActionHandler - In the implementation block
@property (nonatomic,readonly) MNSharedPhotosConfiguration * sharedPhotosConfiguration;                          //@synthesize sharedPhotosConfiguration=_sharedPhotosConfiguration - In the implementation block
@property (nonatomic,readonly) MNThreadPhotosOverlayViewController * overlayViewController;                      //@synthesize overlayViewController=_overlayViewController - In the implementation block
@property (nonatomic,readonly) id<MNAuthenticationManager> authenticationManager;                                //@synthesize authenticationManager=_authenticationManager - In the implementation block
@property (nonatomic,readonly) MNPhotoViewNodeConfiguration * nodeConfiguration;                                 //@synthesize nodeConfiguration=_nodeConfiguration - In the implementation block
@property (nonatomic,readonly) MNThreadParticipantNameFormatter * nameFormatter;                                 //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,readonly) MNPhotoImageRequester * imageRequester;                                           //@synthesize imageRequester=_imageRequester - In the implementation block
@property (nonatomic,readonly) MNPhotoViewImageDownloadController * imageDownloadController;                     //@synthesize imageDownloadController=_imageDownloadController - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                     //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNMediaViewerViewController * mediaViewerViewController;                          //@synthesize mediaViewerViewController=_mediaViewerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNNavigationCoordinator *)navigationCoordinator;
-(id<MNAuthenticationManager>)authenticationManager;
-(MNPhotoViewImageDownloadController *)imageDownloadController;
-(MNSharedPhotosConfiguration *)sharedPhotosConfiguration;
-(id)nonCachedThreadSharedPhotosDefaultDataSource;
-(MNPhotoImageRequester *)imageRequester;
-(MNPhotoViewNodeConfiguration *)nodeConfiguration;
-(MNPhotoNodeActionHandler *)nodeActionHandler;
-(MNMediaViewerViewController *)mediaViewerViewController;
-(MNCollectionViewPreviewingHandler *)collectionViewPreviewingHandler;
-(MNThreadParticipantNameFormatter *)nameFormatter;
-(MNThreadPhotosOverlayViewController *)overlayViewController;
@end

