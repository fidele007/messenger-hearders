/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMessageAttachmentServerFbIdQuerier.h>

@protocol MNMQTTSending, MNMQTTListenerManaging;
@class FBMQTTListener, NSMutableDictionary, NSString;

@interface FBMMQTTMediaAttachmentServerFbIdQuerier : NSObject <FBMessageAttachmentServerFbIdQuerier> {

	id<MNMQTTSending> _sender;
	id<MNMQTTListenerManaging> _listenerManager;
	FBMQTTListener* _messageListener;
	NSMutableDictionary* _callbackBlocks;
	mutex _mutex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupMQTTListener;
-(void)_addCallback:(/*^block*/id)arg1 forHash:(id)arg2 ;
-(void)_removeCallback:(/*^block*/id)arg1 forHash:(id)arg2 ;
-(void)_processMQTTPayload:(id)arg1 ;
-(void)queryMediaFbIdFromServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMQTTSender:(id)arg1 listenerManager:(id)arg2 ;
@end

