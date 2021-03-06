/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMultiMontageViewControllerDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNModalPresentation, FBProvider;
@class MNAppThemeConfiguration, MNMontageNavigationCoordinatorListenerAnnouncer, MNModalHostViewController, NSString;

@interface MNMontageNavigationCoordinator : NSObject <MNMultiMontageViewControllerDelegate, FBViewerContextClassProvidable> {

	id<MNModalPresentation> _modalPresenter;
	id<FBProvider> _montageViewControllerProvider;
	MNAppThemeConfiguration* _appThemeConfiguration;
	MNMontageNavigationCoordinatorListenerAnnouncer* _announcer;
	MNModalHostViewController* _modalHostViewController;

}

@property (nonatomic,readonly) MNModalHostViewController * modalHostViewController;              //@synthesize modalHostViewController=_modalHostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)navigateToMontageWithIdentifier:(id)arg1 allMontages:(id)arg2 entryPoint:(id)arg3 ;
-(MNModalHostViewController *)modalHostViewController;
-(void)setMontageIdentifier:(id)arg1 allMontages:(id)arg2 messageId:(id)arg3 entryPoint:(id)arg4 ;
-(void)navigateToMontageAnimated:(BOOL)arg1 ;
-(void)navigateToMontageWithIdentifier:(id)arg1 allMontages:(id)arg2 messageId:(id)arg3 entryPoint:(id)arg4 ;
-(id)initWithModalPresenter:(id)arg1 montageViewControllerProvider:(id)arg2 appThemeConfiguration:(id)arg3 ;
-(void)_navigateToMontageWithIdentifier:(id)arg1 allMontages:(id)arg2 messageId:(id)arg3 entryPoint:(id)arg4 animated:(BOOL)arg5 ;
-(id)_createMontageViewControllerWithIdentifier:(id)arg1 allMontages:(id)arg2 messageId:(id)arg3 entryPoint:(id)arg4 ;
-(void)multiMontageViewControllerDidFinishPlaying:(id)arg1 isViewerMontage:(BOOL)arg2 exitAction:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

