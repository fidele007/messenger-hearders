/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCacheDescriptor.h>
#import <Messenger/FBGraphObjectPagingLoaderDelegate.h>

@class NSString, NSSet, FBGraphObjectPagingLoader;

@interface FBPlacePickerCacheDescriptor : FBCacheDescriptor <FBGraphObjectPagingLoaderDelegate> {

	BOOL _hasCompletedFetch;
	long long _radiusInMeters;
	long long _resultsLimit;
	NSString* _searchText;
	NSSet* _fieldsForRequest;
	FBGraphObjectPagingLoader* _loader;
	CLLocationCoordinate2D _locationCoordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D locationCoordinate;              //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (assign,nonatomic) long long radiusInMeters;                               //@synthesize radiusInMeters=_radiusInMeters - In the implementation block
@property (assign,nonatomic) long long resultsLimit;                                 //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                    //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy) NSSet * fieldsForRequest;                                 //@synthesize fieldsForRequest=_fieldsForRequest - In the implementation block
@property (nonatomic,retain) FBGraphObjectPagingLoader * loader;                     //@synthesize loader=_loader - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedFetch;                                 //@synthesize hasCompletedFetch=_hasCompletedFetch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pagingLoaderDidFinishLoading:(id)arg1 ;
-(void)prefetchAndCacheForSession:(id)arg1 ;
-(void)setHasCompletedFetch:(BOOL)arg1 ;
-(BOOL)hasCompletedFetch;
-(void)setRadiusInMeters:(long long)arg1 ;
-(long long)radiusInMeters;
-(id)initWithLocationCoordinate:(CLLocationCoordinate2D)arg1 radiusInMeters:(long long)arg2 searchText:(id)arg3 resultsLimit:(long long)arg4 fieldsForRequest:(id)arg5 ;
-(NSSet *)fieldsForRequest;
-(void)setFieldsForRequest:(NSSet *)arg1 ;
-(void)dealloc;
-(NSString *)searchText;
-(void)setLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)locationCoordinate;
-(void)setLoader:(FBGraphObjectPagingLoader *)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(FBGraphObjectPagingLoader *)loader;
-(long long)resultsLimit;
-(void)setResultsLimit:(long long)arg1 ;
@end
