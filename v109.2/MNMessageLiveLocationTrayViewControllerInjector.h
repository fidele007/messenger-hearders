/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBInjecting.h>

@protocol MNModalPresentation;
@class FBProviderMapData, FBUserSession, MNMessageLiveLocationThreadSummaryManager, MNMessageLiveLocationIncomingManager, MNMessageLiveLocationOutgoingManager, MNMessageLiveLocationConfigManager, MNThreadStore, MNLocationPickerPresenter, MNLocationPickerViewControllerFactory, MNMessengerLiveLocationTrayPrePromptViewController, NSString;

@interface MNMessageLiveLocationTrayViewControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	MNMessageLiveLocationThreadSummaryManager* _threadSummaryManager;
	MNMessageLiveLocationIncomingManager* _incomingManager;
	MNMessageLiveLocationOutgoingManager* _outgoingManager;
	MNMessageLiveLocationConfigManager* _configManager;
	MNThreadStore* _threadStore;
	MNLocationPickerPresenter* _locationPickerPresenter;
	MNLocationPickerViewControllerFactory* _locationPickerViewControllerFactory;
	MNMessengerLiveLocationTrayPrePromptViewController* _prePromptViewController;
	id<MNModalPresentation> _modalPresenter;

}

@property (nonatomic,readonly) FBUserSession * session;                                                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) MNMessageLiveLocationThreadSummaryManager * threadSummaryManager;                          //@synthesize threadSummaryManager=_threadSummaryManager - In the implementation block
@property (nonatomic,readonly) MNMessageLiveLocationIncomingManager * incomingManager;                                    //@synthesize incomingManager=_incomingManager - In the implementation block
@property (nonatomic,readonly) MNMessageLiveLocationOutgoingManager * outgoingManager;                                    //@synthesize outgoingManager=_outgoingManager - In the implementation block
@property (nonatomic,readonly) MNMessageLiveLocationConfigManager * configManager;                                        //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNThreadStore * threadStore;                                                               //@synthesize threadStore=_threadStore - In the implementation block
@property (nonatomic,readonly) MNLocationPickerPresenter * locationPickerPresenter;                                       //@synthesize locationPickerPresenter=_locationPickerPresenter - In the implementation block
@property (nonatomic,readonly) MNLocationPickerViewControllerFactory * locationPickerViewControllerFactory;               //@synthesize locationPickerViewControllerFactory=_locationPickerViewControllerFactory - In the implementation block
@property (nonatomic,readonly) MNMessengerLiveLocationTrayPrePromptViewController * prePromptViewController;              //@synthesize prePromptViewController=_prePromptViewController - In the implementation block
@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                                                    //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(MNMessageLiveLocationConfigManager *)configManager;
-(MNThreadStore *)threadStore;
-(MNLocationPickerPresenter *)locationPickerPresenter;
-(MNMessageLiveLocationIncomingManager *)incomingManager;
-(MNMessageLiveLocationOutgoingManager *)outgoingManager;
-(MNLocationPickerViewControllerFactory *)locationPickerViewControllerFactory;
-(MNMessengerLiveLocationTrayPrePromptViewController *)prePromptViewController;
-(MNMessageLiveLocationThreadSummaryManager *)threadSummaryManager;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNModalPresentation>)modalPresenter;
-(FBUserSession *)session;
@end

