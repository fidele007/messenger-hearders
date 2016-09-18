/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBEventContext;

@interface FBProfileSetEventsCalendarSubscriptionStatusData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _profileId;
	NSString* _subscriptionStatus;
	NSString* _eventId;
	FBEventContext* _context;

}

@property (nonatomic,copy) NSString * clientMutationId;                //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                         //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * profileId;                       //@synthesize profileId=_profileId - In the implementation block
@property (nonatomic,copy) NSString * subscriptionStatus;              //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,copy) NSString * eventId;                         //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy) FBEventContext * context;                   //@synthesize context=_context - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setSubscriptionStatus:(NSString *)arg1 ;
-(FBEventContext *)context;
-(void)setContext:(FBEventContext *)arg1 ;
-(NSString *)eventId;
-(void)setEventId:(NSString *)arg1 ;
-(NSString *)subscriptionStatus;
-(void)setProfileId:(NSString *)arg1 ;
-(NSString *)profileId;
@end

