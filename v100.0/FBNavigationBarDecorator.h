/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBNuxStepChainControllerDelegate.h>
#import <Messenger/FBNavigationBarSearchHandlerDelegate.h>
#import <Messenger/FBNavigationBarDecorating.h>

@protocol FBNavigationBarButtonProviding;
@class UINavigationController, FBNavigationBarSearchHandler, FBJewelController, FBUserSession, FBNavigationBarCurrentUserView, FBNuxController, FBNavigationBarCurrentUserController, NSString;

@interface FBNavigationBarDecorator : NSObject <FBNuxStepChainControllerDelegate, FBNavigationBarSearchHandlerDelegate, FBNavigationBarDecorating> {

	FBUserSession* _session;
	FBNavigationBarCurrentUserView* _currentUserView;
	id _notificationToken;
	FBNuxController* _followNuxController;
	/*^block*/id _cameraTooltipBlock;
	BOOL _hasCameraButton;
	BOOL _hasMoreOptionsButton;
	BOOL _hasCurrentUserView;
	BOOL _shouldSupportVoiceSearchButton;
	UINavigationController* _navigationController;
	FBNavigationBarSearchHandler* _searchHandler;
	FBJewelController* _jewelController;
	/*^block*/id _chatbarBlock;
	/*^block*/id _cameraBlock;
	/*^block*/id _messengerBlock;
	/*^block*/id _inboxBlock;
	id<FBNavigationBarButtonProviding> _pinnedConversationsButtonProvider;
	unsigned long long _messengerButtonSide;
	FBNavigationBarCurrentUserController* _currentUserController;

}

@property (nonatomic,copy) id chatbarBlock;                                                                            //@synthesize chatbarBlock=_chatbarBlock - In the implementation block
@property (nonatomic,copy) id cameraBlock;                                                                             //@synthesize cameraBlock=_cameraBlock - In the implementation block
@property (nonatomic,copy) id messengerBlock;                                                                          //@synthesize messengerBlock=_messengerBlock - In the implementation block
@property (nonatomic,copy) id inboxBlock;                                                                              //@synthesize inboxBlock=_inboxBlock - In the implementation block
@property (assign,nonatomic,__weak) id<FBNavigationBarButtonProviding> pinnedConversationsButtonProvider;              //@synthesize pinnedConversationsButtonProvider=_pinnedConversationsButtonProvider - In the implementation block
@property (assign,nonatomic) BOOL hasCameraButton;                                                                     //@synthesize hasCameraButton=_hasCameraButton - In the implementation block
@property (assign,nonatomic) unsigned long long messengerButtonSide;                                                   //@synthesize messengerButtonSide=_messengerButtonSide - In the implementation block
@property (assign,nonatomic) BOOL hasMoreOptionsButton;                                                                //@synthesize hasMoreOptionsButton=_hasMoreOptionsButton - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentUserView;                                                                  //@synthesize hasCurrentUserView=_hasCurrentUserView - In the implementation block
@property (nonatomic,retain) FBNavigationBarCurrentUserController * currentUserController;                             //@synthesize currentUserController=_currentUserController - In the implementation block
@property (assign,nonatomic) BOOL shouldSupportVoiceSearchButton;                                                      //@synthesize shouldSupportVoiceSearchButton=_shouldSupportVoiceSearchButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UINavigationController * navigationController;                                   //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) FBNavigationBarSearchHandler * searchHandler;                                           //@synthesize searchHandler=_searchHandler - In the implementation block
@property (nonatomic,retain) FBJewelController * jewelController;                                                      //@synthesize jewelController=_jewelController - In the implementation block
-(void)stepChainControllerDidEnd:(id)arg1 ;
-(void)stepChainController:(id)arg1 didTransitionToStep:(id)arg2 ;
-(void)stepChainControllerDidCancel:(id)arg1 onStep:(id)arg2 ;
-(void)_didTapCameraButton;
-(void)updateNavigationBarLayout;
-(void)decorateNavigationItemForViewController:(id)arg1 isRoot:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_setRightBarButtonForViewControllerIfNecessary:(id)arg1 ;
-(id)_newCameraNavigationBarButton;
-(BOOL)_hasLeftMessengerButton;
-(id)_newMessengerNavigationBarButton;
-(void)_backButtonAction:(id)arg1 ;
-(void)_launchSearch:(id)arg1 event:(id)arg2 ;
-(void)_setupFollowNUX:(id)arg1 ;
-(id)_primaryRightBarButtonForViewController:(id)arg1 ;
-(id)_secondaryRightBarButtonForViewController:(id)arg1 ;
-(void)_didTapChatbarButton;
-(BOOL)_hasRightMessengerButton;
-(void)_registerFollowNux:(id)arg1 ;
-(BOOL)_hasDiveBarIcon;
-(CGRect)_frameForSearchFieldWithDestinationViewController:(id)arg1 isRoot:(BOOL)arg2 ;
-(void)searchHandlerRequestsLayout:(id)arg1 ;
-(CGRect)searchHandler:(id)arg1 frameForSearchFieldInViewController:(id)arg2 isRoot:(BOOL)arg3 ;
-(id)initWithNavigationController:(id)arg1 session:(id)arg2 ;
-(void)setupNavigationBar;
-(FBNavigationBarSearchHandler *)searchHandler;
-(FBJewelController *)jewelController;
-(void)setJewelController:(FBJewelController *)arg1 ;
-(void)setCameraBlock:(/*^block*/id)arg1 cameraTooltipBlock:(/*^block*/id)arg2 ;
-(id)chatbarBlock;
-(void)setChatbarBlock:(id)arg1 ;
-(id)cameraBlock;
-(void)setCameraBlock:(id)arg1 ;
-(id)messengerBlock;
-(void)setMessengerBlock:(id)arg1 ;
-(id)inboxBlock;
-(void)setInboxBlock:(id)arg1 ;
-(id<FBNavigationBarButtonProviding>)pinnedConversationsButtonProvider;
-(void)setPinnedConversationsButtonProvider:(id<FBNavigationBarButtonProviding>)arg1 ;
-(BOOL)hasCameraButton;
-(void)setHasCameraButton:(BOOL)arg1 ;
-(unsigned long long)messengerButtonSide;
-(void)setMessengerButtonSide:(unsigned long long)arg1 ;
-(BOOL)hasMoreOptionsButton;
-(void)setHasMoreOptionsButton:(BOOL)arg1 ;
-(BOOL)hasCurrentUserView;
-(void)setHasCurrentUserView:(BOOL)arg1 ;
-(FBNavigationBarCurrentUserController *)currentUserController;
-(void)setCurrentUserController:(FBNavigationBarCurrentUserController *)arg1 ;
-(BOOL)shouldSupportVoiceSearchButton;
-(void)setShouldSupportVoiceSearchButton:(BOOL)arg1 ;
-(void)dealloc;
-(UINavigationController *)navigationController;
-(id)_navigationBar;
@end

