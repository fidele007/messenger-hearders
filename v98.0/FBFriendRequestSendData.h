/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBFriendRequestSendData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSArray* _friendRequesteeIds;
	NSString* _source;
	NSArray* _warnAckForIds;
	NSString* _peopleYouMayKnowLocation;
	NSArray* _refs;
	NSString* _location;

}

@property (nonatomic,copy) NSString * clientMutationId;                      //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                               //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSArray * friendRequesteeIds;                     //@synthesize friendRequesteeIds=_friendRequesteeIds - In the implementation block
@property (nonatomic,copy) NSString * source;                                //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSArray * warnAckForIds;                          //@synthesize warnAckForIds=_warnAckForIds - In the implementation block
@property (nonatomic,copy) NSString * peopleYouMayKnowLocation;              //@synthesize peopleYouMayKnowLocation=_peopleYouMayKnowLocation - In the implementation block
@property (nonatomic,copy) NSArray * refs;                                   //@synthesize refs=_refs - In the implementation block
@property (nonatomic,copy) NSString * location;                              //@synthesize location=_location - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)friendRequesteeIds;
-(void)setFriendRequesteeIds:(NSArray *)arg1 ;
-(NSArray *)warnAckForIds;
-(void)setWarnAckForIds:(NSArray *)arg1 ;
-(NSString *)peopleYouMayKnowLocation;
-(void)setPeopleYouMayKnowLocation:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(void)setRefs:(NSArray *)arg1 ;
-(NSArray *)refs;
@end

