/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTEvent.h>

@class UIScrollView, NSDictionary, NSNumber, NSString;

@interface RCTScrollEvent : NSObject <RCTEvent> {

	UIScrollView* _scrollView;
	NSDictionary* _userData;
	unsigned short _coalescingKey;
	NSNumber* _viewTag;
	NSString* _eventName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * viewTag;                        //@synthesize viewTag=_viewTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventName;                 //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,readonly) unsigned short coalescingKey; 
+(id)moduleDotMethod;
-(NSNumber *)viewTag;
-(id)coalesceWithEvent:(id)arg1 ;
-(unsigned short)coalescingKey;
-(BOOL)canCoalesce;
-(id)initWithEventName:(id)arg1 reactTag:(id)arg2 scrollView:(id)arg3 userData:(id)arg4 coalescingKey:(unsigned short)arg5 ;
-(id)init;
-(id)body;
-(NSString *)eventName;
-(id)arguments;
@end

