/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNNewThreadViewControllerDelegate.h>
#import <Messenger/MNSimpleNewGroupViewControllerDelegate.h>
#import <Messenger/MNNavigationListener.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class FBProviderCircularDependencyInstanceHolder, MNNavigationCoordinator, MNNewThreadNavigationListenerAnnouncer, MNAppThemeConfiguration, CATransition, NSString;

@interface MNNewThreadNavigationCoordinator : NSObject <MNNewThreadViewControllerDelegate, MNSimpleNewGroupViewControllerDelegate, MNNavigationListener, FBViewerContextClassProvidable> {

	id<FBProvider> _simpleNewGroupViewControllerProvider;
	id<FBProvider> _composeThreadViewControllerProvider;
	id<FBProvider> _secureThreadViewControllerProvider;
	FBProviderCircularDependencyInstanceHolder* _composeThreadViewControllerHolder;
	id<FBProvider> _groupsTabViewControllerProvider;
	MNNavigationCoordinator* _navigationCoordinator;
	MNNewThreadNavigationListenerAnnouncer* _newThreadNavigationAnnouncer;
	MNAppThemeConfiguration* _appThemeConfiguration;
	long long _presentationStyle;
	CATransition* _inlineTransition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)isViewingThread:(id)arg1 ;
-(void)presentNewThreadViewControllerWithConfiguration:(id)arg1 presentationStyle:(long long)arg2 dismissIfPresented:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)presentSimpleNewGroupViewControllerWithConfiguration:(id)arg1 ;
-(void)splitViewControllerWillChangeState:(BOOL)arg1 ;
-(id)_navigationControllerWithViewController:(id)arg1 ;
-(id)initWithSimpleNewGroupViewControllerProvider:(id)arg1 newSecureThreadViewControllerProvider:(id)arg2 composeThreadViewControllerProvider:(id)arg3 navigationCoordinator:(id)arg4 appThemeConfiguration:(id)arg5 ;
-(void)_presentNewThreadViewControllerWithConfiguration:(id)arg1 presentationStyle:(long long)arg2 animated:(BOOL)arg3 ;
-(id)_composeThreadViewController;
-(void)_presentNewThreadViewController:(id)arg1 withPresentationStyle:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_presentViewControllerAsInlineModal:(id)arg1 inNavigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateNavigationControllerState;
-(id)_inlineModalTransition;
-(void)_presentNewGroupOnNavigationController:(id)arg1 configuration:(id)arg2 ;
-(void)_updateNavigationControllerState:(BOOL)arg1 ;
-(void)_logSecretConversationViewControllerInitiatedBySourceViewController:(id)arg1 ;
-(void)_dismissViewControllerrAsInlineModal:(id)arg1 fromNavigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_logNewGroupViewControllerInitiatedBySourceViewController:(id)arg1 ;
-(id)currentViewingThread;
-(void)newThreadViewController:(id)arg1 navigateToThreadWithLocalThreadQuery:(id)arg2 isFlowersBorderModeEnabled:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)newThreadViewControllerDidCancel:(id)arg1 ;
-(void)newThreadViewControllerDidClickOnNewGroup:(id)arg1 withPickedContacts:(id)arg2 ;
-(BOOL)newThreadViewControllerCanShowKeyboard:(id)arg1 ;
-(void)newThreadViewControllerDidPressSecretButton:(id)arg1 ;
-(void)simpleNewGroupViewController:(id)arg1 didCreateGroupThreadWithKey:(id)arg2 ;
-(void)addNewThreadNavigationListener:(id)arg1 ;
-(void)removeNewThreadNavigationListener:(id)arg1 ;
@end

