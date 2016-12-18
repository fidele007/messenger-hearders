/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMQTTSending.h>

@protocol FBMQTTChannelCoordinating, OS_dispatch_queue;
@class FBDelayer, NSObject, NSString;

@interface MNMQTTSender : NSObject <FBViewerContextClassProvidable, MNMQTTSending> {

	id<FBMQTTChannelCoordinating> _mqttChannelCoordinator;
	FBDelayer* _configurationDelayer;
	NSObject*<OS_dispatch_queue> _delayerQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)sendJSONMessage:(id)arg1 ;
-(void)sendEncodedMessage:(id)arg1 ;
-(void)addPublisher:(id)arg1 ;
-(void)configureWithMQTTChannelCoordinator:(id)arg1 ;
-(id)initWithDelayQueue:(id)arg1 ;
-(void)_addPublisherDelayed:(id)arg1 ;
-(void)_addPublisherNow:(id)arg1 ;
-(id)init;
@end
