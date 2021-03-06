/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNPhotosDataSourceUpdateListener.h>

@protocol MNPhotosDataSource, MNPhotosDataRequesting, MNMediaAlbumViewControllerDelegate;
@class MNMediaPickerAccessibilityLabelGenerator, PHImageRequestOptions, NSString;

@interface MNMediaAlbumViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, MNPhotosDataSourceUpdateListener> {

	id<MNPhotosDataSource> _photosDataSource;
	id<MNPhotosDataRequesting> _photosDataRequester;
	MNMediaPickerAccessibilityLabelGenerator* _mediaPickerAccessibilityLabelGenerator;
	PHImageRequestOptions* _imageRequestOptions;
	id<MNMediaAlbumViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMediaAlbumViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_assetCollectionForIndexPath:(id)arg1 ;
-(void)photosDataSourceDidUpdate;
-(void)photosDataSourceDidFinishLoadingDefaultAlbum;
-(id)initWithPhotosDataSource:(id)arg1 photosDataRequester:(id)arg2 mediaPickerAccessibilityLabelGenerator:(id)arg3 title:(id)arg4 ;
-(void)setDelegate:(id<MNMediaAlbumViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNMediaAlbumViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(long long)preferredInterfaceOrientationForPresentation;
@end

