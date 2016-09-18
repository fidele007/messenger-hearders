/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageFetchRequestHandling.h>
#import <Messenger/MNMessageBatchRequestHandling.h>

@protocol MNThreadMessageCacheReading, MNThreadFetchedAffirming, MNThreadDeletedAffirming, MNMessageListFetchedMemoryStateAffirming;
@class NSString;

@interface MNMessageFetchMemoryHandler : NSObject <MNMessageFetchRequestHandling, MNMessageBatchRequestHandling> {

	id<MNThreadMessageCacheReading> _messageStore;
	id<MNThreadFetchedAffirming> _threadFetchedAffirmer;
	id<MNThreadDeletedAffirming> _threadDeletedAffirmer;
	id<MNMessageListFetchedMemoryStateAffirming> _messageListFetchedAffirmer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMemoryMessageStore:(id)arg1 threadFetchedAffirmer:(id)arg2 threadDeletedAffirmer:(id)arg3 messageListFetchedAffirmer:(id)arg4 ;
-(void)handleMessageFetchRequest:(id)arg1 longOperationDidBeginBlock:(/*^block*/id)arg2 forwardBlock:(/*^block*/id)arg3 responseBlock:(/*^block*/id)arg4 ;
-(void)handleMessageBatchRequest:(id)arg1 longOperationDidBeginBlock:(/*^block*/id)arg2 forwardBlock:(/*^block*/id)arg3 responseBlock:(/*^block*/id)arg4 ;
@end
