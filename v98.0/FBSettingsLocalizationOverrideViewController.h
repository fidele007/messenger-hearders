/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, NSString;

@interface FBSettingsLocalizationOverrideViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _locales;
	long long _selectedRow;

}

@property (nonatomic,copy) NSArray * locales;                       //@synthesize locales=_locales - In the implementation block
@property (assign,nonatomic) long long selectedRow;                 //@synthesize selectedRow=_selectedRow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showAuxiliaryViewController;
-(void)setSelectedRow:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(NSArray *)locales;
-(void)setLocales:(NSArray *)arg1 ;
-(long long)selectedRow;
@end

