/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBGraphQLInput.h>

@class NSString, NSData;

@interface FBInstantGameCustomUpdateData : FBGraphQLInput

@property (nonatomic,copy) NSString * clientMutationId; 
@property (nonatomic,copy) NSString * actorId; 
@property (nonatomic,copy) NSString * gameId; 
@property (nonatomic,copy) NSString * contextTokenId; 
@property (nonatomic,copy) NSString * image; 
@property (nonatomic,copy) NSData * imageFile; 
@property (nonatomic,copy) NSString * imageFileContentType; 
@property (nonatomic,copy) NSString * cta; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * data; 
@property (nonatomic,copy) NSString * extra; 
@property (nonatomic,copy) NSString * sessionId; 
+(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
@end

