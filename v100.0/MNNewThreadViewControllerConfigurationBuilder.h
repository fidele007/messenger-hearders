/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface MNNewThreadViewControllerConfigurationBuilder : NSObject {

	NSArray* _pickedContacts;
	NSArray* _hoistedUserIds;
	NSString* _initialComposerExtensionIdentifier;
	BOOL _disableSuggestions;
	BOOL _initialFlowersBorderModeEnabled;

}
+(id)newThreadViewControllerConfiguration;
+(id)newThreadViewControllerConfigurationFromExistingNewThreadViewControllerConfiguration:(id)arg1 ;
-(id)withInitialFlowersBorderModeEnabled:(BOOL)arg1 ;
-(id)withHoistedUserIds:(id)arg1 ;
-(id)withPickedContacts:(id)arg1 ;
-(id)withInitialComposerExtensionIdentifier:(id)arg1 ;
-(id)withDisableSuggestions:(BOOL)arg1 ;
-(id)build;
@end
