/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNPeoplePickerConfiguration, NSString, NSArray, MNMultiPeoplePickerSuggestionsFilteringConfiguration;

@interface MNMultiPeoplePickerConfiguration : FBValueObject <NSCopying> {

	BOOL _searchBarHidden;
	BOOL _bottomBarHidden;
	BOOL _showSearchNavBarButton;
	MNPeoplePickerConfiguration* _peoplePickerConfiguration;
	NSString* _sendButtonTitle;
	NSArray* _selectionSummaryBarExcludedContacts;
	MNMultiPeoplePickerSuggestionsFilteringConfiguration* _suggestionsFilteringConfiguration;
	NSArray* _peopleSuggestionsListeners;

}

@property (nonatomic,copy,readonly) MNPeoplePickerConfiguration * peoplePickerConfiguration;                                               //@synthesize peoplePickerConfiguration=_peoplePickerConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL searchBarHidden;                                                                                       //@synthesize searchBarHidden=_searchBarHidden - In the implementation block
@property (nonatomic,readonly) BOOL bottomBarHidden;                                                                                       //@synthesize bottomBarHidden=_bottomBarHidden - In the implementation block
@property (nonatomic,copy,readonly) NSString * sendButtonTitle;                                                                            //@synthesize sendButtonTitle=_sendButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectionSummaryBarExcludedContacts;                                                         //@synthesize selectionSummaryBarExcludedContacts=_selectionSummaryBarExcludedContacts - In the implementation block
@property (nonatomic,readonly) BOOL showSearchNavBarButton;                                                                                //@synthesize showSearchNavBarButton=_showSearchNavBarButton - In the implementation block
@property (nonatomic,copy,readonly) MNMultiPeoplePickerSuggestionsFilteringConfiguration * suggestionsFilteringConfiguration;              //@synthesize suggestionsFilteringConfiguration=_suggestionsFilteringConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * peopleSuggestionsListeners;                                                                  //@synthesize peopleSuggestionsListeners=_peopleSuggestionsListeners - In the implementation block
-(id)initWithPeoplePickerConfiguration:(id)arg1 searchBarHidden:(BOOL)arg2 bottomBarHidden:(BOOL)arg3 sendButtonTitle:(id)arg4 selectionSummaryBarExcludedContacts:(id)arg5 showSearchNavBarButton:(BOOL)arg6 suggestionsFilteringConfiguration:(id)arg7 peopleSuggestionsListeners:(id)arg8 ;
-(MNPeoplePickerConfiguration *)peoplePickerConfiguration;
-(NSString *)sendButtonTitle;
-(BOOL)searchBarHidden;
-(BOOL)bottomBarHidden;
-(NSArray *)selectionSummaryBarExcludedContacts;
-(BOOL)showSearchNavBarButton;
-(MNMultiPeoplePickerSuggestionsFilteringConfiguration *)suggestionsFilteringConfiguration;
-(NSArray *)peopleSuggestionsListeners;
@end

