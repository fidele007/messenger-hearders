/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaPublishingManagerDelegate <NSObject>
@required
-(void)notifyFlowSucceedWithResult:(id)arg1;
-(void)notifyAttemptFailureWithError:(id)arg1;
-(void)mediaPublishingManager:(id)arg1 wantsToRetryPublishingWithSource:(unsigned long long)arg2 error:(id)arg3;
-(void)mediaPublishingManager:(id)arg1 startedUploadingItemOfType:(int)arg2 thumbnail:(id)arg3;
-(void)didChangeUploadQualityInMediaPublishingManager:(id)arg1;
-(void)mediaPublishingManagerWantsToEnablePublicationCancellation:(id)arg1;
-(void)mediaPublishingManagerWantsToDisablePublicationCancellation:(id)arg1;
-(void)publishUploadedMediaAttachments;
-(void)reportsCurrentProgress:(double)arg1;

@end
