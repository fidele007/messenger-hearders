/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(void)logEventWithName:(unsigned long long)arg1 analyticsExtras:(id)arg2 ;
-(id)initWithStoryBlock:(id)arg1 intentHandler:(id)arg2 ;
-(void)logBlockInteractionOfType:(unsigned long long)arg1 analyticsExtras:(id)arg2 ;
@end

