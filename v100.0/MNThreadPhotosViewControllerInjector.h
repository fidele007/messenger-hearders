/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@protocol MNAuthenticationManager;
@class FBProviderMapData, MNViewPreviewingHandler, MNNavigationCoordinator, MNPhotoNodeActionHandler, MNSharedPhotosConfiguration, MNThreadPhotosOverlayViewController, MNPhotoViewNodeConfiguration, MNThreadParticipantNameFormatter, MNImageRequester, MNPhotoViewImageDownloadController, FBMobileConfigContextManager, NSString;

@interface MNThreadPhotosViewControllerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	MNViewPreviewingHandler* _viewPreviewingHandler;
	MNNavigationCoordinator* _navigationCoordinator;
	MNPhotoNodeActionHandler* _nodeActionHandler;
	MNSharedPhotosConfiguration* _sharedPhotosConfiguration;
	MNThreadPhotosOverlayViewController* _overlayViewController;
	id<MNAuthenticationManager> _authenticationManager;
	MNPhotoViewNodeConfiguration* _nodeConfiguration;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNImageRequester* _imageRequester;
	MNPhotoViewImageDownloadController* _imageDownloadController;
	FBMobileConfigContextManager* _configManager;

}

@property (nonatomic,readonly) MNViewPreviewingHandler * viewPreviewingHandler;                           //@synthesize viewPreviewingHandler=_viewPreviewingHandler - In the implementation block
@property (nonatomic,readonly) MNNavigationCoordinator * navigationCoordinator;                           //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNPhotoNodeActionHandler * nodeActionHandler;                              //@synthesize nodeActionHandler=_nodeActionHandler - In the implementation block
@property (nonatomic,readonly) MNSharedPhotosConfiguration * sharedPhotosConfiguration;                   //@synthesize sharedPhotosConfiguration=_sharedPhotosConfiguration - In the implementation block
@property (nonatomic,readonly) MNThreadPhotosOverlayViewController * overlayViewController;               //@synthesize overlayViewController=_overlayViewController - In the implementation block
@property (nonatomic,readonly) id<MNAuthenticationManager> authenticationManager;                         //@synthesize authenticationManager=_authenticationManager - In the implementation block
@property (nonatomic,readonly) MNPhotoViewNodeConfiguration * nodeConfiguration;                          //@synthesize nodeConfiguration=_nodeConfiguration - In the implementation block
@property (nonatomic,readonly) MNThreadParticipantNameFormatter * nameFormatter;                          //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,readonly) MNImageRequester * imageRequester;                                         //@synthesize imageRequester=_imageRequester - In the implementation block
@property (nonatomic,readonly) MNPhotoViewImageDownloadController * imageDownloadController;              //@synthesize imageDownloadController=_imageDownloadController - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                              //@synthesize configManager=_configManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNNavigationCoordinator *)navigationCoordinator;
-(MNViewPreviewingHandler *)viewPreviewingHandler;
-(id<MNAuthenticationManager>)authenticationManager;
-(MNPhotoViewImageDownloadController *)imageDownloadController;
-(MNSharedPhotosConfiguration *)sharedPhotosConfiguration;
-(MNImageRequester *)imageRequester;
-(id)mediaViewerViewControllerProvider;
-(MNPhotoNodeActionHandler *)nodeActionHandler;
-(MNPhotoViewNodeConfiguration *)nodeConfiguration;
-(id)nonCachedThreadSharedPhotosDefaultDataSource;
-(MNThreadParticipantNameFormatter *)nameFormatter;
-(MNThreadPhotosOverlayViewController *)overlayViewController;
@end
