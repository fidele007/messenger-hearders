/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBMobileConfigSearchResultControllerDelegate;
@class NSArray, NSString;

@interface FBMobileConfigSearchResultController : NSObject <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _allResults;
	NSString* _searchText;
	NSArray* _searchResult;
	id<FBMobileConfigSearchResultControllerDelegate> _delegate;

}

@property (nonatomic,copy) NSString * searchText;                                                           //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy) NSArray * searchResult;                                                          //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic,__weak) id<FBMobileConfigSearchResultControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configureCell:(id)arg1 forUniverseItem:(id)arg2 ;
-(void)_configureCell:(id)arg1 forExperimentItem:(id)arg2 ;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 ;
-(id)_highlightText:(id)arg1 withPrefix:(id)arg2 ;
-(id)_getHighlightedString:(id)arg1 prefixLengthToIgnore:(unsigned long long)arg2 ;
-(id)initWithAllResults:(id)arg1 ;
-(void)searchWithSearchText:(id)arg1 ;
-(void)setDelegate:(id<FBMobileConfigSearchResultControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBMobileConfigSearchResultControllerDelegate>)delegate;
-(NSString *)searchText;
-(void)setSearchResult:(NSArray *)arg1 ;
-(NSArray *)searchResult;
-(void)setSearchText:(NSString *)arg1 ;
@end

