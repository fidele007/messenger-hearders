/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSString, FBMobileTraceRemoteTokenPtr;

@interface FBMQTTPendingSendResponse : NSObject {

	NSTimer* _timeoutTimer;
	NSString* _sendTopic;
	FBMobileTraceRemoteTokenPtr* _traceToken;
	/*^block*/id _responseBlock;

}

@property (nonatomic,retain) NSTimer * timeoutTimer;                                  //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (nonatomic,copy,readonly) NSString * sendTopic;                             //@synthesize sendTopic=_sendTopic - In the implementation block
@property (nonatomic,readonly) FBMobileTraceRemoteTokenPtr * traceToken;              //@synthesize traceToken=_traceToken - In the implementation block
@property (nonatomic,copy,readonly) id responseBlock;                                 //@synthesize responseBlock=_responseBlock - In the implementation block
-(id)initWithTimeoutTimer:(id)arg1 sendTopic:(id)arg2 traceToken:(id)arg3 responseBlock:(/*^block*/id)arg4 ;
-(NSString *)sendTopic;
-(FBMobileTraceRemoteTokenPtr *)traceToken;
-(id)responseBlock;
-(void)setTimeoutTimer:(NSTimer *)arg1 ;
-(NSTimer *)timeoutTimer;
@end

