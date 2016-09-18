/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIApplication, FBAnalytics, FBAPISessionStore, FBUserSession;

@interface FBAnalyticsUserFBIDListener : NSObject {

	UIApplication* _application;
	FBAnalytics* _analytics;
	FBAPISessionStore* _sessionStore;
	FBUserSession* _session;

}

@property (nonatomic,retain) FBAPISessionStore * sessionStore;              //@synthesize sessionStore=_sessionStore - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) UIApplication * application;                 //@synthesize application=_application - In the implementation block
@property (assign,nonatomic,__weak) FBAnalytics * analytics;                //@synthesize analytics=_analytics - In the implementation block
-(FBAnalytics *)analytics;
-(void)setAnalytics:(FBAnalytics *)arg1 ;
-(void)setSessionStore:(FBAPISessionStore *)arg1 ;
-(FBAPISessionStore *)sessionStore;
-(void)_didChangeCurrentSession:(id)arg1 ;
-(void)unobserveSessionStore;
-(void)observeSessionStore;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIApplication *)application;
-(id)initWithApplication:(id)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

