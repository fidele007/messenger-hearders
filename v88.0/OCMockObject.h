/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSMutableArray;

@interface OCMockObject : NSProxy {

	BOOL isNice;
	BOOL expectationOrderMatters;
	NSMutableArray* recorders;
	NSMutableArray* expectations;
	NSMutableArray* rejections;
	NSMutableArray* exceptions;

}
+(id)mockForClass:(Class)arg1 ;
+(id)_makeNice:(id)arg1 ;
+(id)mockForProtocol:(id)arg1 ;
+(id)partialMockForObject:(id)arg1 ;
+(id)niceMockForClass:(Class)arg1 ;
+(id)niceMockForProtocol:(id)arg1 ;
+(id)observerMock;
+(void)initialize;
-(void)stopMocking;
-(id)getNewRecorder;
-(id)stub;
-(id)_recorderDescriptions:(BOOL)arg1 ;
-(void)handleUnRecordedInvocation:(id)arg1 ;
-(void)setExpectationOrderMatters:(BOOL)arg1 ;
-(id)expect;
-(void)verifyWithDelay:(double)arg1 ;
-(BOOL)handleSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)handleInvocation:(id)arg1 ;
-(id)reject;
-(void)verify;
@end

