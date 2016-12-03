/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBLiveVideoSendTipData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _videoId;
	NSNumber* _tipAmount;
	NSString* _comment;
	NSString* _credentialId;
	NSString* _shouldProcessPayment;

}

@property (nonatomic,copy) NSString * clientMutationId;                  //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                           //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * videoId;                           //@synthesize videoId=_videoId - In the implementation block
@property (nonatomic,copy) NSNumber * tipAmount;                         //@synthesize tipAmount=_tipAmount - In the implementation block
@property (nonatomic,copy) NSString * comment;                           //@synthesize comment=_comment - In the implementation block
@property (nonatomic,copy) NSString * credentialId;                      //@synthesize credentialId=_credentialId - In the implementation block
@property (nonatomic,copy) NSString * shouldProcessPayment;              //@synthesize shouldProcessPayment=_shouldProcessPayment - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)videoId;
-(NSString *)clientMutationId;
-(NSString *)credentialId;
-(void)setCredentialId:(NSString *)arg1 ;
-(void)setVideoId:(NSString *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)tipAmount;
-(void)setTipAmount:(NSNumber *)arg1 ;
-(NSString *)shouldProcessPayment;
-(void)setShouldProcessPayment:(NSString *)arg1 ;
-(NSString *)comment;
-(void)setComment:(NSString *)arg1 ;
@end
