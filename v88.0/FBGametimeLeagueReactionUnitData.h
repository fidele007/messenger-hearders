/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber, NSArray, FBReactionContextQueryParams;

@interface FBGametimeLeagueReactionUnitData : FBGraphQLInput {

	NSString* _sportId;
	NSNumber* _date;
	NSArray* _reactionUnitIds;
	FBReactionContextQueryParams* _reactionContext;

}

@property (nonatomic,copy) NSString * sportId;                                          //@synthesize sportId=_sportId - In the implementation block
@property (nonatomic,copy) NSNumber * date;                                             //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSArray * reactionUnitIds;                                   //@synthesize reactionUnitIds=_reactionUnitIds - In the implementation block
@property (nonatomic,copy) FBReactionContextQueryParams * reactionContext;              //@synthesize reactionContext=_reactionContext - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)sportId;
-(void)setSportId:(NSString *)arg1 ;
-(NSArray *)reactionUnitIds;
-(void)setReactionUnitIds:(NSArray *)arg1 ;
-(FBReactionContextQueryParams *)reactionContext;
-(void)setReactionContext:(FBReactionContextQueryParams *)arg1 ;
-(NSNumber *)date;
-(void)setDate:(NSNumber *)arg1 ;
@end

