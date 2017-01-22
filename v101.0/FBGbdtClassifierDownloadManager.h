/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGbdtClassifierDownloadManagerDelegate;
@class FBUserSession, NSString, FBGbdtClassifierDownloadManagerConfiguration, FBTimer;

@interface FBGbdtClassifierDownloadManager : NSObject {

	FBUserSession* _session;
	NSString* _currentModelID;
	long long* _classifierType;
	FBGbdtClassifierDownloadManagerConfiguration* _configuration;
	FBTimer* _modelParamsTimer;
	FBTimer* _featuresVectorTimer;
	FBTimer* _classificationTimer;
	id<FBGbdtClassifierDownloadManagerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<FBGbdtClassifierDownloadManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_cancelTimers;
-(void)stopDownloading;
-(id)initWithSession:(id)arg1 currentModelID:(id)arg2 classifierType:(long long)arg3 configuration:(id)arg4 delegate:(id)arg5 ;
-(void)startDownloading;
-(void)_setupTimers;
-(void)_startInitialDownloads;
-(void)_downloadModelParams;
-(void)_downloadFeaturesVector;
-(void)_setModelID:(id)arg1 ;
-(void)_fetchQuery:(id)arg1 session:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)singleDownload;
-(void)dealloc;
-(id<FBGbdtClassifierDownloadManagerDelegate>)delegate;
@end
