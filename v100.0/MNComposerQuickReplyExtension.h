/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAbstractComposerTrayExtension.h>
#import <Messenger/MNComposeQuickReplyViewControllerDelegate.h>
#import <Messenger/MNMessagingQuickReplyStoreListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNAuthenticationManager, MNMessagingQuickReplyStoreListener, MNComposerExtensionPresentationStrategy, MNComposerExtensionDelegate, MNComposerExtensionSendDelegate;
@class MNMessagingQuickReplyStoreService, FBLazyCreator, MNMAIThreadChecker, MNComposerExtensionQuickRepliesExperimentContext, FBMThreadKey, NSArray, UIColor, MNComposeQuickReplyViewController, NSString;

@interface MNComposerQuickReplyExtension : MNAbstractComposerTrayExtension <MNComposeQuickReplyViewControllerDelegate, MNMessagingQuickReplyStoreListener, FBClassProvidable> {

	id<MNAuthenticationManager> _authManager;
	MNMessagingQuickReplyStoreService* _messagingQuickReplyStoreService;
	FBLazyCreator* _composerIconCreator;
	MNMAIThreadChecker* _mAIThreadChecker;
	MNComposerExtensionQuickRepliesExperimentContext* _quickRepliesExperimentContext;
	id<MNMessagingQuickReplyStoreListener> _messagingQuickReplyStoreListenerDispatcher;
	id<MNComposerExtensionPresentationStrategy> _presentationStrategy;
	FBMThreadKey* _currentThreadKey;
	NSArray* _defaultQuickReplies;
	BOOL _defaultQuickRepliesEnabled;
	id<MNComposerExtensionDelegate> _delegate;
	id<MNComposerExtensionSendDelegate> _sendDelegate;
	UIColor* _tintColor;
	NSArray* _quickReplies;
	MNComposeQuickReplyViewController* _quickReplyViewController;

}

@property (nonatomic,retain) MNComposeQuickReplyViewController * quickReplyViewController;              //@synthesize quickReplyViewController=_quickReplyViewController - In the implementation block
@property (nonatomic,copy) NSArray * quickReplies;                                                      //@synthesize quickReplies=_quickReplies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_composerIcon;
-(void)setUpWithInitiator:(id)arg1 ;
-(id)extensionModule;
-(BOOL)shouldPromote;
-(BOOL)shouldPresent:(BOOL)arg1 ;
-(id)presentationStrategy;
-(long long)inputSource;
-(BOOL)isEligible;
-(id)sendDelegate;
-(void)setSendDelegate:(id)arg1 ;
-(id)viewControllerForPresentation;
-(void)setQuickReplies:(NSArray *)arg1 ;
-(NSArray *)quickReplies;
-(void)composeQuickReplyViewController:(id)arg1 didSelectQuickReply:(id)arg2 ;
-(void)messagingQuickReplyStoreDidUpdateQuickRepliesForThreadKey:(id)arg1 ;
-(void)_updateVisibleQuickReplies;
-(void)_setCurrentThreadKeyAndUpdateDefaultQuickReplies:(id)arg1 ;
-(MNComposeQuickReplyViewController *)quickReplyViewController;
-(void)_processDefaultQuickReplies:(id)arg1 ;
-(void)_fetchDefaultQuickRepliesForCurrentThread;
-(void)setQuickReplyViewController:(MNComposeQuickReplyViewController *)arg1 ;
-(id)extensionIdentifier;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)tintColor;
-(void)setTintColor:(id)arg1 ;
-(id)tabBarItem;
-(void)tearDown;
@end

