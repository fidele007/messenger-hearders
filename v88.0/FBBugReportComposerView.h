/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>

@class UIView, UIImageView, UIButton, FBBugReportScreenshotListView, FBTextView, FBBugReportComposerViewSectionHeader, UITableView, NSString;

@interface FBBugReportComposerView : UIView <UITableViewDelegate> {

	UIView* _background;
	UIImageView* _chevron;
	double _contentOffset;
	double _textViewHeight;
	BOOL _keyboardDisplayed;
	int _keyboardHeight;
	UIButton* _selectProductButton;
	UIButton* _legal;
	BOOL _typeDescriptionSectionHasText;
	int _mode;
	FBBugReportScreenshotListView* _screenshotListView;
	FBTextView* _textView;
	FBBugReportComposerViewSectionHeader* _chooseCategorySectionHeader;
	FBBugReportComposerViewSectionHeader* _typeDescriptionSectionHeader;
	FBBugReportComposerViewSectionHeader* _uploadScreenshotsSectionHeader;
	UITableView* _categoryChooserTableView;
	long long _selectedRow;

}

@property (nonatomic,readonly) UIButton * selectProductButton;                                                     //@synthesize selectProductButton=_selectProductButton - In the implementation block
@property (nonatomic,readonly) UIButton * legal;                                                                   //@synthesize legal=_legal - In the implementation block
@property (nonatomic,copy) NSString * productString; 
@property (nonatomic,retain) FBBugReportScreenshotListView * screenshotListView;                                   //@synthesize screenshotListView=_screenshotListView - In the implementation block
@property (nonatomic,readonly) FBTextView * textView;                                                              //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) FBBugReportComposerViewSectionHeader * chooseCategorySectionHeader;                 //@synthesize chooseCategorySectionHeader=_chooseCategorySectionHeader - In the implementation block
@property (nonatomic,readonly) FBBugReportComposerViewSectionHeader * typeDescriptionSectionHeader;                //@synthesize typeDescriptionSectionHeader=_typeDescriptionSectionHeader - In the implementation block
@property (nonatomic,readonly) FBBugReportComposerViewSectionHeader * uploadScreenshotsSectionHeader;              //@synthesize uploadScreenshotsSectionHeader=_uploadScreenshotsSectionHeader - In the implementation block
@property (readonly) int mode;                                                                                     //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UITableView * categoryChooserTableView;                                             //@synthesize categoryChooserTableView=_categoryChooserTableView - In the implementation block
@property (assign) BOOL typeDescriptionSectionHasText;                                                             //@synthesize typeDescriptionSectionHasText=_typeDescriptionSectionHasText - In the implementation block
@property (assign) long long selectedRow;                                                                          //@synthesize selectedRow=_selectedRow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelectedRow:(long long)arg1 ;
-(void)willShowKeyboard:(id)arg1 ;
-(void)willHideKeyboard:(id)arg1 ;
-(void)handleKeyboardVisibilityChange:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 includeSelectProductSection:(BOOL)arg2 ;
-(void)setProductString:(NSString *)arg1 ;
-(NSString *)productString;
-(void)changeMode:(int)arg1 ;
-(UIButton *)selectProductButton;
-(FBBugReportScreenshotListView *)screenshotListView;
-(void)setScreenshotListView:(FBBugReportScreenshotListView *)arg1 ;
-(FBBugReportComposerViewSectionHeader *)chooseCategorySectionHeader;
-(FBBugReportComposerViewSectionHeader *)typeDescriptionSectionHeader;
-(FBBugReportComposerViewSectionHeader *)uploadScreenshotsSectionHeader;
-(UITableView *)categoryChooserTableView;
-(BOOL)typeDescriptionSectionHasText;
-(void)setTypeDescriptionSectionHasText:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(int)mode;
-(FBTextView *)textView;
-(long long)selectedRow;
-(UIButton *)legal;
@end

