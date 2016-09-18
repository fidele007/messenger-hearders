/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSURLSession, NSOperationQueue, TigonNSURLCompletionHandlersMap, NSString;

@interface TigonNSURLRequester : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	NSURLSession* _session;
	NSOperationQueue* _queue;
	/*^block*/id _auth;
	int _taskType;
	TigonNSURLCompletionHandlersMap* _handlersMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onResponse:(id)arg1 requestInfo:(id)arg2 ;
-(void)onBody:(id)arg1 requestInfo:(id)arg2 ;
-(id)initWithAuth:(/*^block*/id)arg1 taskType:(int)arg2 handlersMap:(id)arg3 session:(id)arg4 ;
-(void)send:(id)arg1 taskPriority:(float)arg2 tigonRequest:(const TigonRequest*)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
@end

