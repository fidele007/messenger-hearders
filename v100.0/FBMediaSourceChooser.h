/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/FBMediaSourceChooserProtocol.h>

@protocol FBMediaDataSourceProtocol, FBMediaSourceChooserDelegate;
@class FBMediaPickerSession, NSString;

@interface FBMediaSourceChooser : UITableViewController <UITableViewDelegate, UITableViewDataSource, FBMediaSourceChooserProtocol> {

	FBMediaPickerSession* _session;
	id<FBMediaDataSourceProtocol> _currentDataSource;
	id<FBMediaSourceChooserDelegate> _delegate;

}

@property (nonatomic,readonly) double height; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBMediaSourceChooserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)analyticsModule;
-(void)_didChangeDataSources:(id)arg1 ;
-(id)_dataSourceForIndexPath:(id)arg1 ;
-(id)initWithSession:(id)arg1 selectedDataSource:(id)arg2 ;
-(void)setDelegate:(id<FBMediaSourceChooserDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBMediaSourceChooserDelegate>)delegate;
-(double)height;
@end

