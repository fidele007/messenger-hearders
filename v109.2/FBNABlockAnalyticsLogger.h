/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBIntentHandler;
@class NSString;

@interface FBNABlockAnalyticsLogger : NSObject {

	NSString* _storyBlockID;
	id<FBIntentHandler> _intentHandler;

}

@property (nonatomic,copy,readonly) NSString * storyBlockID;                          //@synthesize storyBlockID=_storyBlockID - In the implementation block
@property (nonatomic,__weak,readonly) id<FBIntentHandler> intentHandler;              //@synthesize intentHandler=_intentHandler - In the implementation block
-(id<FBIntentHandler>)intentHandler;
-(NSString *)storyBlockID;
-(id)initWithStoryBlock:(id)arg1 intentHandler:(id)arg2 ;
-(void)logBlockInteractionOfType:(unsigned long long)arg1 analyticsExtras:(id)arg2 ;
-(void)logEventWithName:(unsigned long long)arg1 analyticsExtras:(id)arg2 ;
@end

