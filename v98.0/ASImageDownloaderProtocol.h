/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASImageDownloaderProtocol <NSObject>
@optional
-(id)animatedImageWithData:(id)arg1;
-(id)downloadImageWithURL:(id)arg1 callbackQueue:(id)arg2 downloadProgress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4;
-(void)setProgressImageBlock:(/*^block*/id)arg1 callbackQueue:(id)arg2 withDownloadIdentifier:(id)arg3;
-(void)setPriority:(unsigned long long)arg1 withDownloadIdentifier:(id)arg2;

@required
-(void)cancelImageDownloadForIdentifier:(id)arg1;

@end

