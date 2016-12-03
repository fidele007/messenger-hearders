/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber, NSString, FBGraphSearchFilteredQueryArguments;

@interface FBGraphSearchQueryArguments : FBGraphQLInput {

	NSNumber* _graphQLID;
	NSString* _hashtag;
	NSString* _text;
	NSString* _bqf;
	FBGraphSearchFilteredQueryArguments* _filteredQueryArguments;

}

@property (nonatomic,copy) NSNumber * graphQLID;                                                      //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy) NSString * hashtag;                                                        //@synthesize hashtag=_hashtag - In the implementation block
@property (nonatomic,copy) NSString * text;                                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * bqf;                                                            //@synthesize bqf=_bqf - In the implementation block
@property (nonatomic,copy) FBGraphSearchFilteredQueryArguments * filteredQueryArguments;              //@synthesize filteredQueryArguments=_filteredQueryArguments - In the implementation block
-(NSNumber *)graphQLID;
-(void)setGraphQLID:(NSNumber *)arg1 ;
-(NSString *)hashtag;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setHashtag:(NSString *)arg1 ;
-(NSString *)bqf;
-(void)setBqf:(NSString *)arg1 ;
-(FBGraphSearchFilteredQueryArguments *)filteredQueryArguments;
-(void)setFilteredQueryArguments:(FBGraphSearchFilteredQueryArguments *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end
