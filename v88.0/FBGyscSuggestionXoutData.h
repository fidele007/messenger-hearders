/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBGyscSuggestionXoutData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _suggestionIdentifier;
	NSString* _suggestionType;
	NSString* _ref;

}

@property (nonatomic,copy) NSString * clientMutationId;                  //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                           //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * suggestionIdentifier;              //@synthesize suggestionIdentifier=_suggestionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * suggestionType;                    //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,copy) NSString * ref;                               //@synthesize ref=_ref - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setSuggestionType:(NSString *)arg1 ;
-(NSString *)suggestionType;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setSuggestionIdentifier:(NSString *)arg1 ;
-(NSString *)suggestionIdentifier;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
@end
