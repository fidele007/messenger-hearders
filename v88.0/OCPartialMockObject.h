/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/OCClassMockObject.h>

@class NSObject;

@interface OCPartialMockObject : OCClassMockObject {

	NSObject* realObject;

}
+(void)rememberPartialMock:(id)arg1 forObject:(id)arg2 ;
+(void)forgetPartialMockForObject:(id)arg1 ;
+(id)existingPartialMockForObject:(id)arg1 ;
+(void)initialize;
-(void)stopMocking;
-(id)realObject;
-(id)getNewRecorder;
-(void)handleUnRecordedInvocation:(id)arg1 ;
-(void)setupSubclassForObject:(id)arg1 ;
-(void)forwardInvocationForRealObject:(id)arg1 ;
-(id)forwardingTargetForSelectorForRealObject:(SEL)arg1 ;
-(id)forwardingTargetForSelector_Original:(SEL)arg1 ;
-(Class)classForRealObject;
-(Class)class_Original;
-(void)setupForwarderForSelector:(SEL)arg1 ;
-(void)removeForwarderForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithObject:(id)arg1 ;
@end

