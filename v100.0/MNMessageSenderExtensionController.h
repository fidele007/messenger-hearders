/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageSenderExtensionRegistrar.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface MNMessageSenderExtensionController : NSObject <MNMessageSenderExtensionRegistrar> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _messageSenderExtensions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerExtension:(id)arg1 ;
-(void)removeExtension:(id)arg1 ;
-(id)extensionForMessage:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
@end

