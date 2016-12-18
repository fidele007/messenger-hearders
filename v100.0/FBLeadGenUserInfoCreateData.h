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

@interface FBLeadGenUserInfoCreateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _fullName;
	NSArray* _fieldsData;
	NSString* _adId;
	NSString* _shareId;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * fullName;                      //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy) NSArray * fieldsData;                     //@synthesize fieldsData=_fieldsData - In the implementation block
@property (nonatomic,copy) NSString * adId;                          //@synthesize adId=_adId - In the implementation block
@property (nonatomic,copy) NSString * shareId;                       //@synthesize shareId=_shareId - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)adId;
-(void)setAdId:(NSString *)arg1 ;
-(void)setFieldsData:(NSArray *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)fieldsData;
-(void)setFullName:(NSString *)arg1 ;
-(void)setShareId:(NSString *)arg1 ;
-(NSString *)shareId;
-(NSString *)fullName;
@end

