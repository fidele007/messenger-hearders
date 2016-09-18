/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBOmnistoreStartListener.h>
#import <Messenger/MNPlatformAppListDataSource.h>

@protocol OS_dispatch_queue, MNPlatformAppListDataSourceDelegate;
@class FBUserSession, MNPlatformAppFetchingConfiguration, FBOmnistore, FBOmnistoreCollection, MNPlatformAppInstallationChecker, NSObject, NSString;

@interface MNPlatformAppListOmnistoreDataSource : NSObject <FBOmnistoreStartListener, MNPlatformAppListDataSource> {

	FBUserSession* _session;
	MNPlatformAppFetchingConfiguration* _configuration;
	FBOmnistore* _omnistore;
	FBOmnistoreCollection* _collection;
	MNPlatformAppInstallationChecker* _installationChecker;
	NSObject*<OS_dispatch_queue> _omnistoreQueue;
	id<MNPlatformAppListDataSourceDelegate> _delegate;
	BOOL _invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_fetchAppList;
-(void)_setupOmnistoreCollection;
-(id)_platformAppSubscriptionParams;
-(void)_didReceivedDeltas:(id)arg1 filterCollectionName:(id)arg2 ;
-(void)_enumeratePlatformAppList:(/*^block*/id)arg1 withStartKey:(id)arg2 andLimit:(unsigned)arg3 ;
-(void)omnistoreDidStart;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 omnistore:(id)arg3 configuration:(id)arg4 installationChecker:(id)arg5 ;
-(void)startListening;
-(void)updateIfNeeded;
@end

