/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCDNVideoDownloadRunnerListening <NSObject>
@required
-(void)videoRunner:(id)arg1 didReceiveProgressUpdate:(double)arg2 forVideoDownloadRequest:(id)arg3 forDownloadId:(unsigned long long)arg4;
-(void)videoRunner:(id)arg1 didFinishWithVideo:(id)arg2 forVideoDownloadRequest:(id)arg3 forDownloadId:(unsigned long long)arg4 forURL:(id)arg5;
-(void)videoRunner:(id)arg1 didFailToDownloadVideoWithError:(id)arg2 forVideoDownloadRequest:(id)arg3 forDownloadId:(unsigned long long)arg4;

@end

