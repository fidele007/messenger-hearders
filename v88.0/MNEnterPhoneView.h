/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/MNFormHeaderViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNPhoneNumberTextFieldControllerDelegate.h>

@protocol MNEnterPhoneViewDelegate;
@class UIButton, MNFormView, UITableView, MNFormFieldTextFieldCell, UITableViewCell, MNButton, MNPhoneVerificationHeaderView, UIView, MNLoadingIndicator, LPPhoneNumberMetadata, LPPhoneNumberFactory, NSString, MNPhoneNumberTextFieldController, MNPhoneVerificationCustomContent, LPPhoneNumber;

@interface MNEnterPhoneView : UIView <MNFormHeaderViewDelegate, UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, MNPhoneNumberTextFieldControllerDelegate> {

	BOOL _inProgress;
	BOOL _shouldUseBigBlueButton;
	BOOL _shouldUseSimplifiedTitle;
	id<MNEnterPhoneViewDelegate> _delegate;
	UIButton* _skipButton;
	MNFormView* _formView;
	UITableView* _tableView;
	MNFormFieldTextFieldCell* _phoneNumberFieldCell;
	MNFormFieldTextFieldCell* _countrySelectCell;
	UITableViewCell* _continueButtonCell;
	MNButton* _continueButton;
	MNPhoneVerificationHeaderView* _headerView;
	UIView* _footerView;
	MNLoadingIndicator* _activityIndicator;
	LPPhoneNumberMetadata* _phoneNumberMetadata;
	LPPhoneNumberFactory* _phoneNumberFactory;
	NSString* _isoCountryCode;
	unsigned long long _searchPrivacyOption;
	long long _phoneViewState;
	MNPhoneNumberTextFieldController* _phoneNumberTextFieldController;
	MNPhoneVerificationCustomContent* _customContent;

}

@property (nonatomic,retain) MNFormView * formView;                                                          //@synthesize formView=_formView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MNFormFieldTextFieldCell * phoneNumberFieldCell;                                //@synthesize phoneNumberFieldCell=_phoneNumberFieldCell - In the implementation block
@property (nonatomic,retain) MNFormFieldTextFieldCell * countrySelectCell;                                   //@synthesize countrySelectCell=_countrySelectCell - In the implementation block
@property (nonatomic,retain) UITableViewCell * continueButtonCell;                                           //@synthesize continueButtonCell=_continueButtonCell - In the implementation block
@property (nonatomic,retain) MNButton * continueButton;                                                      //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) MNPhoneVerificationHeaderView * headerView;                                     //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                            //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIButton * skipButton;                                                          //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,retain) MNLoadingIndicator * activityIndicator;                                         //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) LPPhoneNumberMetadata * phoneNumberMetadata;                                    //@synthesize phoneNumberMetadata=_phoneNumberMetadata - In the implementation block
@property (nonatomic,retain) LPPhoneNumberFactory * phoneNumberFactory;                                      //@synthesize phoneNumberFactory=_phoneNumberFactory - In the implementation block
@property (nonatomic,copy) NSString * isoCountryCode;                                                        //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (assign,nonatomic) unsigned long long searchPrivacyOption;                                         //@synthesize searchPrivacyOption=_searchPrivacyOption - In the implementation block
@property (assign,nonatomic) long long phoneViewState;                                                       //@synthesize phoneViewState=_phoneViewState - In the implementation block
@property (nonatomic,retain) MNPhoneNumberTextFieldController * phoneNumberTextFieldController;              //@synthesize phoneNumberTextFieldController=_phoneNumberTextFieldController - In the implementation block
@property (nonatomic,retain) MNPhoneVerificationCustomContent * customContent;                               //@synthesize customContent=_customContent - In the implementation block
@property (assign,nonatomic) BOOL shouldUseBigBlueButton;                                                    //@synthesize shouldUseBigBlueButton=_shouldUseBigBlueButton - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSimplifiedTitle;                                                  //@synthesize shouldUseSimplifiedTitle=_shouldUseSimplifiedTitle - In the implementation block
@property (nonatomic,retain) LPPhoneNumber * phoneNumber; 
@property (assign,nonatomic,__weak) id<MNEnterPhoneViewDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL inProgress;                                                                //@synthesize inProgress=_inProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mn_setTopContentInset:(double)arg1 ;
-(id)_getContinueButtonCell;
-(void)formHeaderViewHideKeyboardButtonTapped:(id)arg1 ;
-(void)_updateHeaderLabels;
-(void)_skipThisStepPressed;
-(id)_getCountrySelectCell;
-(id)_getPhoneNumberCell;
-(void)_updateCountryCodeCell;
-(void)_onPhoneNumberChange;
-(void)_countrySelectButtonPressed;
-(void)_continueButtonPressed;
-(void)_onPhoneNumberTextFieldChange;
-(void)_setContinueButtonEnabled:(BOOL)arg1 ;
-(void)phoneNumberTextFieldController:(id)arg1 didChangeCountryTo:(id)arg2 ;
-(id)initWithCustomContent:(id)arg1 type:(unsigned long long)arg2 searchPrivacyOption:(unsigned long long)arg3 phoneNumberPrivacyOption:(long long)arg4 shouldUseBigBlueButton:(BOOL)arg5 shouldUseSimplifiedTitle:(BOOL)arg6 ;
-(void)updateHeaderTextForSearchPrivacyOption:(unsigned long long)arg1 ;
-(MNFormView *)formView;
-(void)setFormView:(MNFormView *)arg1 ;
-(MNFormFieldTextFieldCell *)phoneNumberFieldCell;
-(void)setPhoneNumberFieldCell:(MNFormFieldTextFieldCell *)arg1 ;
-(MNFormFieldTextFieldCell *)countrySelectCell;
-(void)setCountrySelectCell:(MNFormFieldTextFieldCell *)arg1 ;
-(UITableViewCell *)continueButtonCell;
-(void)setContinueButtonCell:(UITableViewCell *)arg1 ;
-(MNButton *)continueButton;
-(void)setContinueButton:(MNButton *)arg1 ;
-(LPPhoneNumberMetadata *)phoneNumberMetadata;
-(void)setPhoneNumberMetadata:(LPPhoneNumberMetadata *)arg1 ;
-(LPPhoneNumberFactory *)phoneNumberFactory;
-(void)setPhoneNumberFactory:(LPPhoneNumberFactory *)arg1 ;
-(unsigned long long)searchPrivacyOption;
-(void)setSearchPrivacyOption:(unsigned long long)arg1 ;
-(long long)phoneViewState;
-(void)setPhoneViewState:(long long)arg1 ;
-(MNPhoneNumberTextFieldController *)phoneNumberTextFieldController;
-(void)setPhoneNumberTextFieldController:(MNPhoneNumberTextFieldController *)arg1 ;
-(MNPhoneVerificationCustomContent *)customContent;
-(void)setCustomContent:(MNPhoneVerificationCustomContent *)arg1 ;
-(BOOL)shouldUseBigBlueButton;
-(void)setShouldUseBigBlueButton:(BOOL)arg1 ;
-(BOOL)shouldUseSimplifiedTitle;
-(void)setShouldUseSimplifiedTitle:(BOOL)arg1 ;
-(void)setDelegate:(id<MNEnterPhoneViewDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)layoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MNEnterPhoneViewDelegate>)delegate;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(MNPhoneVerificationHeaderView *)headerView;
-(void)setHeaderView:(MNPhoneVerificationHeaderView *)arg1 ;
-(void)showKeyboard;
-(void)hideKeyboard;
-(LPPhoneNumber *)phoneNumber;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(MNLoadingIndicator *)activityIndicator;
-(void)setActivityIndicator:(MNLoadingIndicator *)arg1 ;
-(NSString *)isoCountryCode;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)_updateLoadingIndicator;
-(void)setPhoneNumber:(LPPhoneNumber *)arg1 ;
-(void)setSkipButton:(UIButton *)arg1 ;
-(UIButton *)skipButton;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
@end
