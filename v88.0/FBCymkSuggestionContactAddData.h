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

@interface FBCymkSuggestionContactAddData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _suggestionId;
	NSString* _suggestionSurface;

}

@property (nonatomic,copy) NSString * clientMutationId;               //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                        //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * suggestionId;                   //@synthesize suggestionId=_suggestionId - In the implementation block
@property (nonatomic,copy) NSString * suggestionSurface;              //@synthesize suggestionSurface=_suggestionSurface - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setSuggestionId:(NSString *)arg1 ;
-(void)setSuggestionSurface:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)suggestionId;
-(NSString *)suggestionSurface;
@end

