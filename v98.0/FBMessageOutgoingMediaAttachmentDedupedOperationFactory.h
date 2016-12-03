/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMessageOutgoingMediaAttachmentOperationFactoryProtocol.h>

@protocol OS_dispatch_queue;
@class FBMessageOutgoingAttachmentPreparerFactory, FBMessageOutgoingAttachmentWrapperPreparerFactoryInternal, NSMutableDictionary, FBCache, NSObject;

@interface FBMessageOutgoingMediaAttachmentDedupedOperationFactory : NSObject <FBMessageOutgoingMediaAttachmentOperationFactoryProtocol> {

	FBMessageOutgoingAttachmentPreparerFactory* _preparerFactory;
	FBMessageOutgoingAttachmentWrapperPreparerFactoryInternal* _wrapperPreparerFactory;
	NSMutableDictionary* _preparerByMediaKey;
	mutex _mutex;
	FBCache* _resultCache;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)operationForSingleContent:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 queue:(id)arg5 progressBlock:(/*^block*/id)arg6 ;
-(id)initWithPreparerFactory:(id)arg1 ;
-(id)initWithPreparerFactory:(id)arg1 wrapperPreparerFactory:(id)arg2 ;
-(void)_cleanupWithMediaDedupeKey:(id)arg1 cacheResult:(id)arg2 ;
@end
