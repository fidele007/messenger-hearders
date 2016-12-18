/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface RKAnalyticsFunnelLogger : NSObject <RCTBridgeModule>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__190;
+(id)__rct_export__311;
+(id)__rct_export__462;
+(id)__rct_export__603;
+(void)load;
-(void)startFunnel:(id)arg1 instanceID:(unsigned long long)arg2 ;
-(void)startFunnel_DEV_MODE:(id)arg1 instanceID:(unsigned long long)arg2 ;
-(void)addActionToFunnel:(id)arg1 instanceID:(unsigned long long)arg2 actionName:(id)arg3 tag:(id)arg4 ;
-(void)endFunnel:(id)arg1 instanceID:(unsigned long long)arg2 ;
@end

