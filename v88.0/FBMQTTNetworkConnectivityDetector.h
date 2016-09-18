/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMQTTNetworkDetectDelegate;
@class NSURLSession, NSURL, NSURLSessionDataTask;

@interface FBMQTTNetworkConnectivityDetector : NSObject {

	NSURLSession* _session;
	unsigned long long _lastDetectionTime;
	unsigned _reachabilityFlags;
	NSURL* _fbURL;
	NSURLSessionDataTask* _currentOutgoingDetect;
	id<FBMQTTNetworkDetectDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMQTTNetworkDetectDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_detectIfNeeded:(id)arg1 appForeground:(BOOL)arg2 ;
-(void)_detect:(id)arg1 ;
-(void)_handleResponse:(id)arg1 error:(id)arg2 forConnErr:(id)arg3 ;
-(id)_constructResult:(BOOL)arg1 error:(id)arg2 startTS:(double)arg3 ;
-(void)_logDetectionResultIfNeeded:(id)arg1 detectResult:(id)arg2 ;
-(void)onConnectFailure:(id)arg1 appForeground:(BOOL)arg2 ;
-(void)onReachabilityChanged:(unsigned)arg1 ;
-(void)setDelegate:(id<FBMQTTNetworkDetectDelegate>)arg1 ;
-(id)init;
-(id<FBMQTTNetworkDetectDelegate>)delegate;
@end
