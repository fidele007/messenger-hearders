/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMUserName, NSNumber, NSDate, MNImportedContact, MNConversationPersonTypeProperties;

@interface MNConversationPerson : FBValueObject <NSCopying> {

	BOOL _profilePictureIsSilhouette;
	BOOL _isBlockedByViewer;
	BOOL _acceptsMessagesFromViewer;
	BOOL _canSeeViewerMontage;
	NSString* _userId;
	FBMUserName* _name;
	FBMUserName* _phoneticName;
	NSString* _username;
	NSString* _profilePicHash;
	NSNumber* _favoriteRank;
	NSDate* _timePersonWasAddedAsContact;
	double _communicationRank;
	MNImportedContact* _importedContact;
	NSString* _contextString;
	double _phatRank;
	double _messengerInvitePriority;
	unsigned long long _isPaymentEligible;
	MNConversationPersonTypeProperties* _typeProperties;
	double _activeNowRank;

}

@property (nonatomic,copy,readonly) NSString * userId;                                                //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) FBMUserName * name;                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) FBMUserName * phoneticName;                                       //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                                              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * profilePicHash;                                        //@synthesize profilePicHash=_profilePicHash - In the implementation block
@property (nonatomic,readonly) BOOL profilePictureIsSilhouette;                                       //@synthesize profilePictureIsSilhouette=_profilePictureIsSilhouette - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * favoriteRank;                                          //@synthesize favoriteRank=_favoriteRank - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timePersonWasAddedAsContact;                             //@synthesize timePersonWasAddedAsContact=_timePersonWasAddedAsContact - In the implementation block
@property (nonatomic,readonly) double communicationRank;                                              //@synthesize communicationRank=_communicationRank - In the implementation block
@property (nonatomic,copy,readonly) MNImportedContact * importedContact;                              //@synthesize importedContact=_importedContact - In the implementation block
@property (nonatomic,readonly) BOOL isBlockedByViewer;                                                //@synthesize isBlockedByViewer=_isBlockedByViewer - In the implementation block
@property (nonatomic,readonly) BOOL acceptsMessagesFromViewer;                                        //@synthesize acceptsMessagesFromViewer=_acceptsMessagesFromViewer - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextString;                                         //@synthesize contextString=_contextString - In the implementation block
@property (nonatomic,readonly) double phatRank;                                                       //@synthesize phatRank=_phatRank - In the implementation block
@property (nonatomic,readonly) double messengerInvitePriority;                                        //@synthesize messengerInvitePriority=_messengerInvitePriority - In the implementation block
@property (nonatomic,readonly) BOOL canSeeViewerMontage;                                              //@synthesize canSeeViewerMontage=_canSeeViewerMontage - In the implementation block
@property (nonatomic,readonly) unsigned long long isPaymentEligible;                                  //@synthesize isPaymentEligible=_isPaymentEligible - In the implementation block
@property (nonatomic,copy,readonly) MNConversationPersonTypeProperties * typeProperties;              //@synthesize typeProperties=_typeProperties - In the implementation block
@property (nonatomic,readonly) double activeNowRank;                                                  //@synthesize activeNowRank=_activeNowRank - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(MNConversationPersonTypeProperties *)typeProperties;
-(MNImportedContact *)importedContact;
-(id)initWithUserId:(id)arg1 name:(id)arg2 phoneticName:(id)arg3 username:(id)arg4 profilePicHash:(id)arg5 profilePictureIsSilhouette:(BOOL)arg6 favoriteRank:(id)arg7 timePersonWasAddedAsContact:(id)arg8 communicationRank:(double)arg9 importedContact:(id)arg10 isBlockedByViewer:(BOOL)arg11 acceptsMessagesFromViewer:(BOOL)arg12 contextString:(id)arg13 phatRank:(double)arg14 messengerInvitePriority:(double)arg15 canSeeViewerMontage:(BOOL)arg16 isPaymentEligible:(unsigned long long)arg17 typeProperties:(id)arg18 activeNowRank:(double)arg19 ;
-(NSString *)profilePicHash;
-(BOOL)profilePictureIsSilhouette;
-(double)communicationRank;
-(unsigned long long)isPaymentEligible;
-(double)messengerInvitePriority;
-(BOOL)acceptsMessagesFromViewer;
-(BOOL)isBlockedByViewer;
-(double)phatRank;
-(BOOL)canSeeViewerMontage;
-(NSNumber *)favoriteRank;
-(NSDate *)timePersonWasAddedAsContact;
-(double)activeNowRank;
-(FBMUserName *)name;
-(FBMUserName *)phoneticName;
-(NSString *)contextString;
-(NSString *)username;
-(NSString *)userId;
@end

