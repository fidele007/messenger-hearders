/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager;
@class FBUserSession, FBAnalytics, FBGraphQLService, NSMutableDictionary, MNWelcomeNuxCache, MNWelcomeNuxUpdaterListenerAnnouncer;

@interface MNWelcomeNuxUpdater : NSObject {

	FBUserSession* _session;
	FBAnalytics* _analytics;
	FBGraphQLService* _graphQLService;
	NSMutableDictionary* _graphQLRequests;
	MNWelcomeNuxCache* _welcomeNuxCache;
	MNWelcomeNuxUpdaterListenerAnnouncer* _listenerAnnouner;
	id<MNAuthenticationManager> _authManager;

}
-(id)initWithUserSession:(id)arg1 analytics:(id)arg2 authManager:(id)arg3 welcomeNuxCache:(id)arg4 listenerAnnouncer:(id)arg5 ;
-(void)runUpdateIfNecessaryForThreadWithOtherUser:(id)arg1 ;
-(void)_fetchWelcomeNuxForUser:(id)arg1 ;
-(void)_processGraphQLResponse:(id)arg1 forUser:(id)arg2 ;
-(void)_stopTrackingRequestForUserId:(id)arg1 ;
@end

