/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBPagesPlatformComponentFlowRequestData : FBGraphQLInput {

	NSString* _graphQLID;
	NSString* _initialInput;
	NSString* _referrer;

}

@property (nonatomic,copy) NSString * graphQLID;                 //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy) NSString * initialInput;              //@synthesize initialInput=_initialInput - In the implementation block
@property (nonatomic,copy) NSString * referrer;                  //@synthesize referrer=_referrer - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)graphQLID;
-(void)setGraphQLID:(NSString *)arg1 ;
-(NSString *)initialInput;
-(void)setReferrer:(NSString *)arg1 ;
-(void)setInitialInput:(NSString *)arg1 ;
-(NSString *)referrer;
@end

