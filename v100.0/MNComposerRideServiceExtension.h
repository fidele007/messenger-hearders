/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAbstractComposerTrayExtension.h>
#import <Messenger/MNRideServiceProviderListFetcherDelegate.h>
#import <Messenger/FBPopoverControllerDelegate.h>
#import <Messenger/MNRideServicePresenterDelegate.h>
#import <Messenger/MNRideServiceProviderListViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNComposerExtensionSendDelegate, MNComposerExtensionDelegate;
@class FBImageDownloader, MNBusinessNavigationHandler, MNComposerExtensionTrayPresentationStrategy, FBUserSession, FBLazyCreator, MNRideServiceProviderListFetcher, FBPopoverController, NSTimer, MNRideServiceProviderListViewController, FBMSyncedThreadKey, NSString;

@interface MNComposerRideServiceExtension : MNAbstractComposerTrayExtension <MNRideServiceProviderListFetcherDelegate, FBPopoverControllerDelegate, MNRideServicePresenterDelegate, MNRideServiceProviderListViewControllerDelegate, FBClassProvidable> {

	FBImageDownloader* _imageDownloader;
	MNBusinessNavigationHandler* _navigationHandler;
	MNComposerExtensionTrayPresentationStrategy* _presentationStrategy;
	FBUserSession* _session;
	FBLazyCreator* _rideServicePresenterCreator;
	FBLazyCreator* _locationRequestHandlerCreator;
	MNRideServiceProviderListFetcher* _providerListFetcher;
	FBPopoverController* _popoverController;
	NSTimer* _showLoadingIndicatorTimer;
	MNRideServiceProviderListViewController* _providerListViewController;
	FBMSyncedThreadKey* _threadKey;
	BOOL _providerListFetcherRequestTentativelyCancelled;
	id<MNComposerExtensionSendDelegate> _sendDelegate;
	id<MNComposerExtensionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(id)_composerIcon;
-(void)setUpWithInitiator:(id)arg1 ;
-(id)extensionModule;
-(BOOL)shouldPromote;
-(void)didSelect:(BOOL)arg1 ;
-(BOOL)shouldPresent:(BOOL)arg1 ;
-(id)presentationStrategy;
-(BOOL)isEligible;
-(id)sendDelegate;
-(void)setSendDelegate:(id)arg1 ;
-(id)initWithSession:(id)arg1 navigationHandler:(id)arg2 imageDownloader:(id)arg3 rideServicePresenterProvider:(id)arg4 locationRequestHandlerProvider:(id)arg5 ;
-(void)_showLoadingViewWithDelay:(double)arg1 ;
-(void)_startFetchingRideServiceProviders;
-(BOOL)_multipleProvidersEnabled;
-(id)_viewControllerForPresentation;
-(id)_getProviderListViewController;
-(void)_showRideProviderListInTrayWithData:(id)arg1 ;
-(BOOL)_threadIsWithRideProvider;
-(id)_currentRideServiceForRideProvidersData:(id)arg1 ;
-(void)_showRideServiceUnavailableAlert;
-(void)_showLoadingViewTimerDidFire;
-(void)rideServiceProviderListFetcher:(id)arg1 didFinishFetchingWithData:(id)arg2 ;
-(void)rideServiceProviderListFetcher:(id)arg1 didFailFetchingWithError:(id)arg2 ;
-(void)rideServicePresenterDidRequestRide:(id)arg1 ;
-(void)rideServicePresenter:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)rideServicePresenter:(id)arg1 didDismissViewController:(id)arg2 shouldRefetchData:(BOOL)arg3 ;
-(void)rideServiceProviderListViewController:(id)arg1 didSelectProviderWithData:(id)arg2 ;
-(id)extensionIdentifier;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(long long)category;
-(id)tabBarItem;
@end

