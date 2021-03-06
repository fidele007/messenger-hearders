/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTBridgeMethod.h>

@class NSString, NSDictionary, NSInvocation, NSArray;

@interface RCTModuleMethod : NSObject <RCTBridgeMethod> {

	Class _moduleClass;
	NSInvocation* _invocation;
	NSArray* _argumentBlocks;
	NSString* _methodSignature;
	SEL _selector;
	NSDictionary* _profileArgs;
	NSString* _JSMethodName;
	unsigned long long _functionType;

}

@property (nonatomic,readonly) Class moduleClass;                            //@synthesize moduleClass=_moduleClass - In the implementation block
@property (nonatomic,readonly) SEL selector; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * JSMethodName;                 //@synthesize JSMethodName=_JSMethodName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * profileArgs; 
@property (nonatomic,readonly) unsigned long long functionType;              //@synthesize functionType=_functionType - In the implementation block
-(Class)moduleClass;
-(void)processMethodSignature;
-(id)methodName;
-(void)invokeWithBridge:(id)arg1 module:(id)arg2 arguments:(id)arg3 ;
-(NSString *)JSMethodName;
-(NSDictionary *)profileArgs;
-(id)initWithMethodSignature:(id)arg1 JSMethodName:(id)arg2 moduleClass:(Class)arg3 ;
-(unsigned long long)functionType;
-(id)init;
-(NSString *)description;
-(SEL)selector;
@end

