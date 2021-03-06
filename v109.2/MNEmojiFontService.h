/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBReachabilityListener.h>
#import <FBSharedFramework/MNEmojiFontPolicyListening.h>
#import <FBSharedFramework/MNServiceControllable.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol FBServiceTransactionMutating;
@class FBGraphQLService, FBReachabilityAnnouncer, FBFontManager, FBFontResourceHandle, MNEmojiFontPolicy, MNEmojiOmnistore, FBMobileConfigContextManager, FBEmoticonTranslator, MNEmojiFontDownloadStateChangeListenerAnnouncer, MNEmojiFontDownloadStateChangeLoggingListener, FBMAppProperties, MNEmojiFontDownloadState, NSString;

@interface MNEmojiFontService : NSObject <FBReachabilityListener, MNEmojiFontPolicyListening, MNServiceControllable, FBViewerContextClassProvidable> {

	FBGraphQLService* _graphQLService;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	FBFontManager* _fontManager;
	FBFontResourceHandle* _internalFontHandle;
	FBFontResourceHandle* _externalFontHandle;
	BOOL _internalFontRegisterInProgress;
	BOOL _externalFontFetchInProgress;
	id<FBServiceTransactionMutating> _externalFontQueryToken;
	unsigned long long _reachabilityState;
	unsigned long long _externalEmojiFontAllowedNetworkStatesForDownload;
	BOOL _serviceRunning;
	MNEmojiFontPolicy* _emojiFontPolicy;
	MNEmojiOmnistore* _emojiOmnistore;
	FBMobileConfigContextManager* _configManager;
	FBEmoticonTranslator* _emoticonTranslator;
	MNEmojiFontDownloadStateChangeListenerAnnouncer* _externalEmojiFontDownloadStateChangeAnnouncer;
	MNEmojiFontDownloadStateChangeLoggingListener* _externalEmojiFontDownloadStateLoggingListener;
	FBMAppProperties* _appProperties;
	MNEmojiFontDownloadState* _externalEmojiFontDownloadState;

}

@property (readonly) MNEmojiFontDownloadState * externalEmojiFontDownloadState;                      //@synthesize externalEmojiFontDownloadState=_externalEmojiFontDownloadState - In the implementation block
@property (assign) unsigned long long externalEmojiFontAllowedNetworkStatesForDownload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithGraphQLService:(id)arg1 reachabilityAnnouncer:(id)arg2 fontManager:(id)arg3 configManager:(id)arg4 emojiFontPolicy:(id)arg5 emojiOmnistore:(id)arg6 emoticonTranslator:(id)arg7 appProperties:(id)arg8 ;
-(void)_setUpMessengerEmojiFontEligibility;
-(void)_registerEmojiInternalFontIfNeeded;
-(void)_fetchEmojiExternalFontIfNeeded;
-(void)_unloadFont;
-(void)_onDidChangeReachabilityState;
-(BOOL)_isMessengerEmojiFontEnabled;
-(unsigned long long)externalEmojiFontAllowedNetworkStatesForDownload;
-(void)_fontManagerDidFailToRegisterInternalFont:(id)arg1 ;
-(void)_fontManagerDidRegisterInternalFont:(id)arg1 ;
-(BOOL)_isExternalFontFetchNeeded;
-(void)_updateExternalEmojiFontDownloadState:(id)arg1 ;
-(void)_setExternalFontResource:(id)arg1 isCached:(BOOL)arg2 ;
-(void)_fontManagerFetchExternalFontResource:(id)arg1 ;
-(void)_fetchMessengerExternalFontDataFromGraphQL;
-(void)_didRecieveGraphQLMessengerEmojiExternalFontSuccess:(id)arg1 ;
-(void)_didRecieveGraphQLMessengerEmojiExternalFontFailure:(id)arg1 ;
-(void)_fontManagerDidFailToFetchExternalFont:(id)arg1 ;
-(void)_fontManagerDidFetchExternalFont:(id)arg1 ;
-(void)_onReachabilityStateChangedToState:(unsigned long long)arg1 ;
-(void)addFontDownloadStateChangeListener:(id)arg1 ;
-(void)removeFontDownloadStateChangeListener:(id)arg1 ;
-(MNEmojiFontDownloadState *)externalEmojiFontDownloadState;
-(void)setExternalEmojiFontAllowedNetworkStatesForDownload:(unsigned long long)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleIdle;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)_didChangeCurrentSession:(id)arg1 ;
-(void)shouldUseMessengerEmojiFontValueDidUpdate:(BOOL)arg1 ;
-(void)dealloc;
-(void)stop;
-(BOOL)_isNetworkReachable;
-(void)start:(id)arg1 ;
@end

