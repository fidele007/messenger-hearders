/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNApplicationDelegateListener.h>
#import <Messenger/MNAppSessionListener.h>

@protocol FBProvider;
@class NSDictionary, NSString;

@interface MNMontageComposerLaunchCoordinator : NSObject <MNApplicationDelegateListener, MNAppSessionListener> {

	NSDictionary* _launchOptions;
	id<FBProvider> _montageComposerPresenterProvider;
	id<FBProvider> _mobileConfigContextManagerProvider;
	BOOL _coldStartFinished;
	BOOL _openToCameraDisabled;
	BOOL _isLoggedInUIPresented;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applicationDidPerformNotificationNavigation;
-(void)applicationDidPerformActionForShortcutItem:(id)arg1 ;
-(void)applicationDidContinueUserActivity:(id)arg1 ;
-(void)applicationDidOpenURL:(id)arg1 ;
-(id)initWithLaunchOptions:(id)arg1 montageComposerPresenterProvider:(id)arg2 mobileConfigContextManagerProvider:(id)arg3 ;
-(void)_presentMontageComposerIfNeeded;
-(void)_appDidOpenWithNavigationPerformed;
-(void)willPresentLoggedInUI;
-(void)didPresentLoggedInUI;
-(void)willPresentLoggedOutUI;
-(void)didPresentLoggedOutUI;
-(void)_appDidEnterBackground;
-(void)dealloc;
-(void)_appDidBecomeActive;
@end

