/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBMessengerMontageArtSearchArguments : FBGraphQLInput {

	NSString* _searchMode;
	NSString* _searchTerm;
	NSString* _stickerId;
	NSArray* _supportedFeatures;

}

@property (nonatomic,copy) NSString * searchMode;                    //@synthesize searchMode=_searchMode - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                    //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,copy) NSString * stickerId;                     //@synthesize stickerId=_stickerId - In the implementation block
@property (nonatomic,copy) NSArray * supportedFeatures;              //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
-(NSString *)searchMode;
-(NSString *)stickerId;
-(void)setStickerId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setSupportedFeatures:(NSArray *)arg1 ;
-(NSArray *)supportedFeatures;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSString *)searchTerm;
-(void)setSearchMode:(NSString *)arg1 ;
@end
