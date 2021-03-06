/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBGenericThread.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBStringWithRedactedDescription, FBMImageUrlCollection, NSArray, NSNumber;

@interface MNConversationGroup : FBValueObject <FBGenericThread, NSCopying> {

	NSString* _fbId;
	FBStringWithRedactedDescription* _customName;
	NSString* _picHash;
	FBMImageUrlCollection* _imageUrls;
	NSArray* _conversationGroupParticipants;
	unsigned long long _statusForViewer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * contactFBID; 
@property (nonatomic,readonly) BOOL contactIsGroupConversation; 
@property (nonatomic,readonly) NSNumber * contactFavoriteRank; 
@property (nonatomic,copy,readonly) NSString * contactName; 
@property (nonatomic,readonly) BOOL contactIsEmailOnly; 
@property (nonatomic,readonly) BOOL contactHasMessenger; 
@property (nonatomic,readonly) BOOL contactIsMobilePushable; 
@property (nonatomic,copy,readonly) FBMImageUrlCollection * imageUrls; 
@property (nonatomic,copy,readonly) NSString * firstNameForSort; 
@property (nonatomic,copy,readonly) NSString * lastNameForSort; 
@property (nonatomic,copy,readonly) NSString * nonNilFirstNameForSort; 
@property (nonatomic,copy,readonly) NSString * nonNilLastNameForSort; 
@property (nonatomic,readonly) BOOL contactIsMemorialized; 
@property (nonatomic,copy,readonly) NSString * email; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,copy,readonly) NSString * genericThreadFbId; 
@property (nonatomic,readonly) NSArray * genericThreadParticipants; 
@property (nonatomic,readonly) BOOL genericThreadHasCustomName; 
@property (nonatomic,copy,readonly) NSString * genericThreadPicHash; 
@property (nonatomic,copy,readonly) NSString * fbId;                                           //@synthesize fbId=_fbId - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * customName;              //@synthesize customName=_customName - In the implementation block
@property (nonatomic,copy,readonly) NSString * picHash;                                        //@synthesize picHash=_picHash - In the implementation block
@property (nonatomic,copy,readonly) FBMImageUrlCollection * imageUrls;                         //@synthesize imageUrls=_imageUrls - In the implementation block
@property (nonatomic,copy,readonly) NSArray * conversationGroupParticipants;                   //@synthesize conversationGroupParticipants=_conversationGroupParticipants - In the implementation block
@property (nonatomic,readonly) unsigned long long statusForViewer;                             //@synthesize statusForViewer=_statusForViewer - In the implementation block
-(NSString *)genericThreadFbId;
-(BOOL)genericThreadHasCustomName;
-(NSString *)genericThreadPicHash;
-(NSString *)fbId;
-(unsigned long long)statusForViewer;
-(NSArray *)conversationGroupParticipants;
-(id)initWithFbId:(id)arg1 customName:(id)arg2 picHash:(id)arg3 imageUrls:(id)arg4 conversationGroupParticipants:(id)arg5 statusForViewer:(unsigned long long)arg6 ;
-(NSArray *)genericThreadParticipants;
-(FBMImageUrlCollection *)imageUrls;
-(NSString *)nonNilFirstNameForSort;
-(NSString *)nonNilLastNameForSort;
-(NSString *)contactFBID;
-(BOOL)contactIsGroupConversation;
-(NSNumber *)contactFavoriteRank;
-(NSString *)firstNameForSort;
-(NSString *)lastNameForSort;
-(BOOL)contactIsEmailOnly;
-(BOOL)contactHasMessenger;
-(BOOL)contactIsMobilePushable;
-(BOOL)contactIsMemorialized;
-(NSString *)picHash;
-(NSString *)contactName;
-(NSString *)firstName;
-(NSString *)lastName;
-(FBStringWithRedactedDescription *)customName;
@end

