/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphObjectPickerViewController.h>
#import <Messenger/FBGraphObjectViewControllerDelegate.h>

@class NSString, NSTimer;

@interface FBPlacePickerViewController : FBGraphObjectPickerViewController <FBGraphObjectViewControllerDelegate> {

	BOOL _hasSearchTextChangedSinceLastQuery;
	long long _radiusInMeters;
	long long _resultsLimit;
	NSString* _searchText;
	NSTimer* _searchTextChangedTimer;
	CLLocationCoordinate2D _locationCoordinate;

}

@property (nonatomic,retain) NSTimer * searchTextChangedTimer;                       //@synthesize searchTextChangedTimer=_searchTextChangedTimer - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D locationCoordinate;              //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (assign,nonatomic) long long radiusInMeters;                               //@synthesize radiusInMeters=_radiusInMeters - In the implementation block
@property (assign,nonatomic) long long resultsLimit;                                 //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                    //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain,readonly) id<FBGraphPlace> selection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestForPlacesSearchAtCoordinate:(CLLocationCoordinate2D)arg1 radiusInMeters:(long long)arg2 resultsLimit:(long long)arg3 searchText:(id)arg4 fields:(id)arg5 datasource:(id)arg6 session:(id)arg7 ;
+(id)cacheDescriptorWithLocationCoordinate:(CLLocationCoordinate2D)arg1 radiusInMeters:(long long)arg2 searchText:(id)arg3 resultsLimit:(long long)arg4 fieldsForRequest:(id)arg5 ;
+(unsigned long long)graphObjectPagingMode;
+(id)firstRenderLogString;
-(BOOL)graphObjectTableDataSource:(id)arg1 filterIncludesItem:(id)arg2 ;
-(id)graphObjectTableDataSource:(id)arg1 pictureUrlOfItem:(id)arg2 ;
-(id)graphObjectTableDataSource:(id)arg1 subtitleOfItem:(id)arg2 ;
-(id)graphObjectTableDataSource:(id)arg1 titleOfItem:(id)arg2 ;
-(void)notifyDelegateDataDidChange;
-(void)notifyDelegateSelectionDidChange;
-(void)configureUsingCachedDescriptor:(id)arg1 ;
-(void)logAppEvents:(BOOL)arg1 ;
-(void)loadDataThrottledSkippingRoundTripIfCached:(id)arg1 ;
-(void)configureDataSource:(id)arg1 ;
-(BOOL)delegateIncludesGraphObject:(id)arg1 ;
-(void)loadDataSkippingRoundTripIfCached:(id)arg1 ;
-(void)initializePlacePicker;
-(void)setRadiusInMeters:(long long)arg1 ;
-(long long)radiusInMeters;
-(NSTimer *)searchTextChangedTimer;
-(id)createSearchTextChangedTimer;
-(void)setSearchTextChangedTimer:(NSTimer *)arg1 ;
-(void)searchTextChangedTimerFired:(id)arg1 ;
-(void)notifyDelegateOfError:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<FBGraphPlace>)selection;
-(NSString *)searchText;
-(void)setLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)locationCoordinate;
-(void)setSearchText:(NSString *)arg1 ;
-(long long)resultsLimit;
-(void)setResultsLimit:(long long)arg1 ;
@end

