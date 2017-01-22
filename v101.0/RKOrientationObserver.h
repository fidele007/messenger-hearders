/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTBridgeModule.h>

@class RCTBridge, NSString;

@interface RKOrientationObserver : NSObject <RCTBridgeModule> {

	RCTBridge* _bridge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__980;
+(void)load;
-(void)namedOrientationDidChange:(id)arg1 ;
-(void)getCurrentOrientation:(/*^block*/id)arg1 withErrorCallback:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
@end
