/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAttributionAppSupplementaryInfoLoaderListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNModalPresentation, MNPlatformAppActionHandlerDelegate;
@class MNPlatformReplyHandler, MNPlatformAppInstallationChecker, NSString, FBMSyncedThreadKey, MNAttributionAppSupplementaryInfoLoader, MNPlatformAppFirstOpenedTimeCache, MNPlatformAppActionHandlerListenerAnnouncer, FBUserSession;

@interface MNPlatformAppActionHandler : NSObject <MNAttributionAppSupplementaryInfoLoaderListener, FBClassProvidable> {

	id<MNModalPresentation> _modalPresenter;
	MNPlatformReplyHandler* _platformReplyHandler;
	MNPlatformAppInstallationChecker* _platformAppInstallationChecker;
	NSString* _appStoreID;
	NSString* _appID;
	FBMSyncedThreadKey* _threadKey;
	MNAttributionAppSupplementaryInfoLoader* _attributionInfoLoader;
	MNPlatformAppFirstOpenedTimeCache* _platformAppFirstOpenedTimeCache;
	MNPlatformAppActionHandlerListenerAnnouncer* _announcer;
	FBUserSession* _session;
	id<MNPlatformAppActionHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPlatformAppActionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)performAction:(id)arg1 threadKey:(id)arg2 ;
-(void)didLoadAttributionAppSupplementaryInfoWithThreadKey:(id)arg1 ;
-(id)initWithModalPresenter:(id)arg1 platformReplyHandler:(id)arg2 platformAppInstallationChecker:(id)arg3 attributionAppSupplementaryInfoLoader:(id)arg4 atttributionAppSupplementaryInforLoaderListenerAnnouncer:(id)arg5 platformAppFirstOpenedTimeCache:(id)arg6 session:(id)arg7 ;
-(void)_appWithAppIDDidOpen:(id)arg1 ;
-(void)_presentAppStoreForAppID:(id)arg1 appStoreID:(id)arg2 threadKey:(id)arg3 ;
-(void)_saveFirstAppOpenTimeForAppID:(id)arg1 ;
-(void)setDelegate:(id<MNPlatformAppActionHandlerDelegate>)arg1 ;
-(id<MNPlatformAppActionHandlerDelegate>)delegate;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
