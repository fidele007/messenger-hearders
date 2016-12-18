/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPickerViewDelegate.h>
#import <Messenger/MNGroupsRoomCreateViewTableSectionControlling.h>

@protocol MNGroupsRoomCreateViewCustomizationSectionControllerDelegate;
@class FBUserSession, FBPickerView, NSString;

@interface MNGroupsRoomCreateViewCustomizationSectionController : NSObject <FBPickerViewDelegate, MNGroupsRoomCreateViewTableSectionControlling> {

	unsigned long long _customizationControllerType;
	FBUserSession* _session;
	FBPickerView* _pickerView;
	id<MNGroupsRoomCreateViewCustomizationSectionControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNGroupsRoomCreateViewCustomizationSectionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_pickeViewConfigForThemeColor:(id)arg1 emoji:(id)arg2 ;
-(id)initWithCustomizationControllerType:(unsigned long long)arg1 session:(id)arg2 ;
-(id)cellReuseIdentifierForIndexPath:(id)arg1 ;
-(double)cellHeightForRoomSummary:(id)arg1 atIndexPath:(id)arg2 constrainedToSize:(CGSize)arg3 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withRoomSummary:(id)arg3 ;
-(void)didSelectCellAtIndexPath:(id)arg1 ;
-(void)resetCellController;
-(void)pickerView:(id)arg1 didSelectItem:(id)arg2 ;
-(void)setDelegate:(id<MNGroupsRoomCreateViewCustomizationSectionControllerDelegate>)arg1 ;
-(id<MNGroupsRoomCreateViewCustomizationSectionControllerDelegate>)delegate;
@end

