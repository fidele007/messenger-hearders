/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@class FBProviderMapData, MNWatchConnectivityManager, MNWatchThreadListViewModelWriter, MNWatchThreadViewModelGenerator, MNWatchStickerCollectionWriter, MNThreadSummarySubscribingAnnouncer, MNThreadMessageSubscribingAnnouncer, FBMMessageSendListeningAnnouncer, FBMobileConfigContextManager, NSString;

@interface MNWatchDataServiceInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	MNWatchConnectivityManager* _watchConnectivityManager;
	MNWatchThreadListViewModelWriter* _threadListViewModelWriter;
	MNWatchThreadViewModelGenerator* _threadViewModelGenerator;
	MNWatchStickerCollectionWriter* _stickerCollectionWriter;
	MNThreadSummarySubscribingAnnouncer* _threadSummarySubscribingAnnouncer;
	MNThreadMessageSubscribingAnnouncer* _threadMessageSubscribingAnnouncer;
	FBMMessageSendListeningAnnouncer* _messageSendAnnouncer;
	FBMobileConfigContextManager* _configManager;

}

@property (nonatomic,readonly) MNWatchConnectivityManager * watchConnectivityManager;                                //@synthesize watchConnectivityManager=_watchConnectivityManager - In the implementation block
@property (nonatomic,readonly) MNWatchThreadListViewModelWriter * threadListViewModelWriter;                         //@synthesize threadListViewModelWriter=_threadListViewModelWriter - In the implementation block
@property (nonatomic,readonly) MNWatchThreadViewModelGenerator * threadViewModelGenerator;                           //@synthesize threadViewModelGenerator=_threadViewModelGenerator - In the implementation block
@property (nonatomic,readonly) MNWatchStickerCollectionWriter * stickerCollectionWriter;                             //@synthesize stickerCollectionWriter=_stickerCollectionWriter - In the implementation block
@property (nonatomic,readonly) MNThreadSummarySubscribingAnnouncer * threadSummarySubscribingAnnouncer;              //@synthesize threadSummarySubscribingAnnouncer=_threadSummarySubscribingAnnouncer - In the implementation block
@property (nonatomic,readonly) MNThreadMessageSubscribingAnnouncer * threadMessageSubscribingAnnouncer;              //@synthesize threadMessageSubscribingAnnouncer=_threadMessageSubscribingAnnouncer - In the implementation block
@property (nonatomic,readonly) FBMMessageSendListeningAnnouncer * messageSendAnnouncer;                              //@synthesize messageSendAnnouncer=_messageSendAnnouncer - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                         //@synthesize configManager=_configManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNThreadSummarySubscribingAnnouncer *)threadSummarySubscribingAnnouncer;
-(FBMMessageSendListeningAnnouncer *)messageSendAnnouncer;
-(MNWatchConnectivityManager *)watchConnectivityManager;
-(MNWatchStickerCollectionWriter *)stickerCollectionWriter;
-(MNWatchThreadListViewModelWriter *)threadListViewModelWriter;
-(MNThreadMessageSubscribingAnnouncer *)threadMessageSubscribingAnnouncer;
-(MNWatchThreadViewModelGenerator *)threadViewModelGenerator;
@end
