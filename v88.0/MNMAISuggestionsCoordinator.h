/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMAISuggestionsListener.h>
#import <Messenger/MNMAISuggestionsViewControllerDelegate.h>
#import <Messenger/MNMAISuggestionsExpirationMonitorDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNAuthenticationManager, MNMAISuggestionsCoordinatorDelegate;
@class FBMobileConfigContextManager, FBUserSession, MNThreadViewModel, MNMAISuggestionsService, MNMAISuggestionsHandler, MNMAISuggestionsViewController, MNMAISuggestionsExpirationMonitor, NSString;

@interface MNMAISuggestionsCoordinator : NSObject <MNMAISuggestionsListener, MNMAISuggestionsViewControllerDelegate, MNMAISuggestionsExpirationMonitorDelegate, FBClassProvidable, MNThreadViewModelConfigurable> {

	FBMobileConfigContextManager* _configManager;
	FBUserSession* _session;
	id<MNAuthenticationManager> _authManager;
	MNThreadViewModel* _threadViewModel;
	MNMAISuggestionsService* _suggestionsService;
	MNMAISuggestionsHandler* _suggestionsHandler;
	MNMAISuggestionsViewController* _suggestionsViewController;
	MNMAISuggestionsExpirationMonitor* _expirationMonitor;
	id<MNMAISuggestionsCoordinatorDelegate> _delegate;

}

@property (nonatomic,readonly) MNMAISuggestionsViewController * suggestionsViewController;              //@synthesize suggestionsViewController=_suggestionsViewController - In the implementation block
@property (assign,nonatomic,__weak) id<MNMAISuggestionsCoordinatorDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSuggestionsView; 
@property (nonatomic,readonly) BOOL canShowSuggestionsView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(BOOL)shouldShowSuggestionsView;
-(MNMAISuggestionsViewController *)suggestionsViewController;
-(void)_updateMAISuggestionsBarWithSuggestions:(id)arg1 ;
-(id)_currentThreadKey;
-(void)_logEvent:(id)arg1 suggestion:(id)arg2 position:(unsigned long long)arg3 ;
-(void)_logEvent:(id)arg1 suggestion:(id)arg2 ;
-(BOOL)_shouldShowSuggestion:(id)arg1 ;
-(void)_markSuggestionSeen:(id)arg1 withPosition:(unsigned long long)arg2 ;
-(void)_markSuggestionHidden:(id)arg1 ;
-(BOOL)_canPresentRideServiceSuggestions;
-(BOOL)_canPresentPaymentSuggestions;
-(BOOL)_canPresentReminderSuggestions;
-(BOOL)_suggestionExpirationEnabled;
-(void)didUpdateExpiredSuggestionsForThreadKey:(id)arg1 ;
-(void)mAISuggestionViewController:(id)arg1 didSelectSuggestion:(id)arg2 ;
-(void)mAISuggestionViewController:(id)arg1 willDismissSuggestions:(id)arg2 ;
-(void)mAISuggestionViewController:(id)arg1 didDismissSuggestions:(id)arg2 ;
-(void)suggestionDidExpire:(id)arg1 ;
-(BOOL)canShowSuggestionsView;
-(void)setDelegate:(id<MNMAISuggestionsCoordinatorDelegate>)arg1 ;
-(id<MNMAISuggestionsCoordinatorDelegate>)delegate;
@end

