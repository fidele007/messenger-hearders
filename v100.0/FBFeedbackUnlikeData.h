/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBFeedbackUnlikeData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _feedbackId;
	NSArray* _tracking;
	NSString* _nectarModule;
	NSString* _feedbackSource;
	NSString* _feedbackReferrer;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * feedbackId;                    //@synthesize feedbackId=_feedbackId - In the implementation block
@property (nonatomic,copy) NSArray * tracking;                       //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,copy) NSString * nectarModule;                  //@synthesize nectarModule=_nectarModule - In the implementation block
@property (nonatomic,copy) NSString * feedbackSource;                //@synthesize feedbackSource=_feedbackSource - In the implementation block
@property (nonatomic,copy) NSString * feedbackReferrer;              //@synthesize feedbackReferrer=_feedbackReferrer - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)feedbackSource;
-(NSString *)feedbackReferrer;
-(NSString *)actorId;
-(void)setFeedbackId:(NSString *)arg1 ;
-(void)setFeedbackSource:(NSString *)arg1 ;
-(void)setFeedbackReferrer:(NSString *)arg1 ;
-(NSString *)feedbackId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)nectarModule;
-(void)setNectarModule:(NSString *)arg1 ;
-(void)setTracking:(NSArray *)arg1 ;
-(NSArray *)tracking;
@end

