/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@protocol FBGraphObjectViewControllerDelegate, FBGraphObjectSelectionQueryDelegate, FBGraphObjectDataSourceDataNeededDelegate;
@class UIImage, NSString, NSArray, NSDictionary, NSMutableSet, UILocalizedIndexedCollation;

@interface FBGraphObjectTableDataSource : NSObject <UITableViewDataSource> {

	BOOL _useCollation;
	BOOL _itemTitleSuffixEnabled;
	BOOL _itemPicturesEnabled;
	BOOL _itemSubtitleEnabled;
	BOOL _expectingMoreGraphObjects;
	BOOL _showSections;
	UIImage* _defaultPicture;
	id<FBGraphObjectViewControllerDelegate> _controllerDelegate;
	NSString* _groupByField;
	id<FBGraphObjectSelectionQueryDelegate> _selectionDelegate;
	id<FBGraphObjectDataSourceDataNeededDelegate> _dataNeededDelegate;
	NSArray* _sortDescriptors;
	NSArray* _data;
	NSArray* _indexKeys;
	NSDictionary* _indexMap;
	NSMutableSet* _pendingURLConnections;
	UILocalizedIndexedCollation* _collation;

}

@property (nonatomic,retain) NSArray * data;                                                                //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSArray * indexKeys;                                                           //@synthesize indexKeys=_indexKeys - In the implementation block
@property (nonatomic,retain) NSDictionary * indexMap;                                                       //@synthesize indexMap=_indexMap - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingURLConnections;                                          //@synthesize pendingURLConnections=_pendingURLConnections - In the implementation block
@property (assign,nonatomic) BOOL expectingMoreGraphObjects;                                                //@synthesize expectingMoreGraphObjects=_expectingMoreGraphObjects - In the implementation block
@property (nonatomic,retain) UILocalizedIndexedCollation * collation;                                       //@synthesize collation=_collation - In the implementation block
@property (assign,nonatomic) BOOL showSections;                                                             //@synthesize showSections=_showSections - In the implementation block
@property (nonatomic,retain) UIImage * defaultPicture;                                                      //@synthesize defaultPicture=_defaultPicture - In the implementation block
@property (assign,nonatomic) id<FBGraphObjectViewControllerDelegate> controllerDelegate;                    //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (nonatomic,copy) NSString * groupByField;                                                         //@synthesize groupByField=_groupByField - In the implementation block
@property (assign,nonatomic) BOOL useCollation;                                                             //@synthesize useCollation=_useCollation - In the implementation block
@property (assign,nonatomic) BOOL itemTitleSuffixEnabled;                                                   //@synthesize itemTitleSuffixEnabled=_itemTitleSuffixEnabled - In the implementation block
@property (assign,nonatomic) BOOL itemPicturesEnabled;                                                      //@synthesize itemPicturesEnabled=_itemPicturesEnabled - In the implementation block
@property (assign,nonatomic) BOOL itemSubtitleEnabled;                                                      //@synthesize itemSubtitleEnabled=_itemSubtitleEnabled - In the implementation block
@property (assign,nonatomic) id<FBGraphObjectSelectionQueryDelegate> selectionDelegate;                     //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (assign,nonatomic) id<FBGraphObjectDataSourceDataNeededDelegate> dataNeededDelegate;              //@synthesize dataNeededDelegate=_dataNeededDelegate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                                                       //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataNeededDelegate:(id<FBGraphObjectDataSourceDataNeededDelegate>)arg1 ;
-(void)appendGraphObjects:(id)arg1 ;
-(BOOL)hasGraphObjects;
-(id)indexPathForItem:(id)arg1 ;
-(void)prepareForNewRequest;
-(void)setPendingURLConnections:(NSMutableSet *)arg1 ;
-(void)setExpectingMoreGraphObjects:(BOOL)arg1 ;
-(void)setIndexKeys:(NSArray *)arg1 ;
-(void)setIndexMap:(NSDictionary *)arg1 ;
-(BOOL)filterIncludesItem:(id)arg1 ;
-(id)indexKeyOfItem:(id)arg1 ;
-(BOOL)useCollation;
-(void)setShowSections:(BOOL)arg1 ;
-(void)setSortingByFields:(id)arg1 ascending:(BOOL)arg2 ;
-(NSArray *)indexKeys;
-(BOOL)isLastSection:(long long)arg1 ;
-(id)sectionItemsForSection:(long long)arg1 ;
-(void)addOrRemovePendingConnection:(id)arg1 ;
-(UIImage *)defaultPicture;
-(NSMutableSet *)pendingURLConnections;
-(BOOL)expectingMoreGraphObjects;
-(id<FBGraphObjectDataSourceDataNeededDelegate>)dataNeededDelegate;
-(BOOL)showSections;
-(id)cellWithTableView:(id)arg1 ;
-(BOOL)isActivityIndicatorIndexPath:(id)arg1 ;
-(BOOL)itemPicturesEnabled;
-(id)tableView:(id)arg1 imageForItem:(id)arg2 ;
-(BOOL)itemTitleSuffixEnabled;
-(BOOL)itemSubtitleEnabled;
-(void)setUseCollation:(BOOL)arg1 ;
-(id)fieldsForRequestIncluding:(id)arg1 ;
-(void)clearGraphObjects;
-(void)bindTableView:(id)arg1 ;
-(void)cancelPendingRequests;
-(void)setSortingBySingleField:(id)arg1 ascending:(BOOL)arg2 ;
-(void)setDefaultPicture:(UIImage *)arg1 ;
-(void)setItemTitleSuffixEnabled:(BOOL)arg1 ;
-(void)setItemPicturesEnabled:(BOOL)arg1 ;
-(void)setItemSubtitleEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)update;
-(NSArray *)sortDescriptors;
-(id<FBGraphObjectViewControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id<FBGraphObjectViewControllerDelegate>)arg1 ;
-(UILocalizedIndexedCollation *)collation;
-(void)setCollation:(UILocalizedIndexedCollation *)arg1 ;
-(id)titleForSection:(long long)arg1 ;
-(id<FBGraphObjectSelectionQueryDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<FBGraphObjectSelectionQueryDelegate>)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(NSDictionary *)indexMap;
-(void)setGroupByField:(NSString *)arg1 ;
-(NSString *)groupByField;
@end

