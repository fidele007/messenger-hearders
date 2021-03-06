/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextInjecting.h>

@protocol MNModalPresentation;
@class FBProviderMapData, MNProfileImageViewController, MNThreadImageManager, FBUserSession, FBMobileConfigContextManager, MNRoomShareSheetViewController, MNRoomForwardFlowControllerFactory, NSString;

@interface MNJoinableGroupShareControllerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	id<MNModalPresentation> _modalPresenter;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	MNRoomShareSheetViewController* _roomShareSheetViewController;
	MNRoomForwardFlowControllerFactory* _roomForwardFlowControllerFactory;

}

@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                                             //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (nonatomic,readonly) MNProfileImageViewController * profileImageViewController;                          //@synthesize profileImageViewController=_profileImageViewController - In the implementation block
@property (nonatomic,readonly) MNThreadImageManager * threadImageManager;                                          //@synthesize threadImageManager=_threadImageManager - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                            //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                       //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNRoomShareSheetViewController * roomShareSheetViewController;                      //@synthesize roomShareSheetViewController=_roomShareSheetViewController - In the implementation block
@property (nonatomic,readonly) MNRoomForwardFlowControllerFactory * roomForwardFlowControllerFactory;              //@synthesize roomForwardFlowControllerFactory=_roomForwardFlowControllerFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNProfileImageViewController *)profileImageViewController;
-(MNThreadImageManager *)threadImageManager;
-(MNRoomForwardFlowControllerFactory *)roomForwardFlowControllerFactory;
-(MNRoomShareSheetViewController *)roomShareSheetViewController;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNModalPresentation>)modalPresenter;
-(FBUserSession *)session;
@end

