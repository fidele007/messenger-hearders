/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@class FBUserSession, ZROneTimeTokenUpdater, FBMLoggedInUserFetcher, FBAnalytics, NSString;

@interface MNLoginCredentialsHandler : NSObject <FBClassProvidable> {

	FBUserSession* _session;
	ZROneTimeTokenUpdater* _oneTimeTokenUpdater;
	FBMLoggedInUserFetcher* _loggedInUserFetcher;
	FBAnalytics* _analytics;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(id)initWithUserSession:(id)arg1 oneTimeTokenUpdater:(id)arg2 loggedInUserFetcher:(id)arg3 analytics:(id)arg4 ;
-(void)_configureSessionStoreWithCredentials:(id)arg1 httpCookies:(id)arg2 userStorageServerKey:(id)arg3 ;
-(void)_didFailFetchWithError:(id)arg1 ;
-(void)_didFailTokenUpdateWithError:(id)arg1 ;
-(void)_didUpdateToken;
-(void)handleCredentials:(id)arg1 httpCookies:(id)arg2 userStorageServerKey:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_didFetchUser:(id)arg1 ;
-(void)dealloc;
-(void)_completeWithError:(id)arg1 ;
@end

