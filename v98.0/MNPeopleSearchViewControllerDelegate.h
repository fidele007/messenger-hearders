/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPeopleSearchViewControllerDelegate <NSObject>
@required
-(BOOL)peopleSearchViewControllerShouldIncludeGroup:(id)arg1;
-(BOOL)peopleSearchViewControllerShouldIncludeAddressBookContacts:(id)arg1;
-(long long)peopleSearchViewControllerPageFilterRule:(id)arg1;
-(BOOL)peopleSearchViewControllerShouldIncludeBlendedResults:(id)arg1;
-(BOOL)peopleSearchViewControllerShouldIncludeNicknameResults:(id)arg1;
-(BOOL)peopleSearchViewControllerShouldSearchServer:(id)arg1;
-(id)searchTextForPeopleSearchViewController:(id)arg1;
-(id)pickedUserIdsForPeopleSearchViewController:(id)arg1;
-(void)peopleSearchViewControllerDidFinishSearch:(id)arg1;
-(BOOL)peopleSearchViewController:(id)arg1 shouldShowResult:(id)arg2;
-(BOOL)peopleSearchViewController:(id)arg1 shouldSelectResultWhenTapped:(id)arg2;
-(void)peopleSearchViewController:(id)arg1 didSelectResult:(id)arg2 withAnalyticsExtras:(id)arg3;
-(void)peopleSearchViewController:(id)arg1 didTapActionButtonForContact:(id)arg2;
-(unsigned long long)surfaceForPeopleSearchView;

@end

