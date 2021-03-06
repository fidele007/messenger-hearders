/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGenericThread.h>

@class NSString, NSArray, FBMImageUrlCollection, NSNumber, NSMutableDictionary;

@interface FBSyncGroupConversation : NSObject <FBGenericThread> {

	NSString* _FBID;
	NSString* _name;
	NSNumber* _favoriteRank;
	NSNumber* _timestamp;
	NSMutableDictionary* _participants;
	NSString* _picHash;
	NSString* _picUrl;
	FBMImageUrlCollection* _imageUrls;

}

@property (nonatomic,copy) NSString * FBID;                                         //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSNumber * favoriteRank;                               //@synthesize favoriteRank=_favoriteRank - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * participants;                    //@synthesize participants=_participants - In the implementation block
@property (nonatomic,copy) NSString * picHash;                                      //@synthesize picHash=_picHash - In the implementation block
@property (nonatomic,copy) NSString * picUrl;                                       //@synthesize picUrl=_picUrl - In the implementation block
@property (nonatomic,copy) FBMImageUrlCollection * imageUrls;                       //@synthesize imageUrls=_imageUrls - In the implementation block
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
-(NSString *)genericThreadFbId;
-(BOOL)genericThreadHasCustomName;
-(NSString *)genericThreadPicHash;
-(NSString *)FBID;
-(NSArray *)genericThreadParticipants;
-(FBMImageUrlCollection *)imageUrls;
-(NSString *)nonNilFirstNameForSort;
-(NSString *)nonNilLastNameForSort;
-(NSString *)contactFBID;
-(NSNumber *)favoriteRank;
-(BOOL)contactIsGroupConversation;
-(NSNumber *)contactFavoriteRank;
-(NSString *)firstNameForSort;
-(NSString *)lastNameForSort;
-(BOOL)contactIsEmailOnly;
-(BOOL)contactHasMessenger;
-(BOOL)contactIsMobilePushable;
-(BOOL)contactIsMemorialized;
-(NSString *)picHash;
-(void)setImageUrls:(FBMImageUrlCollection *)arg1 ;
-(id)groupConversationFBID;
-(id)groupConversationName;
-(void)setFBID:(NSString *)arg1 ;
-(void)setFavoriteRank:(NSNumber *)arg1 ;
-(void)setPicHash:(NSString *)arg1 ;
-(NSString *)picUrl;
-(void)setPicUrl:(NSString *)arg1 ;
-(NSString *)description;
-(NSNumber *)timestamp;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(NSString *)contactName;
-(void)setParticipants:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)participants;
@end

