/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMAppInitializedListening.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/FBWebRTCHostApplication.h>
#import <Messenger/FBWebRTCCallTabViewControllerUniversalSearchHandling.h>

@class FBWebRTCHostApplicationListenerAnnouncer, MNNavigationCoordinator, MNThreadNavigationCoordinator, MNOmniMNavigationCoordinator, NSString;

@interface MNWebRTCMessengerHostApplication : NSObject <FBMAppInitializedListening, FBViewerContextClassProvidable, FBWebRTCHostApplication, FBWebRTCCallTabViewControllerUniversalSearchHandling> {

	BOOL _started;
	FBWebRTCHostApplicationListenerAnnouncer* _announcer;
	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	MNOmniMNavigationCoordinator* _omniMNavigationCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isHostApplicationReadyForVoIP,nonatomic,readonly) BOOL hostApplicationReadyForVoIP; 
@property (nonatomic,readonly) id<FBModalPresentationStackManager> modalPresentationStackManager; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id<FBModalPresentationStackManager>)modalPresentationStackManager;
-(id)initWithNavigationCoordinator:(id)arg1 threadNavigationCoordinator:(id)arg2 omniMNavigationCoordinator:(id)arg3 ;
-(id)_findTopModalViewController;
-(id)_findRootViewController;
-(void)applicationDidCompleteSettingUpBackgroundServices;
-(void)applicationDidCompleteSettingUpAllServices;
-(id)modalParentViewController;
-(void)addHostApplicationListener:(id)arg1 ;
-(void)removeHostApplicationListener:(id)arg1 ;
-(BOOL)isHostApplicationReadyForVoIP;
-(void)handleSelectedSearchResultWithLocalThreadKey:(id)arg1 ;
-(void)handleSelectedSearchResultWithViewController:(id)arg1 ;
-(void)handleSelectedDirectM;
@end

