/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPushEventListener.h>
#import <Messenger/FBMWatchExtensionRequestHandlerListening.h>

@protocol FBMBackgroundDataProcessingListener;
@class UIApplication, FBMBackgroundDataProcessingListenerAnnouncer, NSString;

@interface FBMBackgroundDataProcessingEventDispatcher : NSObject <FBPushEventListener, FBMWatchExtensionRequestHandlerListening> {

	UIApplication* _application;
	FBMBackgroundDataProcessingListenerAnnouncer* _announcer;
	id<FBMBackgroundDataProcessingListener> _mainThreadDispatcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willStartHandlingAPNSPushWithToken:(unsigned long long)arg1 ;
-(void)didFinishHandlingAPNSPushWithToken:(unsigned long long)arg1 ;
-(void)willBeginHandlingWatchExtensionRequest;
-(void)didFinishHandlingWatchExtensionRequest;
-(void)didReceivePushKitPayload;
-(id)init;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
