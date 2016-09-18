/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSuggestedContactsRetrieverDelegate.h>
#import <Messenger/MNSuggestedContactsRetriever.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNSuggestedContactsRetriever, MNSuggestedContactsRetrieverDelegate;
@class NSString;

@interface MNInviteListSelectableContactsRetriever : NSObject <MNSuggestedContactsRetrieverDelegate, MNSuggestedContactsRetriever, FBClassProvidable> {

	id<FBProvider> _inviteListContactsRetrieverProvider;
	id<FBProvider> _inviteListAddressBookContactsRetrieverProvider;
	id<MNSuggestedContactsRetriever> _selectedSuggestedContactsRetriever;
	id<MNSuggestedContactsRetrieverDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSuggestedContactsRetrieverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)suggestedContactsRetriever:(id)arg1 didRetrieveSuggestedContactsInSections:(id)arg2 sectionTitles:(id)arg3 sectionIndexTitles:(id)arg4 preselectedContacts:(id)arg5 ;
-(void)startRetrievingSuggestedContacts;
-(void)stopRetrievingSuggestedContacts;
-(id)initWithInviteListContactsRetrieverProvider:(id)arg1 inviteListAddressBookContactsRetrieverProvider:(id)arg2 ;
-(id)_suggestedContactsRetrieverWithInviteContactsType:(unsigned long long)arg1 ;
-(void)resetWithInviteListContactsRetrieverForInviteContactsType:(unsigned long long)arg1 ;
-(void)setDelegate:(id<MNSuggestedContactsRetrieverDelegate>)arg1 ;
-(id<MNSuggestedContactsRetrieverDelegate>)delegate;
@end

