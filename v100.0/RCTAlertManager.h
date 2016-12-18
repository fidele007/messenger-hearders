/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTBridgeModule.h>
#import <Messenger/RCTInvalidating.h>

@class NSHashTable, NSString, RCTBridge;

@interface RCTAlertManager : NSObject <RCTBridgeModule, RCTInvalidating> {

	NSHashTable* _alertControllers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__660;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)alertWithArgs:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)invalidate;
@end

