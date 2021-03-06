/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, MNSettingsTabAccountSwitchingConfiguration, MNContactSettingsConfiguration, MNSettingsTabNameConfiguration;

@interface MNSettingsTabConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldShowPeopleRow;
	BOOL _shouldShowHelpRow;
	BOOL _shouldShowMontageRow;
	BOOL _shouldShowGameRow;
	BOOL _shouldShowMessengerCode;
	BOOL _shouldShowUsername;
	BOOL _canEditUsername;
	BOOL _shouldShowPhoneNumber;
	BOOL _shouldShowPhoneNumberOptions;
	BOOL _shouldShowSecretConversationRow;
	BOOL _shouldShowMAIRow;
	BOOL _shouldShowAlohaRow;
	BOOL _prioritizeMessengerCode;
	BOOL _allowsProfileEditing;
	BOOL _shouldShowFamilyNavigationSection;
	NSURL* _helpURL;
	MNSettingsTabAccountSwitchingConfiguration* _accountSwitchingConfiguration;
	MNContactSettingsConfiguration* _contactSettingsConfiguration;
	MNSettingsTabNameConfiguration* _settingsTabNameConfiguration;

}

@property (nonatomic,readonly) BOOL shouldShowPeopleRow;                                                                     //@synthesize shouldShowPeopleRow=_shouldShowPeopleRow - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowHelpRow;                                                                       //@synthesize shouldShowHelpRow=_shouldShowHelpRow - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMontageRow;                                                                    //@synthesize shouldShowMontageRow=_shouldShowMontageRow - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowGameRow;                                                                       //@synthesize shouldShowGameRow=_shouldShowGameRow - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMessengerCode;                                                                 //@synthesize shouldShowMessengerCode=_shouldShowMessengerCode - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowUsername;                                                                      //@synthesize shouldShowUsername=_shouldShowUsername - In the implementation block
@property (nonatomic,readonly) BOOL canEditUsername;                                                                         //@synthesize canEditUsername=_canEditUsername - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPhoneNumber;                                                                   //@synthesize shouldShowPhoneNumber=_shouldShowPhoneNumber - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPhoneNumberOptions;                                                            //@synthesize shouldShowPhoneNumberOptions=_shouldShowPhoneNumberOptions - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSecretConversationRow;                                                         //@synthesize shouldShowSecretConversationRow=_shouldShowSecretConversationRow - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMAIRow;                                                                        //@synthesize shouldShowMAIRow=_shouldShowMAIRow - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowAlohaRow;                                                                      //@synthesize shouldShowAlohaRow=_shouldShowAlohaRow - In the implementation block
@property (nonatomic,readonly) BOOL prioritizeMessengerCode;                                                                 //@synthesize prioritizeMessengerCode=_prioritizeMessengerCode - In the implementation block
@property (nonatomic,copy,readonly) NSURL * helpURL;                                                                         //@synthesize helpURL=_helpURL - In the implementation block
@property (nonatomic,readonly) BOOL allowsProfileEditing;                                                                    //@synthesize allowsProfileEditing=_allowsProfileEditing - In the implementation block
@property (nonatomic,copy,readonly) MNSettingsTabAccountSwitchingConfiguration * accountSwitchingConfiguration;              //@synthesize accountSwitchingConfiguration=_accountSwitchingConfiguration - In the implementation block
@property (nonatomic,copy,readonly) MNContactSettingsConfiguration * contactSettingsConfiguration;                           //@synthesize contactSettingsConfiguration=_contactSettingsConfiguration - In the implementation block
@property (nonatomic,copy,readonly) MNSettingsTabNameConfiguration * settingsTabNameConfiguration;                           //@synthesize settingsTabNameConfiguration=_settingsTabNameConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowFamilyNavigationSection;                                                       //@synthesize shouldShowFamilyNavigationSection=_shouldShowFamilyNavigationSection - In the implementation block
-(id)initWithShouldShowPeopleRow:(BOOL)arg1 shouldShowHelpRow:(BOOL)arg2 shouldShowMontageRow:(BOOL)arg3 shouldShowGameRow:(BOOL)arg4 shouldShowMessengerCode:(BOOL)arg5 shouldShowUsername:(BOOL)arg6 canEditUsername:(BOOL)arg7 shouldShowPhoneNumber:(BOOL)arg8 shouldShowPhoneNumberOptions:(BOOL)arg9 shouldShowSecretConversationRow:(BOOL)arg10 shouldShowMAIRow:(BOOL)arg11 shouldShowAlohaRow:(BOOL)arg12 prioritizeMessengerCode:(BOOL)arg13 helpURL:(id)arg14 allowsProfileEditing:(BOOL)arg15 accountSwitchingConfiguration:(id)arg16 contactSettingsConfiguration:(id)arg17 settingsTabNameConfiguration:(id)arg18 shouldShowFamilyNavigationSection:(BOOL)arg19 ;
-(BOOL)shouldShowPeopleRow;
-(BOOL)shouldShowHelpRow;
-(BOOL)shouldShowMontageRow;
-(BOOL)shouldShowGameRow;
-(BOOL)shouldShowMessengerCode;
-(BOOL)shouldShowUsername;
-(BOOL)canEditUsername;
-(BOOL)shouldShowPhoneNumber;
-(BOOL)shouldShowPhoneNumberOptions;
-(BOOL)shouldShowSecretConversationRow;
-(BOOL)shouldShowMAIRow;
-(BOOL)shouldShowAlohaRow;
-(BOOL)prioritizeMessengerCode;
-(BOOL)allowsProfileEditing;
-(MNSettingsTabAccountSwitchingConfiguration *)accountSwitchingConfiguration;
-(MNContactSettingsConfiguration *)contactSettingsConfiguration;
-(MNSettingsTabNameConfiguration *)settingsTabNameConfiguration;
-(BOOL)shouldShowFamilyNavigationSection;
-(NSURL *)helpURL;
@end

