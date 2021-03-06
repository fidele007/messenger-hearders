/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface RKAnalytics : NSObject <RCTBridgeModule> {

	shared_ptr<facebook::xanalytics::XAnalytics>* _pXAnalytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__220;
+(id)__rct_export__461;
+(id)__rct_export__562;
+(void)load;
-(void)logCounter:(id)arg1 value:(id)arg2 ;
-(shared_ptr<facebook::xanalytics::XAnalytics>*)pXAnalytics;
-(void)logRealtimeEvent:(id)arg1 extra:(id)arg2 ;
-(void)logEvent:(id)arg1 extraBlock:(id)arg2 ;
@end

