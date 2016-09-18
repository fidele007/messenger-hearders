/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNEphemeralMessageStatusCalculating, MNEphemeralMessagingTombstonedMessageDeleting, OS_dispatch_queue;
@class MNThreadViewModel, NSObject;

@interface MNEphemeralMessagingMessagesViewTombstoneDeletionInvoker : NSObject {

	id<MNEphemeralMessageStatusCalculating> _ephemeralStatusCalculator;
	id<MNEphemeralMessagingTombstonedMessageDeleting> _tombstonedMessageDeleter;
	MNThreadViewModel* _threadViewModel;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithEphemeralStatusCalculator:(id)arg1 tombstonedMessageDeleter:(id)arg2 queue:(id)arg3 ;
-(void)invokeDeletionForTombstonedMessagesInViewModel:(id)arg1 ;
-(id)_findTombstonedMessagesInMessageSetNeedingDeletion:(id)arg1 otherParticipantInfo:(id)arg2 ;
-(void)_removeMessageTombstonesWithMessageKeys:(id)arg1 onThread:(id)arg2 ;
@end

