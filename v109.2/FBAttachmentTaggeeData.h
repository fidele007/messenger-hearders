/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBGraphQLInput.h>

@class NSString;

@interface FBAttachmentTaggeeData : FBGraphQLInput {

	NSString* _graphQLID;
	NSString* _name;

}

@property (nonatomic,copy) NSString * graphQLID;              //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy) NSString * name;                   //@synthesize name=_name - In the implementation block
-(NSString *)graphQLID;
-(void)setGraphQLID:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end

