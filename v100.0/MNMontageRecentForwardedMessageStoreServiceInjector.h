/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@class FBProviderMapData, FBMessagingStore, FBMessagingStoreDatabaseOpenedDelayer, MNMessageUpsellControllerListeningAnnouncer, NSString;

@interface MNMontageRecentForwardedMessageStoreServiceInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	FBMessagingStore* _messagingStore;
	FBMessagingStoreDatabaseOpenedDelayer* _messagingStoreDelayer;
	MNMessageUpsellControllerListeningAnnouncer* _upsellControllerAnnouncer;

}

@property (nonatomic,readonly) FBMessagingStore * messagingStore;                                                    //@synthesize messagingStore=_messagingStore - In the implementation block
@property (nonatomic,readonly) FBMessagingStoreDatabaseOpenedDelayer * messagingStoreDelayer;                        //@synthesize messagingStoreDelayer=_messagingStoreDelayer - In the implementation block
@property (nonatomic,readonly) MNMessageUpsellControllerListeningAnnouncer * upsellControllerAnnouncer;              //@synthesize upsellControllerAnnouncer=_upsellControllerAnnouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMessagingStore *)messagingStore;
-(FBMessagingStoreDatabaseOpenedDelayer *)messagingStoreDelayer;
-(MNMessageUpsellControllerListeningAnnouncer *)upsellControllerAnnouncer;
@end

