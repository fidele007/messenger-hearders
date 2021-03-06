/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@protocol MNModalPresentation;
@class FBProviderMapData, MNForwardFlowControllerFactory, MNTopContactsRetriever, MNProfileImageViewController, MNThreadImageManager, FBUserSession, FBMobileConfigContextManager, MNRoomShareSheetViewController, NSString;

@interface MNJoinableGroupShareControllerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	id<MNModalPresentation> _modalPresenter;
	MNForwardFlowControllerFactory* _forwardFlowControllerFactory;
	MNTopContactsRetriever* _topContactsRetriever;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	MNRoomShareSheetViewController* _roomShareSheetViewController;

}

@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                                     //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (nonatomic,readonly) MNForwardFlowControllerFactory * forwardFlowControllerFactory;              //@synthesize forwardFlowControllerFactory=_forwardFlowControllerFactory - In the implementation block
@property (nonatomic,readonly) MNTopContactsRetriever * topContactsRetriever;                              //@synthesize topContactsRetriever=_topContactsRetriever - In the implementation block
@property (nonatomic,readonly) MNProfileImageViewController * profileImageViewController;                  //@synthesize profileImageViewController=_profileImageViewController - In the implementation block
@property (nonatomic,readonly) MNThreadImageManager * threadImageManager;                                  //@synthesize threadImageManager=_threadImageManager - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                               //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNRoomShareSheetViewController * roomShareSheetViewController;              //@synthesize roomShareSheetViewController=_roomShareSheetViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(id<MNModalPresentation>)modalPresenter;
-(MNProfileImageViewController *)profileImageViewController;
-(MNThreadImageManager *)threadImageManager;
-(MNRoomShareSheetViewController *)roomShareSheetViewController;
-(MNForwardFlowControllerFactory *)forwardFlowControllerFactory;
-(MNTopContactsRetriever *)topContactsRetriever;
-(id)forwardSendingProvider;
-(FBUserSession *)session;
@end

