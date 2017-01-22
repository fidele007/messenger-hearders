/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>

@protocol MNAuthenticationManager, OS_dispatch_queue;
@class MNUserProvider, FBUserSession, MNGraphQLQueryConfigGenerator, MNThreadSummarySubscribingAnnouncer, MNThreadParticipantNameFormatter, MNRecentSearchStore, MNThreadStore, FBDelayer, MNModelSubscriptionProvider, NSObject, NSString;

@interface MNSearchNullStateViewModelSubscriptionService : NSObject <MNServiceControllable> {

	MNUserProvider* _userProvider;
	FBUserSession* _session;
	MNGraphQLQueryConfigGenerator* _queryConfigGenerator;
	id<MNAuthenticationManager> _authManager;
	MNThreadSummarySubscribingAnnouncer* _summaryAnnouncer;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNRecentSearchStore* _recentSearchStore;
	MNThreadStore* _threadStore;
	FBDelayer* _serviceStartedDelayer;
	MNModelSubscriptionProvider* _provider;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserProvider:(id)arg1 handlerChainManager:(id)arg2 session:(id)arg3 queryConfigGenerator:(id)arg4 authManager:(id)arg5 threadSummarySubscribingAnnouncer:(id)arg6 threadNameFormatter:(id)arg7 recentSearchStore:(id)arg8 ;
-(void)performBlockAfterServiceStarted:(/*^block*/id)arg1 ;
-(id)_newServiceStartedDelayer;
-(void)stop;
-(void)_start;
-(void)_stop;
-(void)start:(id)arg1 ;
-(id)provider;
-(void)handleIdle;
@end
