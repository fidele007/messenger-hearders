/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray, FBReactionContextQueryParams;

@interface FBGameTimeMatchReactionUnitData : FBGraphQLInput {

	NSString* _matchId;
	NSString* _pageId;
	NSArray* _reactionUnitIds;
	FBReactionContextQueryParams* _reactionContext;

}

@property (nonatomic,copy) NSString * matchId;                                          //@synthesize matchId=_matchId - In the implementation block
@property (nonatomic,copy) NSString * pageId;                                           //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSArray * reactionUnitIds;                                   //@synthesize reactionUnitIds=_reactionUnitIds - In the implementation block
@property (nonatomic,copy) FBReactionContextQueryParams * reactionContext;              //@synthesize reactionContext=_reactionContext - In the implementation block
-(NSString *)pageId;
-(void)setPageId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)matchId;
-(void)setMatchId:(NSString *)arg1 ;
-(NSArray *)reactionUnitIds;
-(void)setReactionUnitIds:(NSArray *)arg1 ;
-(FBReactionContextQueryParams *)reactionContext;
-(void)setReactionContext:(FBReactionContextQueryParams *)arg1 ;
@end
