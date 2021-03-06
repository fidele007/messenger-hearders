/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBAnalytics, FBGraphQLService, NSMutableDictionary, MNPageResponsivenessCache, MNPageResponsivenessUpdaterListenerAnnouncer;

@interface MNPageResponsivenessUpdater : NSObject {

	FBUserSession* _session;
	FBAnalytics* _analytics;
	FBGraphQLService* _graphQLService;
	NSMutableDictionary* _graphQLRequests;
	MNPageResponsivenessCache* _pageResponsivenessCache;
	MNPageResponsivenessUpdaterListenerAnnouncer* _pageResponsivenessUpdaterListenerAnnouncer;

}
-(void)runUpdateIfNecessaryForCanonicalThreadWithOtherUser:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 analytics:(id)arg2 pageResponsivenessCache:(id)arg3 responsivenessListenerAnnouncer:(id)arg4 ;
-(void)_processGraphQLResponse:(id)arg1 forUser:(id)arg2 ;
-(void)_stopTrackingRequestForUserId:(id)arg1 ;
-(void)_fetchPageResponsivenessForUser:(id)arg1 ;
@end

