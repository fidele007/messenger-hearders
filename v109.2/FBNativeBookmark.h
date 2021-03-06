/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMenuItem.h>

@class NSNumber, NSString, NSURL, FBMemModelObject;

@interface FBNativeBookmark : NSObject <FBMenuItem> {

	NSURL* _url;
	NSNumber* _badgeCount;
	NSString* _highlightType;
	NSString* _displayName;
	NSString* _bookmarkID;
	NSString* _typeAttribute;
	NSString* _staticIconName;
	NSURL* _imageURL;
	FBMemModelObject* _representedNode;
	NSString* _subtitleName;

}

@property (nonatomic,copy) NSString * subtitleName;                           //@synthesize subtitleName=_subtitleName - In the implementation block
@property (nonatomic,copy) NSString * displayName;                            //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * bookmarkID;                             //@synthesize bookmarkID=_bookmarkID - In the implementation block
@property (nonatomic,copy) NSString * typeAttribute;                          //@synthesize typeAttribute=_typeAttribute - In the implementation block
@property (nonatomic,copy) NSString * staticIconName;                         //@synthesize staticIconName=_staticIconName - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                                  //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) FBMemModelObject * representedNode;              //@synthesize representedNode=_representedNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSNumber * badgeCount;                           //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * highlightType;                 //@synthesize highlightType=_highlightType - In the implementation block
-(NSString *)subtitleName;
-(NSString *)highlightType;
-(id)initWithDisplayName:(id)arg1 url:(id)arg2 ;
-(NSString *)staticIconName;
-(void)setStaticIconName:(NSString *)arg1 ;
-(FBMemModelObject *)representedNode;
-(void)setRepresentedNode:(FBMemModelObject *)arg1 ;
-(void)setSubtitleName:(NSString *)arg1 ;
-(NSString *)description;
-(NSURL *)url;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setBookmarkID:(NSString *)arg1 ;
-(NSString *)bookmarkID;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(void)setTypeAttribute:(NSString *)arg1 ;
-(NSString *)typeAttribute;
-(void)setBadgeCount:(NSNumber *)arg1 ;
-(NSNumber *)badgeCount;
@end

