/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNXConfigFetcherDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNServiceControllable.h>

@class MNAudioCache, FBUserSession, FBAppDefaults, MNXConfigFetcher, FBMobileConfigContextManager, NSURLConnection, NSMutableData, MNUserSettings, FBExperimentManager, NSString;

@interface MNVoicemailAssetDownloader : NSObject <MNXConfigFetcherDelegate, NSURLConnectionDelegate, FBClassProvidable, MNServiceControllable> {

	MNAudioCache* _audioCache;
	FBUserSession* _userSession;
	FBAppDefaults* _appDefaults;
	MNXConfigFetcher* _xconfigFetcher;
	FBMobileConfigContextManager* _configManager;
	NSURLConnection* _connection;
	NSMutableData* _data;
	MNUserSettings* _userSettings;
	FBExperimentManager* _experimentManager;
	BOOL _isRunning;
	BOOL _useMobileConfig;
	BOOL _inVoicemailPromptHoldout;
	NSString* _currentDownloadUrl;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_clearCachedPrompts;
-(void)_startAssetDownload:(id)arg1 ;
-(id)_keyForRequestTimestamp;
-(BOOL)_hasPreferenceExpiredForKey:(id)arg1 withTime:(double)arg2 ;
-(void)_startDownloadFlow;
-(void)_stopDownloadFlow;
-(void)_updateRequestTimestamp;
-(void)xconfigFetcher:(id)arg1 didFinishWithResponse:(id)arg2 ;
-(void)xconfigFetcher:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)start:(id)arg1 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)handleIdle;
@end

