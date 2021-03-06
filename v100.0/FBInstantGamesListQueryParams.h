/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBInstantGamesListQueryParams : FBGraphQLInput {

	NSString* _text;
	NSString* _surface;
	NSString* _gameId;

}

@property (nonatomic,copy) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * surface;              //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy) NSString * gameId;               //@synthesize gameId=_gameId - In the implementation block
-(void)setSurface:(NSString *)arg1 ;
-(void)setGameId:(NSString *)arg1 ;
-(NSString *)gameId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)surface;
@end

