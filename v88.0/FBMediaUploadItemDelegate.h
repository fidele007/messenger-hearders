/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaUploadItemDelegate <NSObject>
@required
-(void)mediaUploadItemDidSendCancelRequest:(id)arg1;
-(void)mediaUploadItemDidCancel:(id)arg1;
-(void)mediaUploadItem:(id)arg1 didUpdateToProgress:(double)arg2 fromProgress:(double)arg3;
-(void)mediaUploadItemDidFinishProcessingStep:(id)arg1;
-(void)mediaUploadItem:(id)arg1 didFailWithError:(id)arg2 allowBackgroundTask:(BOOL)arg3;
-(void)mediaUploadItemDidFinish:(id)arg1;
-(void)mediaUploadItemDidStart:(id)arg1;
-(void)mediaUploadItemRestart:(id)arg1;

@end

