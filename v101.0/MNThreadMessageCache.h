/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadMessageCaching.h>

@protocol MNThreadMessageCacheReading, MNThreadMessageCacheWriting, MNThreadMessageSubscribing, OS_dispatch_queue;
@class NSObject, NSString;

@interface MNThreadMessageCache : NSObject <MNThreadMessageCaching> {

	id<MNThreadMessageCacheReading> _reader;
	id<MNThreadMessageCacheWriting> _writer;
	id<MNThreadMessageSubscribing> _listener;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canMergeNewMessageSet:(id)arg1 intoThreadWithKey:(id)arg2 ;
-(id)messageSetForThreadKey:(id)arg1 ;
-(void)updateMessageSet:(id)arg1 forThreadKey:(id)arg2 appliedUpdates:(id)arg3 ;
-(void)setMessageSet:(id)arg1 forThreadKey:(id)arg2 ;
-(void)mergeMessageSet:(id)arg1 intoThreadWithKey:(id)arg2 ;
-(id)initWithListener:(id)arg1 queue:(id)arg2 ;
-(id)initWithReader:(id)arg1 writer:(id)arg2 listener:(id)arg3 queue:(id)arg4 ;
@end

