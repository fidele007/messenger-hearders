/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@class FBProviderMapData, FBUserSession, FBAnalytics, MNNavigationCoordinator, MNThreadNavigationCoordinator, MNProfileImageViewController, FBLanguageNameFormatFactory, FBMSPDeltaHandlerListenerAnnouncer, MNThreadStore, FBImageDownloader, MNGroupsRoomNUXStateController, NSString;

@interface MNJoinableGroupThreadInterstitialViewControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	FBAnalytics* _analytics;
	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	MNProfileImageViewController* _profileImageViewController;
	FBLanguageNameFormatFactory* _languageNameFormatFactory;
	FBMSPDeltaHandlerListenerAnnouncer* _deltaHandlerListenerAnnouncer;
	MNThreadStore* _threadStore;
	FBImageDownloader* _fbImageDownloader;
	MNGroupsRoomNUXStateController* _roomNUXStateController;

}

@property (nonatomic,readonly) FBUserSession * session;                                                         //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBAnalytics * analytics;                                                         //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,readonly) MNNavigationCoordinator * navigationCoordinator;                                 //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNThreadNavigationCoordinator * threadNavigationCoordinator;                     //@synthesize threadNavigationCoordinator=_threadNavigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNProfileImageViewController * profileImageViewController;                       //@synthesize profileImageViewController=_profileImageViewController - In the implementation block
@property (nonatomic,readonly) FBLanguageNameFormatFactory * languageNameFormatFactory;                         //@synthesize languageNameFormatFactory=_languageNameFormatFactory - In the implementation block
@property (nonatomic,readonly) FBMSPDeltaHandlerListenerAnnouncer * deltaHandlerListenerAnnouncer;              //@synthesize deltaHandlerListenerAnnouncer=_deltaHandlerListenerAnnouncer - In the implementation block
@property (nonatomic,readonly) MNThreadStore * threadStore;                                                     //@synthesize threadStore=_threadStore - In the implementation block
@property (nonatomic,readonly) FBImageDownloader * fbImageDownloader;                                           //@synthesize fbImageDownloader=_fbImageDownloader - In the implementation block
@property (nonatomic,readonly) MNGroupsRoomNUXStateController * roomNUXStateController;                         //@synthesize roomNUXStateController=_roomNUXStateController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBAnalytics *)analytics;
-(MNGroupsRoomNUXStateController *)roomNUXStateController;
-(MNNavigationCoordinator *)navigationCoordinator;
-(MNThreadNavigationCoordinator *)threadNavigationCoordinator;
-(MNProfileImageViewController *)profileImageViewController;
-(FBMSPDeltaHandlerListenerAnnouncer *)deltaHandlerListenerAnnouncer;
-(FBLanguageNameFormatFactory *)languageNameFormatFactory;
-(FBImageDownloader *)fbImageDownloader;
-(MNThreadStore *)threadStore;
-(FBUserSession *)session;
@end
