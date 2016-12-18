/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBViewerCoordinates, NSArray, NSNumber;

@interface FBCityStreetSearchQueryParams : FBGraphQLInput {

	NSString* _query;
	FBViewerCoordinates* _viewerCoordinates;
	NSString* _provider;
	NSString* _searchType;
	NSString* _integrationStrategy;
	NSString* _resultOrdering;
	NSString* _caller;
	NSArray* _countryFilter;
	NSArray* _pageCategory;
	NSNumber* _radius;
	NSString* _geocodeFallback;

}

@property (nonatomic,copy) NSString * query;                                     //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) FBViewerCoordinates * viewerCoordinates;              //@synthesize viewerCoordinates=_viewerCoordinates - In the implementation block
@property (nonatomic,copy) NSString * provider;                                  //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy) NSString * searchType;                                //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,copy) NSString * integrationStrategy;                       //@synthesize integrationStrategy=_integrationStrategy - In the implementation block
@property (nonatomic,copy) NSString * resultOrdering;                            //@synthesize resultOrdering=_resultOrdering - In the implementation block
@property (nonatomic,copy) NSString * caller;                                    //@synthesize caller=_caller - In the implementation block
@property (nonatomic,copy) NSArray * countryFilter;                              //@synthesize countryFilter=_countryFilter - In the implementation block
@property (nonatomic,copy) NSArray * pageCategory;                               //@synthesize pageCategory=_pageCategory - In the implementation block
@property (nonatomic,copy) NSNumber * radius;                                    //@synthesize radius=_radius - In the implementation block
@property (nonatomic,copy) NSString * geocodeFallback;                           //@synthesize geocodeFallback=_geocodeFallback - In the implementation block
-(void)setViewerCoordinates:(FBViewerCoordinates *)arg1 ;
-(void)setResultOrdering:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBViewerCoordinates *)viewerCoordinates;
-(NSString *)integrationStrategy;
-(void)setIntegrationStrategy:(NSString *)arg1 ;
-(NSString *)resultOrdering;
-(NSArray *)countryFilter;
-(void)setCountryFilter:(NSArray *)arg1 ;
-(NSArray *)pageCategory;
-(void)setPageCategory:(NSArray *)arg1 ;
-(NSString *)geocodeFallback;
-(void)setGeocodeFallback:(NSString *)arg1 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)provider;
-(void)setProvider:(NSString *)arg1 ;
-(NSNumber *)radius;
-(void)setRadius:(NSNumber *)arg1 ;
-(NSString *)searchType;
-(void)setCaller:(NSString *)arg1 ;
-(void)setSearchType:(NSString *)arg1 ;
-(NSString *)caller;
@end

