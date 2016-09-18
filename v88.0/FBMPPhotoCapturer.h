/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMPOutput.h>

@class FBMPBaseConsumerPort, NSString;

@interface FBMPPhotoCapturer : NSObject <FBMPOutput> {

	long long _bufferOrientation;
	FBMPBaseConsumerPort* _port;
	mutex _lock;
	CaptureCompletionContext _captureCompletionContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBufferOrientation:(long long)arg1 ;
-(void)captureImageWithOrientation:(long long)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)consumerPorts;
@end

