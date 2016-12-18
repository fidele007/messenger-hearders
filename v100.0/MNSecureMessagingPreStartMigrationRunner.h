/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBMigrationRunner, FBUserSession, NSString, FBAnalytics, NSObject;

@interface MNSecureMessagingPreStartMigrationRunner : NSObject {

	FBMigrationRunner* _runner;
	FBUserSession* _session;
	NSString* _appGroup;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithMigrationRunner:(id)arg1 session:(id)arg2 appGroup:(id)arg3 analytics:(id)arg4 queue:(id)arg5 ;
-(void)runPreStartMigrationWithCompletion:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)_logMigrationError:(id)arg1 identifier:(id)arg2 ;
@end
