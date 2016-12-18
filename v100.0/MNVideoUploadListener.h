/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNVideoUploadListener <NSObject>
@required
-(void)willBeginVideoUploadWithInfo:(id)arg1;
-(void)videoInfo:(id)arg1 didProgressUploadTo:(double)arg2;
-(void)videoInfo:(id)arg1 didCompleteUploadWithFbId:(id)arg2 metrics:(id)arg3;
-(void)videoInfo:(id)arg1 didFailToUploadWithError:(id)arg2 metrics:(id)arg3;
-(void)videoInfo:(id)arg1 didCancelUploadWithMetrics:(id)arg2;
-(void)videoInfo:(id)arg1 didDedupeWithFbId:(id)arg2;

@end

