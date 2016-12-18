/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber, FBEventContext;

@interface FBLightweightEventCreateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _threadId;
	NSNumber* _eventTime;
	FBEventContext* _context;
	NSString* _eventType;
	NSString* _title;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * threadId;                      //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,copy) NSNumber * eventTime;                     //@synthesize eventTime=_eventTime - In the implementation block
@property (nonatomic,copy) FBEventContext * context;                 //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * eventType;                     //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(NSNumber *)eventTime;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setEventTime:(NSNumber *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(FBEventContext *)context;
-(void)setContext:(FBEventContext *)arg1 ;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)eventType;
-(NSString *)threadId;
-(void)setThreadId:(NSString *)arg1 ;
@end

