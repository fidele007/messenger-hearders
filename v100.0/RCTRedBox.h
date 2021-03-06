/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface RCTRedBox : NSObject <RCTBridgeModule>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
-(void)showErrorMessage:(id)arg1 ;
-(void)registerErrorCustomizer:(id)arg1 ;
-(void)showErrorMessage:(id)arg1 withDetails:(id)arg2 ;
-(void)showErrorMessage:(id)arg1 withRawStack:(id)arg2 ;
-(void)showErrorMessage:(id)arg1 withStack:(id)arg2 ;
-(void)updateErrorMessage:(id)arg1 withStack:(id)arg2 ;
-(void)showErrorMessage:(id)arg1 withStack:(id)arg2 isUpdate:(BOOL)arg3 ;
-(void)dismiss;
-(void)showError:(id)arg1 ;
@end

