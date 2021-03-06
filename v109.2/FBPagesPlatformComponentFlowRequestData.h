/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBGraphQLInput.h>

@class NSString;

@interface FBPagesPlatformComponentFlowRequestData : FBGraphQLInput {

	NSString* _graphQLID;
	NSString* _initialInput;
	NSString* _screenState;
	NSString* _referrer;
	NSString* _priorReferrer;

}

@property (nonatomic,copy) NSString * graphQLID;                  //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy) NSString * initialInput;               //@synthesize initialInput=_initialInput - In the implementation block
@property (nonatomic,copy) NSString * screenState;                //@synthesize screenState=_screenState - In the implementation block
@property (nonatomic,copy) NSString * referrer;                   //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,copy) NSString * priorReferrer;              //@synthesize priorReferrer=_priorReferrer - In the implementation block
-(void)setReferrer:(NSString *)arg1 ;
-(void)setPriorReferrer:(NSString *)arg1 ;
-(void)setInitialInput:(NSString *)arg1 ;
-(NSString *)priorReferrer;
-(NSString *)graphQLID;
-(void)setGraphQLID:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)initialInput;
-(NSString *)referrer;
-(NSString *)screenState;
-(void)setScreenState:(NSString *)arg1 ;
@end

