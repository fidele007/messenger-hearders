/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/FBMAppInitializedListening.h>

@protocol FBProvider, MNOpenURLsHandling;
@class MNMessengerPlatformUrlHandler, NSArray, FBKeychainItemController, FBDelayer, NSString;

@interface MNUrlHandler : NSObject <FBViewerContextClassProvidable, FBMAppInitializedListening> {

	BOOL _appReady;
	id<FBProvider> _navigationCoordinatorProvider;
	id<FBProvider> _newThreadNavigationCoordinatorProvider;
	id<FBProvider> _threadNavigationCoordinatorProvider;
	id<FBProvider> _threadSetProvider;
	id<FBProvider> _broadcastUrlHandlerProvider;
	id<FBProvider> _treehouseRedirectionControllerProvider;
	id<FBProvider> _redirectionButtonDisplayCoordinatorProvider;
	id<FBProvider> _platformUrlHandlerProvider;
	id<FBProvider> _voipUrlHandlerProvider;
	id<FBProvider> _sessionProvider;
	id<FBProvider> _mnUrlRedirectHandlerProvider;
	id<FBProvider> _stickeredForwardMessageHandlerProvider;
	id<FBProvider> _messengerPlatformUrlHandlerProvider;
	id<FBProvider> _URLBuilderProvider;
	id<FBProvider> _balloonsNuxInterstitialControllerProvider;
	id<FBProvider> _uniqueIDInterstitialControllerProvider;
	id<FBProvider> _accountSwitchingPolicyProvider;
	id<FBProvider> _accountSwitchingPresentationCoordinatorProvider;
	id<FBProvider> _threadNavigationPostbackDataURLParserProvider;
	id<FBProvider> _performanceMarkerProvider;
	MNMessengerPlatformUrlHandler* _messengerPlatformUrlHandler;
	NSArray* _handlerExtensions;
	FBKeychainItemController* _contextBasedMainAppKeychainItemController;
	id<MNOpenURLsHandling> _openURLsHandler;
	FBDelayer* _servicesInitializedDelayer;
	NSString* _sourceApplication;
	NSString* _urlHandlingUuid;

}

@property (nonatomic,copy) NSString * urlHandlingUuid;                                                 //@synthesize urlHandlingUuid=_urlHandlingUuid - In the implementation block
@property (nonatomic,retain) MNMessengerPlatformUrlHandler * messengerPlatformUrlHandler;              //@synthesize messengerPlatformUrlHandler=_messengerPlatformUrlHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)handleOpenUrl:(id)arg1 sourceApplication:(id)arg2 ;
-(void)applicationDidCompleteSettingUpBackgroundServices;
-(void)applicationDidCompleteSettingUpAllServices;
-(id)initWithNavigationCoordinatorProvider:(id)arg1 newThreadNavigationCoordinatorProvider:(id)arg2 threadNavigationCoordinatorProvider:(id)arg3 broadcastUrlHandlerProvider:(id)arg4 redirectionButtonDisplayCoordinatorProvider:(id)arg5 platformUrlHandlerProvider:(id)arg6 voipUrlHandlerProvider:(id)arg7 mnUrlRedirectHandlerProvider:(id)arg8 stickeredForwardMessageHandlerProvider:(id)arg9 messengerPlatformUrlHandlerProvider:(id)arg10 sessionProvider:(id)arg11 URLBuilderProvider:(id)arg12 balloonsNuxInterstitialControllerProvider:(id)arg13 uniqueIDInterstitialControllerProvider:(id)arg14 accountSwitchingPolicyProvider:(id)arg15 accountSwitchingPresentationCoordinatorProvider:(id)arg16 threadNavigationPostbackDataURLParserProvider:(id)arg17 performanceMarkerProvider:(id)arg18 contextBasedMainAppKeychainItemController:(id)arg19 ;
-(MNMessengerPlatformUrlHandler *)messengerPlatformUrlHandler;
-(void)setUrlHandlingUuid:(NSString *)arg1 ;
-(void)_executeOpenUrl:(id)arg1 sourceApplication:(id)arg2 ;
-(void)_executeOpenURLs:(id)arg1 options:(id)arg2 ;
-(BOOL)_shouldSwitchToAccountWithRedirectorFBID:(id)arg1 ;
-(BOOL)_hasSameUserIdAsFacebookApp;
-(id)_redirectItemFromSourceApplication:(id)arg1 ;
-(BOOL)openURLs:(id)arg1 options:(id)arg2 ;
-(id)_keychainItemControllerFromSourceApplication:(id)arg1 ;
-(void)setHandlerExtensions:(id)arg1 ;
-(void)setOpenURLsHandler:(id)arg1 ;
-(NSString *)urlHandlingUuid;
-(void)setMessengerPlatformUrlHandler:(MNMessengerPlatformUrlHandler *)arg1 ;
@end

