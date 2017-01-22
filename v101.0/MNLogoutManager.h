/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRequestDelegate.h>

@protocol OrcaLogoutHandler, MNThreadSummaryCacheWriting, MNPushKitRegistering, FBMPaymentsBridge;
@class FBFacebook, FBAPISessionStore, OrcaPersistManager, FBMessagingStore, MNUserSettings, OrcaPushRegistrar, FBExceptionHandler, NSHTTPCookieStorage, FBMImageViewDownloader, FBMStickerPurchaseManager, FBUserSession, FBMMQTTConnectionManager, FBPreviouslySyncedContactsStore, FBMRequest, NSUserDefaults, MNSPDataStore, MNAudioCache, MNNonDiscardingBlobStore, FBOmnistore, MNContactSyncReminderController, MNAccountSettings, MNCoreTextSizeCache, FBMAPNSPushHandler, MNPlatformConversionTrackingSettings, NSString;

@interface MNLogoutManager : NSObject <FBRequestDelegate> {

	BOOL _isTornDown;
	id<OrcaLogoutHandler> _logoutHandler;
	FBFacebook* _facebook;
	FBAPISessionStore* _apiSessionStore;
	id<MNThreadSummaryCacheWriting> _threadSummaryCacheWriter;
	OrcaPersistManager* _persistManager;
	FBMessagingStore* _messagingStore;
	MNUserSettings* _userSettings;
	OrcaPushRegistrar* _pushRegistrar;
	id<MNPushKitRegistering> _pushkitRegistrar;
	FBExceptionHandler* _exceptionHandler;
	NSHTTPCookieStorage* _httpCookieStorage;
	FBMImageViewDownloader* _imageViewDownloader;
	FBMStickerPurchaseManager* _stickerPurchaseManager;
	FBUserSession* _session;
	FBMMQTTConnectionManager* _connectionManager;
	FBPreviouslySyncedContactsStore* _previouslySyncedContactsStore;
	FBMRequest* _logoutRequest;
	NSUserDefaults* _userDefaults;
	/*^block*/id _logoutFinishedBlock;
	MNSPDataStore* _spDataStore;
	MNAudioCache* _audioCache;
	id<FBMPaymentsBridge> _paymentsBridge;
	MNNonDiscardingBlobStore* _blobStore;
	FBOmnistore* _omnistore;
	MNContactSyncReminderController* _contactSyncReminderController;
	MNAccountSettings* _accountSettings;
	MNCoreTextSizeCache* _coreTextSizeCache;
	FBMAPNSPushHandler* _apnsPushHandler;
	MNPlatformConversionTrackingSettings* _platformConversionTrackingSettings;

}

@property (nonatomic,retain) id<OrcaLogoutHandler> logoutHandler;                                                    //@synthesize logoutHandler=_logoutHandler - In the implementation block
@property (nonatomic,retain) FBFacebook * facebook;                                                                  //@synthesize facebook=_facebook - In the implementation block
@property (nonatomic,retain) FBAPISessionStore * apiSessionStore;                                                    //@synthesize apiSessionStore=_apiSessionStore - In the implementation block
@property (nonatomic,retain) id<MNThreadSummaryCacheWriting> threadSummaryCacheWriter;                               //@synthesize threadSummaryCacheWriter=_threadSummaryCacheWriter - In the implementation block
@property (nonatomic,retain) OrcaPersistManager * persistManager;                                                    //@synthesize persistManager=_persistManager - In the implementation block
@property (nonatomic,retain) FBMessagingStore * messagingStore;                                                      //@synthesize messagingStore=_messagingStore - In the implementation block
@property (nonatomic,retain) MNUserSettings * userSettings;                                                          //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,retain) OrcaPushRegistrar * pushRegistrar;                                                      //@synthesize pushRegistrar=_pushRegistrar - In the implementation block
@property (nonatomic,retain) id<MNPushKitRegistering> pushkitRegistrar;                                              //@synthesize pushkitRegistrar=_pushkitRegistrar - In the implementation block
@property (nonatomic,retain) FBExceptionHandler * exceptionHandler;                                                  //@synthesize exceptionHandler=_exceptionHandler - In the implementation block
@property (nonatomic,retain) NSHTTPCookieStorage * httpCookieStorage;                                                //@synthesize httpCookieStorage=_httpCookieStorage - In the implementation block
@property (nonatomic,retain) FBMImageViewDownloader * imageViewDownloader;                                           //@synthesize imageViewDownloader=_imageViewDownloader - In the implementation block
@property (nonatomic,retain) FBMStickerPurchaseManager * stickerPurchaseManager;                                     //@synthesize stickerPurchaseManager=_stickerPurchaseManager - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMMQTTConnectionManager * connectionManager;                                           //@synthesize connectionManager=_connectionManager - In the implementation block
@property (nonatomic,retain) FBPreviouslySyncedContactsStore * previouslySyncedContactsStore;                        //@synthesize previouslySyncedContactsStore=_previouslySyncedContactsStore - In the implementation block
@property (nonatomic,retain) FBMRequest * logoutRequest;                                                             //@synthesize logoutRequest=_logoutRequest - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                                                          //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,copy) id logoutFinishedBlock;                                                                   //@synthesize logoutFinishedBlock=_logoutFinishedBlock - In the implementation block
@property (nonatomic,retain) MNSPDataStore * spDataStore;                                                            //@synthesize spDataStore=_spDataStore - In the implementation block
@property (nonatomic,retain) MNAudioCache * audioCache;                                                              //@synthesize audioCache=_audioCache - In the implementation block
@property (nonatomic,retain) id<FBMPaymentsBridge> paymentsBridge;                                                   //@synthesize paymentsBridge=_paymentsBridge - In the implementation block
@property (nonatomic,retain) MNNonDiscardingBlobStore * blobStore;                                                   //@synthesize blobStore=_blobStore - In the implementation block
@property (nonatomic,retain) FBOmnistore * omnistore;                                                                //@synthesize omnistore=_omnistore - In the implementation block
@property (nonatomic,retain) MNContactSyncReminderController * contactSyncReminderController;                        //@synthesize contactSyncReminderController=_contactSyncReminderController - In the implementation block
@property (nonatomic,retain) MNAccountSettings * accountSettings;                                                    //@synthesize accountSettings=_accountSettings - In the implementation block
@property (nonatomic,retain) MNCoreTextSizeCache * coreTextSizeCache;                                                //@synthesize coreTextSizeCache=_coreTextSizeCache - In the implementation block
@property (nonatomic,retain) FBMAPNSPushHandler * apnsPushHandler;                                                   //@synthesize apnsPushHandler=_apnsPushHandler - In the implementation block
@property (nonatomic,retain) MNPlatformConversionTrackingSettings * platformConversionTrackingSettings;              //@synthesize platformConversionTrackingSettings=_platformConversionTrackingSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBMessagingStore *)messagingStore;
-(MNSPDataStore *)spDataStore;
-(MNPlatformConversionTrackingSettings *)platformConversionTrackingSettings;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(FBFacebook *)facebook;
-(void)logoutIsUserInitiated:(BOOL)arg1 WithFinishedBlock:(/*^block*/id)arg2 ;
-(void)setLogoutHandler:(id<OrcaLogoutHandler>)arg1 ;
-(void)setApiSessionStore:(FBAPISessionStore *)arg1 ;
-(void)setThreadSummaryCacheWriter:(id<MNThreadSummaryCacheWriting>)arg1 ;
-(void)setPersistManager:(OrcaPersistManager *)arg1 ;
-(void)setMessagingStore:(FBMessagingStore *)arg1 ;
-(void)setPushRegistrar:(OrcaPushRegistrar *)arg1 ;
-(void)setPushkitRegistrar:(id<MNPushKitRegistering>)arg1 ;
-(void)setHttpCookieStorage:(NSHTTPCookieStorage *)arg1 ;
-(void)setImageViewDownloader:(FBMImageViewDownloader *)arg1 ;
-(void)setStickerPurchaseManager:(FBMStickerPurchaseManager *)arg1 ;
-(void)setConnectionManager:(FBMMQTTConnectionManager *)arg1 ;
-(void)setPreviouslySyncedContactsStore:(FBPreviouslySyncedContactsStore *)arg1 ;
-(void)setSpDataStore:(MNSPDataStore *)arg1 ;
-(void)setAudioCache:(MNAudioCache *)arg1 ;
-(void)setPaymentsBridge:(id<FBMPaymentsBridge>)arg1 ;
-(void)setBlobStore:(MNNonDiscardingBlobStore *)arg1 ;
-(void)setOmnistore:(FBOmnistore *)arg1 ;
-(void)setContactSyncReminderController:(MNContactSyncReminderController *)arg1 ;
-(void)setAccountSettings:(MNAccountSettings *)arg1 ;
-(void)setCoreTextSizeCache:(MNCoreTextSizeCache *)arg1 ;
-(void)setApnsPushHandler:(FBMAPNSPushHandler *)arg1 ;
-(void)setPlatformConversionTrackingSettings:(MNPlatformConversionTrackingSettings *)arg1 ;
-(id)initWithOrcaLogoutHandler:(id)arg1 facebook:(id)arg2 apiSessionStore:(id)arg3 threadSummaryCacheWriter:(id)arg4 persistManager:(id)arg5 messagingStore:(id)arg6 userSettings:(id)arg7 pushRegistrar:(id)arg8 pushkitRegistrar:(id)arg9 exceptionHandler:(id)arg10 httpCookieStorage:(id)arg11 imageViewDownloader:(id)arg12 stickerPurchaseManager:(id)arg13 session:(id)arg14 connectionManager:(id)arg15 previouslySyncedContactsStore:(id)arg16 userDefaults:(id)arg17 spDataStore:(id)arg18 audioCache:(id)arg19 paymentsBridge:(id)arg20 blobStore:(id)arg21 omnistore:(id)arg22 contactSyncReminderController:(id)arg23 accountSettings:(id)arg24 coreTextSizeCache:(id)arg25 apnsPushHandler:(id)arg26 platformConversionTrackingSettings:(id)arg27 ;
-(FBPreviouslySyncedContactsStore *)previouslySyncedContactsStore;
-(OrcaPushRegistrar *)pushRegistrar;
-(id<MNPushKitRegistering>)pushkitRegistrar;
-(OrcaPersistManager *)persistManager;
-(id<MNThreadSummaryCacheWriting>)threadSummaryCacheWriter;
-(void)setLogoutFinishedBlock:(id)arg1 ;
-(void)setLogoutRequest:(FBMRequest *)arg1 ;
-(FBAPISessionStore *)apiSessionStore;
-(NSHTTPCookieStorage *)httpCookieStorage;
-(FBMStickerPurchaseManager *)stickerPurchaseManager;
-(void)_completeLogout;
-(void)requestLoading:(id)arg1 ;
-(id)initWithLogoutHandler:(id)arg1 providerMapData:(id)arg2 ;
-(id<OrcaLogoutHandler>)logoutHandler;
-(FBMImageViewDownloader *)imageViewDownloader;
-(FBMMQTTConnectionManager *)connectionManager;
-(FBMRequest *)logoutRequest;
-(id)logoutFinishedBlock;
-(MNAudioCache *)audioCache;
-(id<FBMPaymentsBridge>)paymentsBridge;
-(MNNonDiscardingBlobStore *)blobStore;
-(FBOmnistore *)omnistore;
-(MNContactSyncReminderController *)contactSyncReminderController;
-(MNAccountSettings *)accountSettings;
-(MNCoreTextSizeCache *)coreTextSizeCache;
-(FBMAPNSPushHandler *)apnsPushHandler;
-(FBExceptionHandler *)exceptionHandler;
-(void)dealloc;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)_tearDown;
-(void)setFacebook:(FBFacebook *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(MNUserSettings *)userSettings;
-(void)setExceptionHandler:(FBExceptionHandler *)arg1 ;
@end
