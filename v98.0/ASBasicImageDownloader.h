/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <Messenger/ASImageDownloaderProtocolDeprecated.h>
#import <Messenger/ASImageDownloaderProtocol.h>

@class NSOperationQueue, NSURLSession, NSString;

@interface ASBasicImageDownloader : NSObject <NSURLSessionDownloadDelegate, ASImageDownloaderProtocolDeprecated, ASImageDownloaderProtocol> {

	NSOperationQueue* _sessionDelegateQueue;
	NSURLSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedImageDownloader;
-(id)downloadImageWithURL:(id)arg1 callbackQueue:(id)arg2 downloadProgressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelImageDownloadForIdentifier:(id)arg1 ;
-(id)_init;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
@end

