/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBIntentHandler;
@class NSMutableSet, NSObject;

@interface FBNativeArticleBlockVPVLogger : NSObject {

	NSMutableSet* _sentVPVCache;
	NSObject*<OS_dispatch_queue> _workingQueue;
	id<FBIntentHandler> _intentHandler;

}

@property (assign,nonatomic,__weak) id<FBIntentHandler> intentHandler;              //@synthesize intentHandler=_intentHandler - In the implementation block
-(id<FBIntentHandler>)intentHandler;
-(void)setIntentHandler:(id<FBIntentHandler>)arg1 ;
-(void)_logVPVIfNecessaryForStoryBlock:(id)arg1 ;
-(void)_emptyVPVCache;
-(void)logVPVForStoryBlockIfNecessary:(id)arg1 ;
-(id)init;
-(void)reset;
@end

