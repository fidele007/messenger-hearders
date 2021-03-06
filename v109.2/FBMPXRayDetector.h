/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMPOutput.h>

@protocol OS_dispatch_queue;
@class FBXRayDetector, NSObject, FBMPBaseConsumerPort, NSString;

@interface FBMPXRayDetector : NSObject <FBMPOutput> {

	FBXRayDetector* _XRayDetector;
	long long _throttlingFrequency;
	long long _unhandledSampleBufferCount;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	FBMPBaseConsumerPort* _port;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)consumerPorts;
-(id)initWithCallback:(/*^block*/id)arg1 throttlingFrequency:(long long)arg2 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_initXRayDetectorIfNecessary;
@end

