/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(void)applicationDidPerformActionForShortcutItem:(id)arg1 ;
-(void)applicationDidOpenURL:(id)arg1 ;
-(void)applicationDidPerformNotificationNavigation;
-(void)applicationDidContinueUserActivity:(id)arg1 ;
-(void)_appDidEnterBackground;
-(void)_presentMontageComposerIfNeeded;
-(void)_appDidOpenWithNavigationPerformed;
-(void)willPresentLoggedInUI;
-(void)didPresentLoggedInUI;
-(void)willPresentLoggedOutUI;
-(void)didPresentLoggedOutUI;
-(id)initWithLaunchOptions:(id)arg1 montageComposerPresenterProvider:(id)arg2 mobileConfigContextManagerProvider:(id)arg3 ;
-(void)dealloc;
-(void)_appDidBecomeActive;
@end

