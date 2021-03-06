/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTEventEmitter.h>
#import <Messenger/RCTSRWebSocketDelegate.h>

@class NSMutableDictionary, NSString;

@interface RCTWebSocketModule : RCTEventEmitter <RCTSRWebSocketDelegate> {

	NSMutableDictionary* _sockets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)moduleName;
+(id)__rct_export__600;
+(id)__rct_export__771;
+(id)__rct_export__822;
+(id)__rct_export__883;
+(id)__rct_export__934;
+(void)load;
-(id)supportedEvents;
-(void)webSocketDidOpen:(id)arg1 ;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(BOOL)arg4 ;
-(void)connect:(id)arg1 protocols:(id)arg2 headers:(id)arg3 socketID:(id)arg4 ;
-(void)send:(id)arg1 socketID:(id)arg2 ;
-(void)sendBinary:(id)arg1 socketID:(id)arg2 ;
-(void)dealloc;
-(void)ping:(id)arg1 ;
-(void)close:(id)arg1 ;
@end

