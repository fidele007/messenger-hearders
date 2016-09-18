/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLocationAuthorizationListener.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class FBUserSession, FBMChatContextSyncManager, FBLocationManager, NSDate, NSString;

@interface FBMChatContextManager : NSObject <FBLocationAuthorizationListener, FBViewerContextClassProvidable> {

	BOOL _isLoaded;
	BOOL _shouldShowChatContext;
	BOOL _shouldShowFacepile;
	BOOL _isSessionStarted;
	BOOL _isLocationDisabled;
	BOOL _isLocationSharingEnabled;
	/*^block*/id _completionBlock;
	FBUserSession* _session;
	FBMChatContextSyncManager* _syncManager;
	FBLocationManager* _locationManager;
	NSDate* _lastFetchingChatContextStatusDate;

}

@property (nonatomic,retain) FBUserSession * session;                                 //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL isSessionStarted;                                   //@synthesize isSessionStarted=_isSessionStarted - In the implementation block
@property (nonatomic,retain) FBMChatContextSyncManager * syncManager;                 //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,retain) FBLocationManager * locationManager;                     //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) BOOL isLocationDisabled;                                 //@synthesize isLocationDisabled=_isLocationDisabled - In the implementation block
@property (assign,nonatomic) BOOL isLocationSharingEnabled;                           //@synthesize isLocationSharingEnabled=_isLocationSharingEnabled - In the implementation block
@property (nonatomic,retain) NSDate * lastFetchingChatContextStatusDate;              //@synthesize lastFetchingChatContextStatusDate=_lastFetchingChatContextStatusDate - In the implementation block
@property (nonatomic,readonly) BOOL isLoaded;                                         //@synthesize isLoaded=_isLoaded - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowChatContext;                            //@synthesize shouldShowChatContext=_shouldShowChatContext - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowFacepile;                               //@synthesize shouldShowFacepile=_shouldShowFacepile - In the implementation block
@property (nonatomic,copy) id completionBlock;                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_onApplicationForeground;
-(void)locationAuthorizationDidChange:(int)arg1 ;
-(void)setIsLocationDisabled:(BOOL)arg1 ;
-(BOOL)isLocationDisabled;
-(BOOL)isSessionStarted;
-(void)setIsSessionStarted:(BOOL)arg1 ;
-(void)_fetchStatus;
-(void)setLastFetchingChatContextStatusDate:(NSDate *)arg1 ;
-(void)_onLocationChanged:(id)arg1 ;
-(BOOL)_isCachedStatusStale;
-(NSDate *)lastFetchingChatContextStatusDate;
-(void)_didFetchStatusWithSharingEnabled:(id)arg1 ;
-(void)_updateShouldShowChatContextState;
-(BOOL)shouldShowChatContextForType:(id)arg1 ;
-(BOOL)shouldShowLocationIconForType:(id)arg1 ;
-(void)syncChatContext;
-(void)setIsLocationSharingEnabled:(BOOL)arg1 ;
-(void)_startObservingNotifications;
-(void)_stopObservingNotifications;
-(BOOL)shouldShowChatContext;
-(BOOL)shouldShowFacepile;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)_isEnabled;
-(BOOL)isLoaded;
-(void)startSession;
-(FBUserSession *)session;
-(void)stopSession;
-(FBMChatContextSyncManager *)syncManager;
-(void)setSyncManager:(FBMChatContextSyncManager *)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(BOOL)isLocationSharingEnabled;
-(FBLocationManager *)locationManager;
-(void)setLocationManager:(FBLocationManager *)arg1 ;
@end

