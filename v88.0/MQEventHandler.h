/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQEventHandlerProtocol.h>

@class NSString, NSMutableDictionary;

@interface MQEventHandler : NSObject <MQEventHandlerProtocol> {

	NSString* _functionName;
	/*^block*/id _targetBlock;
	id _target;
	NSMutableDictionary* _dispatcherMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFunction:(/*^block*/id)arg1 target:(id)arg2 ;
-(void)removeFromAllDispatchers;
-(id)initWithFunction:(/*^block*/id)arg1 target:(id)arg2 name:(id)arg3 ;
-(void)_initialiseWithFunctionName:(id)arg1 ;
-(void)invokeHandlerWithEvent:(id)arg1 ;
-(void)addEventDispatcher:(id)arg1 forType:(id)arg2 ;
-(void)removeEventDispatcher:(id)arg1 forType:(id)arg2 ;
-(id)initWithSelector:(SEL)arg1 target:(id)arg2 ;
-(id)init;
-(NSString *)description;
@end

