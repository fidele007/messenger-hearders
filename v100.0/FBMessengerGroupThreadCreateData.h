/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray, FBThreadSettingsParams, FBThreadCustomizationParams;

@interface FBMessengerGroupThreadCreateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSArray* _participants;
	NSString* _entryPoint;
	FBThreadSettingsParams* _threadSettings;
	FBThreadCustomizationParams* _threadCustomization;
	NSString* _useExistingGroup;
	NSString* _fbGroupId;

}

@property (nonatomic,copy) NSString * clientMutationId;                                    //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                             //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSArray * participants;                                         //@synthesize participants=_participants - In the implementation block
@property (nonatomic,copy) NSString * entryPoint;                                          //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,copy) FBThreadSettingsParams * threadSettings;                        //@synthesize threadSettings=_threadSettings - In the implementation block
@property (nonatomic,copy) FBThreadCustomizationParams * threadCustomization;              //@synthesize threadCustomization=_threadCustomization - In the implementation block
@property (nonatomic,copy) NSString * useExistingGroup;                                    //@synthesize useExistingGroup=_useExistingGroup - In the implementation block
@property (nonatomic,copy) NSString * fbGroupId;                                           //@synthesize fbGroupId=_fbGroupId - In the implementation block
-(void)setThreadSettings:(FBThreadSettingsParams *)arg1 ;
-(void)setThreadCustomization:(FBThreadCustomizationParams *)arg1 ;
-(void)setEntryPoint:(NSString *)arg1 ;
-(void)setFbGroupId:(NSString *)arg1 ;
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)fbGroupId;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBThreadCustomizationParams *)threadCustomization;
-(NSString *)useExistingGroup;
-(void)setUseExistingGroup:(NSString *)arg1 ;
-(FBThreadSettingsParams *)threadSettings;
-(NSString *)entryPoint;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSArray *)participants;
@end

