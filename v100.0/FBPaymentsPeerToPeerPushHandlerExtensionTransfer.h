/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerPushHandlerExtension.h>

@class FBPaymentsPeerToPeerPushEventQueue, NSString;

@interface FBPaymentsPeerToPeerPushHandlerExtensionTransfer : NSObject <FBPaymentsPeerToPeerPushHandlerExtension> {

	FBPaymentsPeerToPeerPushEventQueue* _pushEventQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * supportedPushObjectType; 
-(id)initWithPushEventQueue:(id)arg1 ;
-(BOOL)handleAPNSPayloadParameters:(id)arg1 actionIdentifier:(id)arg2 launchedByUser:(BOOL)arg3 supportsPreview:(BOOL)arg4 isColdStart:(BOOL)arg5 handledCompletionBlock:(/*^block*/id)arg6 ;
-(NSString *)supportedPushObjectType;
-(id)init;
@end

