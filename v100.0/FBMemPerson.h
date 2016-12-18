/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWildeMemModelObject.h>
#import <Messenger/FBRichStoryEntityActorProtocol.h>
#import <Messenger/FBAvatarProtocol.h>
#import <Messenger/FBQueriedProfileFieldsProtocol.h>
#import <Messenger/FBQueriedActorFieldsProtocol.h>
#import <Messenger/FBQueriedCanShareBackstageFieldsProtocol.h>
#import <Messenger/FBQueriedEntityFieldsProtocol.h>
#import <Messenger/FBQueriedFriendNodeFieldsProtocol.h>
#import <Messenger/FBQueriedFundraiserBeneficiaryFieldsProtocol.h>
#import <Messenger/FBQueriedIUserFieldsProtocol.h>
#import <Messenger/FBQueriedMessagingActorFieldsProtocol.h>
#import <Messenger/FBQueriedNodeFieldsProtocol.h>
#import <Messenger/FBQueriedPayProfileFieldsProtocol.h>
#import <Messenger/FBQueriedPrivacyAudienceMemberFieldsProtocol.h>
#import <Messenger/FBQueriedProfileFieldsProtocol.h>
#import <Messenger/FBQueriedSavableFieldsProtocol.h>
#import <Messenger/FBQueriedSearchCombinedResultFieldsProtocol.h>
#import <Messenger/FBQueriedSearchResultFieldsProtocol.h>
#import <Messenger/FBQueriedSearchableFieldsProtocol.h>
#import <Messenger/FBQueriedSuggestedRecipientsAttachmentFieldsProtocol.h>
#import <Messenger/FBQueriedVideoChannelCreatorFieldsProtocol.h>
#import <Messenger/FBQueriedVideoChannelFieldsProtocol.h>

@class NSString;

@interface FBMemPerson : FBWildeMemModelObject <FBRichStoryEntityActorProtocol, FBAvatarProtocol, FBQueriedProfileFieldsProtocol, FBQueriedActorFieldsProtocol, FBQueriedCanShareBackstageFieldsProtocol, FBQueriedEntityFieldsProtocol, FBQueriedFriendNodeFieldsProtocol, FBQueriedFundraiserBeneficiaryFieldsProtocol, FBQueriedIUserFieldsProtocol, FBQueriedMessagingActorFieldsProtocol, FBQueriedNodeFieldsProtocol, FBQueriedPayProfileFieldsProtocol, FBQueriedPrivacyAudienceMemberFieldsProtocol, FBQueriedProfileFieldsProtocol, FBQueriedSavableFieldsProtocol, FBQueriedSearchCombinedResultFieldsProtocol, FBQueriedSearchResultFieldsProtocol, FBQueriedSearchableFieldsProtocol, FBQueriedSuggestedRecipientsAttachmentFieldsProtocol, FBQueriedVideoChannelCreatorFieldsProtocol, FBQueriedVideoChannelFieldsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)graphQLTypeName;
-(char)isPymmHiddenValue;
-(id)isPymmHidden;
-(id)graphQLID;
-(id)entityURL;
-(id)firstNameForSort;
-(id)lastNameForSort;
-(id)tokenText;
-(id)tokenImage;
-(id)tokenImageSelected;
-(id)cellPhoneNumber;
-(id)otherPhoneNumber;
-(id)bylinesExcludingPrompts;
-(id)bioTextString;
-(id)infoRequestFieldWithType:(id)arg1 ;
-(id)phoneURL;
-(id)fullName;
@end

