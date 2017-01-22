/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSendDoublePhaseEventListening <NSObject>
@required
-(void)secondPhaseAttachmentPreparationDidStartWithOfflineThreadingId:(id)arg1 originalAttachmentFbId:(id)arg2 contentType:(id)arg3;
-(void)secondPhaseAttachmentPreparationDidFailWithOfflineThreadingId:(id)arg1 contentType:(id)arg2 error:(id)arg3;
-(void)secondPhaseMessageUpdateDidSucceedWithMessageId:(id)arg1 offlineThreadingId:(id)arg2 contentType:(id)arg3;
-(void)secondPhaseMessageUpdateFailedWithMessageId:(id)arg1 offlineThreadingId:(id)arg2 contentType:(id)arg3 error:(id)arg4;

@end
