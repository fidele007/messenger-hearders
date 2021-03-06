/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/ScoutLogSourceProvider.h>

@protocol FBSSLKeyMaterialLoggerProvider;
@class FBReachabilityAnnouncer;

@interface MNLigerAdapter : NSObject <ScoutLogSourceProvider> {

	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	id<FBSSLKeyMaterialLoggerProvider> _sslKeyMaterialLogger;
	BOOL _isConfigured;
	unsigned long long _rawBytesWritten;
	unsigned long long _rawBytesReceived;

}
-(void)_setupSSLLogging;
-(id)_buildConfigurationWithMobileConfigFactory:(id)arg1 ;
-(void)logToScout:(id)arg1 isForegrounded:(BOOL)arg2 isWifi:(BOOL)arg3 timestampSecs:(long long)arg4 ;
-(void)configureLigerWithMobileConfigSessionFactory:(id)arg1 ;
-(BOOL)isLigerEnabled;
-(id)initWithReachablityAnnouncer:(id)arg1 ;
@end

