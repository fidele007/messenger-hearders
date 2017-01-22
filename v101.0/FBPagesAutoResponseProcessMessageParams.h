/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber;

@interface FBPagesAutoResponseProcessMessageParams : FBGraphQLInput {

	NSNumber* _adminId;
	NSNumber* _userId;

}

@property (nonatomic,copy) NSNumber * adminId;              //@synthesize adminId=_adminId - In the implementation block
@property (nonatomic,copy) NSNumber * userId;               //@synthesize userId=_userId - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)adminId;
-(void)setAdminId:(NSNumber *)arg1 ;
-(void)setUserId:(NSNumber *)arg1 ;
-(NSNumber *)userId;
@end
