/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBClassProvidable.h>

@protocol OS_dispatch_queue, MNThreadMessageSubscribing;
@class FBMThreadSharedMediaModelCache, MNThreadMessageSubscribingAnnouncer, NSObject, NSString;

@interface MNThreadSharedMediaModelCacheServiceAdapter : NSObject <MNServiceControllable, FBClassProvidable> {

	FBMThreadSharedMediaModelCache* _threadSharedMediaModelCache;
	MNThreadMessageSubscribingAnnouncer* _messageSubscribingAnnouncer;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNThreadMessageSubscribing> _queueDispatchedCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithThreadSharedMediaModelCache:(id)arg1 messageSubscribingAnnouncer:(id)arg2 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

