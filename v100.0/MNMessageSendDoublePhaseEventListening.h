/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSendDoublePhaseEventListening <NSObject>
@required
-(void)secondPhaseAttachmentPreparationDidStartWithOfflineThreadingId:(id)arg1 originalAttachmentFbId:(id)arg2 contentType:(id)arg3;
-(void)secondPhaseAttachmentPreparationDidFailWithOfflineThreadingId:(id)arg1 contentType:(id)arg2 error:(id)arg3;
-(void)secondPhaseMessageUpdateDidSucceedWithMessageId:(id)arg1 offlineThreadingId:(id)arg2 contentType:(id)arg3;
-(void)secondPhaseMessageUpdateFailedWithMessageId:(id)arg1 offlineThreadingId:(id)arg2 contentType:(id)arg3 error:(id)arg4;

@end

