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

@interface FBReactionTriggerCityGuideFilter : FBGraphQLInput {

	NSString* _tab;
	NSString* _listType;
	NSString* _categoryId;

}

@property (nonatomic,copy) NSString * tab;                     //@synthesize tab=_tab - In the implementation block
@property (nonatomic,copy) NSString * listType;                //@synthesize listType=_listType - In the implementation block
@property (nonatomic,copy) NSString * categoryId;              //@synthesize categoryId=_categoryId - In the implementation block
-(NSString *)tab;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)categoryId;
-(void)setCategoryId:(NSString *)arg1 ;
-(void)setTab:(NSString *)arg1 ;
-(void)setListType:(NSString *)arg1 ;
-(NSString *)listType;
@end

