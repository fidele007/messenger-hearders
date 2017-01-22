/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
