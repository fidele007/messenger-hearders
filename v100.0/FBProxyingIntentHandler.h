/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <Messenger/FBIntentHandler.h>

@class UIResponder, NSString;

@interface FBProxyingIntentHandler : NSProxy <FBIntentHandler> {

	UIResponder* _responder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyingIntentHandlerForResponder:(id)arg1 ;
+(id)proxyingIntentHandlerForViewController:(id)arg1 ;
+(id)proxyingIntentHandlerForView:(id)arg1 ;
-(id)_resolvedIntentHandler;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

