/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@protocol MNModalPresentation;
@class FBProviderMapData, FBUserSession, FBMobileConfigContextManager, FBImageDownloader, MNBusinessWebSharePeoplePickerViewControllerFactory, MNExternalDataToForwardContentMapper, NSString;

@interface MNBusinessWebShareHandlerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	FBImageDownloader* _imageDownloader;
	id<MNModalPresentation> _modalPresenter;
	MNBusinessWebSharePeoplePickerViewControllerFactory* _peoplePickerViewControllerFactory;
	MNExternalDataToForwardContentMapper* _externalDataToForwardContentMapper;

}

@property (nonatomic,readonly) FBUserSession * session;                                                                              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                                         //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) FBImageDownloader * imageDownloader;                                                                  //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                                                               //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (nonatomic,readonly) MNBusinessWebSharePeoplePickerViewControllerFactory * peoplePickerViewControllerFactory;              //@synthesize peoplePickerViewControllerFactory=_peoplePickerViewControllerFactory - In the implementation block
@property (nonatomic,readonly) MNExternalDataToForwardContentMapper * externalDataToForwardContentMapper;                            //@synthesize externalDataToForwardContentMapper=_externalDataToForwardContentMapper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(id<MNModalPresentation>)modalPresenter;
-(FBImageDownloader *)imageDownloader;
-(MNExternalDataToForwardContentMapper *)externalDataToForwardContentMapper;
-(MNBusinessWebSharePeoplePickerViewControllerFactory *)peoplePickerViewControllerFactory;
-(FBUserSession *)session;
@end

