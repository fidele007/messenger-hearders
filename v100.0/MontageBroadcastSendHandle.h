/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageBroadcastSendHandle.h>

@class NSString, MNMontageBroadcastSenderAttachmentGenerationListenerAnnouncer, FBCancelHandle;

@interface MontageBroadcastSendHandle : NSObject <MNMontageBroadcastSendHandle> {

	NSString* _attachmentGenerationId;
	MNMontageBroadcastSenderAttachmentGenerationListenerAnnouncer* _announcer;
	/*^block*/id _sendBlock;
	FBCancelHandle* _cancelHandle;

}

@property (nonatomic,copy) id sendBlock;                                 //@synthesize sendBlock=_sendBlock - In the implementation block
@property (nonatomic,retain) FBCancelHandle * cancelHandle;              //@synthesize cancelHandle=_cancelHandle - In the implementation block
-(void)sendToContacts:(id)arg1 extensibleMessageData:(id)arg2 extraClientTags:(id)arg3 ;
-(id)attachmentGenerationId;
-(id)initWithAttachmentGenerationId:(id)arg1 announcer:(id)arg2 ;
-(FBCancelHandle *)cancelHandle;
-(void)setCancelHandle:(FBCancelHandle *)arg1 ;
-(void)cancel;
-(void)clear;
-(void)setSendBlock:(id)arg1 ;
-(id)sendBlock;
@end

