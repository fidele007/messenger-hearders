/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPeoplePickerViewControllerDelegate <NSObject>
@optional
-(void)peoplePicker:(id)arg1 didChangePickedContacts:(id)arg2;
-(void)peoplePicker:(id)arg1 didPickGroupContact:(id)arg2;
-(void)peoplePicker:(id)arg1 didPickContact:(id)arg2;
-(void)peoplePickerDidShowSearchResults:(id)arg1;
-(void)peoplePickerDidHideSearchResults:(id)arg1;
-(void)peoplePickerTokenFieldWillBecomeResponder:(id)arg1;
-(void)peoplePickerTokenFieldWillResignFirstResponder:(id)arg1;
-(void)peoplePicker:(id)arg1 didFetchSections:(id)arg2;
-(void)peoplePickerTokenFieldDidResize:(id)arg1;

@required
-(id)analyticsModuleForPeoplePicker:(id)arg1;
-(BOOL)peoplePicker:(id)arg1 shouldSelectContact:(id)arg2;
-(void)peoplePicker:(id)arg1 didTapContact:(id)arg2;

@end

