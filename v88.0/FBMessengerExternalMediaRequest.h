/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber, NSArray;

@interface FBMessengerExternalMediaRequest : FBGraphQLInput {

	NSString* _query;
	NSString* _queryType;
	NSNumber* _num;
	NSArray* _resultTypes;
	NSString* _resultCursor;
	NSString* _groupCursor;
	NSString* _groupBy;
	NSArray* _appFbidFilter;
	NSString* _cacheDirective;
	NSArray* _mediaParams;
	NSArray* _appIconParams;

}

@property (nonatomic,copy) NSString * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) NSString * queryType;                   //@synthesize queryType=_queryType - In the implementation block
@property (nonatomic,copy) NSNumber * num;                         //@synthesize num=_num - In the implementation block
@property (nonatomic,copy) NSArray * resultTypes;                  //@synthesize resultTypes=_resultTypes - In the implementation block
@property (nonatomic,copy) NSString * resultCursor;                //@synthesize resultCursor=_resultCursor - In the implementation block
@property (nonatomic,copy) NSString * groupCursor;                 //@synthesize groupCursor=_groupCursor - In the implementation block
@property (nonatomic,copy) NSString * groupBy;                     //@synthesize groupBy=_groupBy - In the implementation block
@property (nonatomic,copy) NSArray * appFbidFilter;                //@synthesize appFbidFilter=_appFbidFilter - In the implementation block
@property (nonatomic,copy) NSString * cacheDirective;              //@synthesize cacheDirective=_cacheDirective - In the implementation block
@property (nonatomic,copy) NSArray * mediaParams;                  //@synthesize mediaParams=_mediaParams - In the implementation block
@property (nonatomic,copy) NSArray * appIconParams;                //@synthesize appIconParams=_appIconParams - In the implementation block
-(void)setResultTypes:(NSArray *)arg1 ;
-(NSArray *)resultTypes;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)queryType;
-(void)setQueryType:(NSString *)arg1 ;
-(NSNumber *)num;
-(void)setNum:(NSNumber *)arg1 ;
-(NSString *)resultCursor;
-(void)setResultCursor:(NSString *)arg1 ;
-(NSString *)groupCursor;
-(void)setGroupCursor:(NSString *)arg1 ;
-(NSArray *)appFbidFilter;
-(void)setAppFbidFilter:(NSArray *)arg1 ;
-(NSString *)cacheDirective;
-(void)setCacheDirective:(NSString *)arg1 ;
-(NSArray *)mediaParams;
-(void)setMediaParams:(NSArray *)arg1 ;
-(NSArray *)appIconParams;
-(void)setAppIconParams:(NSArray *)arg1 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)groupBy;
-(void)setGroupBy:(NSString *)arg1 ;
@end

