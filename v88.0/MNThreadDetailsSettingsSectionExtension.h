/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadDetailsSectionExtension.h>

@protocol FBMProfileURLUtils, MNThreadDetailsSectionExtensionDelegate;
@class MNThreadViewModel, MNThreadDetailsTableViewCellIconsConfiguration, MNThreadDetailsPageConfiguration, NSString;

@interface MNThreadDetailsSettingsSectionExtension : NSObject <MNThreadDetailsSectionExtension> {

	MNThreadViewModel* _threadViewModel;
	MNThreadDetailsTableViewCellIconsConfiguration* _iconsConfiguration;
	MNThreadDetailsPageConfiguration* _pageConfiguration;
	id<FBMProfileURLUtils> _profileURLUtils;
	id<MNThreadDetailsSectionExtensionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNThreadDetailsSectionExtensionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(id)cellForRowIndex:(unsigned long long)arg1 ;
-(void)handleSelectionForRowIndex:(unsigned long long)arg1 ;
-(BOOL)shouldHighlightCellForRowAtIndex:(unsigned long long)arg1 ;
-(double)heightForFooterWithWidth:(double)arg1 ;
-(id)viewForFooterOfThreadDetailsSection;
-(unsigned long long)_settingsRowForRowIndex:(long long)arg1 ;
-(void)_handleViewTimelineAction;
-(id)initWithIconsConfiguration:(id)arg1 threadDetailsPageConfiguration:(id)arg2 profileURLUtils:(id)arg3 ;
-(void)setDelegate:(id<MNThreadDetailsSectionExtensionDelegate>)arg1 ;
-(id<MNThreadDetailsSectionExtensionDelegate>)delegate;
-(unsigned long long)numberOfRows;
@end

