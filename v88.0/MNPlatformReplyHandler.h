/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol MNWebViewOpening, FBClock;
@class MNPlatformLastReplyThreadKeyCache, MNUserSettings, FBAnalytics, MNLoadingViewPresenter, NSString;

@interface MNPlatformReplyHandler : NSObject <FBClassProvidable> {

	MNPlatformLastReplyThreadKeyCache* _lastReplyThreadKeyCache;
	MNUserSettings* _userSettings;
	id<MNWebViewOpening> _webViewPresenter;
	id<FBClock> _clock;
	FBAnalytics* _analytics;
	MNLoadingViewPresenter* _loadingViewPresenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_presentLearnMoreURL;
-(id)initWithLastReplyThreadKeyCache:(id)arg1 userSetting:(id)arg2 webViewPresenter:(id)arg3 clock:(id)arg4 analytics:(id)arg5 ;
-(void)_openAppWithReplyActionURLInfo:(id)arg1 appID:(id)arg2 threadKey:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)_showAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)handleOutgoingReplyForReplyActionURLInfo:(id)arg1 appID:(id)arg2 threadKey:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
@end

