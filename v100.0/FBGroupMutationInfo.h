/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBMemIcon, UIImage, FBMemGroup, NSArray, FBMemGroupPurpose;

@interface FBGroupMutationInfo : NSObject {

	NSString* fbid;
	NSString* name;
	NSString* description;
	FBMemIcon* icon;
	UIImage* coverPhoto;
	UIImage* uncroppedCoverPhoto;
	NSString* privacySetting;
	FBMemGroup* parentGroup;
	NSArray* selectedMembers;
	FBMemGroupPurpose* groupPurpose;
	NSString* pageID;
	NSString* pageName;
	NSString* _coverPhotoSearchServiceProvider;
	NSString* _coverPhotoSearchResultId;
	NSArray* _selectedEmails;

}

@property (nonatomic,copy) NSString * fbid; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) FBMemIcon * icon; 
@property (nonatomic,copy) UIImage * coverPhoto; 
@property (nonatomic,copy) UIImage * uncroppedCoverPhoto; 
@property (nonatomic,copy) NSString * coverPhotoSearchServiceProvider;              //@synthesize coverPhotoSearchServiceProvider=_coverPhotoSearchServiceProvider - In the implementation block
@property (nonatomic,copy) NSString * coverPhotoSearchResultId;                     //@synthesize coverPhotoSearchResultId=_coverPhotoSearchResultId - In the implementation block
@property (nonatomic,copy) NSString * privacySetting; 
@property (nonatomic,copy) FBMemGroup * parentGroup; 
@property (nonatomic,copy) NSString * pageID; 
@property (nonatomic,copy) NSString * pageName; 
@property (nonatomic,copy) FBMemGroupPurpose * groupPurpose; 
@property (nonatomic,copy) NSArray * selectedMembers; 
@property (nonatomic,copy) NSArray * selectedEmails;                                //@synthesize selectedEmails=_selectedEmails - In the implementation block
-(void)setFbid:(NSString *)arg1 ;
-(NSString *)fbid;
-(UIImage *)coverPhoto;
-(NSString *)pageName;
-(UIImage *)uncroppedCoverPhoto;
-(void)setUncroppedCoverPhoto:(UIImage *)arg1 ;
-(NSArray *)selectedMembers;
-(void)setSelectedMembers:(NSArray *)arg1 ;
-(FBMemGroupPurpose *)groupPurpose;
-(void)setGroupPurpose:(FBMemGroupPurpose *)arg1 ;
-(void)setPageName:(NSString *)arg1 ;
-(NSString *)coverPhotoSearchServiceProvider;
-(void)setCoverPhotoSearchServiceProvider:(NSString *)arg1 ;
-(NSString *)coverPhotoSearchResultId;
-(void)setCoverPhotoSearchResultId:(NSString *)arg1 ;
-(NSArray *)selectedEmails;
-(void)setSelectedEmails:(NSArray *)arg1 ;
-(void)setCoverPhoto:(UIImage *)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setIcon:(FBMemIcon *)arg1 ;
-(FBMemIcon *)icon;
-(void)setDescription:(NSString *)arg1 ;
-(void)setParentGroup:(FBMemGroup *)arg1 ;
-(FBMemGroup *)parentGroup;
-(void)setPageID:(NSString *)arg1 ;
-(NSString *)pageID;
-(NSString *)privacySetting;
-(void)setPrivacySetting:(NSString *)arg1 ;
@end

