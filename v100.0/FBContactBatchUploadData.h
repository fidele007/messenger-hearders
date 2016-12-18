/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber, NSArray;

@interface FBContactBatchUploadData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _source;
	NSString* _phoneId;
	NSString* _simCountryCode;
	NSString* _networkCountryCode;
	NSString* _contactUploadFieldSetting;
	NSString* _contactUploadSessionType;
	NSString* _needInvitableContacts;
	NSString* _needFriendableContacts;
	NSString* _contactRootHashVersion;
	NSString* _sessionId;
	NSNumber* _batchIndex;
	NSArray* _contacts;

}

@property (nonatomic,copy) NSString * clientMutationId;                       //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * source;                                 //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * phoneId;                                //@synthesize phoneId=_phoneId - In the implementation block
@property (nonatomic,copy) NSString * simCountryCode;                         //@synthesize simCountryCode=_simCountryCode - In the implementation block
@property (nonatomic,copy) NSString * networkCountryCode;                     //@synthesize networkCountryCode=_networkCountryCode - In the implementation block
@property (nonatomic,copy) NSString * contactUploadFieldSetting;              //@synthesize contactUploadFieldSetting=_contactUploadFieldSetting - In the implementation block
@property (nonatomic,copy) NSString * contactUploadSessionType;               //@synthesize contactUploadSessionType=_contactUploadSessionType - In the implementation block
@property (nonatomic,copy) NSString * needInvitableContacts;                  //@synthesize needInvitableContacts=_needInvitableContacts - In the implementation block
@property (nonatomic,copy) NSString * needFriendableContacts;                 //@synthesize needFriendableContacts=_needFriendableContacts - In the implementation block
@property (nonatomic,copy) NSString * contactRootHashVersion;                 //@synthesize contactRootHashVersion=_contactRootHashVersion - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                              //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy) NSNumber * batchIndex;                             //@synthesize batchIndex=_batchIndex - In the implementation block
@property (nonatomic,copy) NSArray * contacts;                                //@synthesize contacts=_contacts - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)batchIndex;
-(void)setBatchIndex:(NSNumber *)arg1 ;
-(NSString *)phoneId;
-(void)setPhoneId:(NSString *)arg1 ;
-(NSString *)simCountryCode;
-(void)setSimCountryCode:(NSString *)arg1 ;
-(NSString *)networkCountryCode;
-(void)setNetworkCountryCode:(NSString *)arg1 ;
-(NSString *)contactUploadFieldSetting;
-(void)setContactUploadFieldSetting:(NSString *)arg1 ;
-(NSString *)contactUploadSessionType;
-(void)setContactUploadSessionType:(NSString *)arg1 ;
-(NSString *)needInvitableContacts;
-(void)setNeedInvitableContacts:(NSString *)arg1 ;
-(NSString *)needFriendableContacts;
-(void)setNeedFriendableContacts:(NSString *)arg1 ;
-(NSString *)contactRootHashVersion;
-(void)setContactRootHashVersion:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
@end

