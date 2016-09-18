/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBDialogsParams.h>

@class NSURL, NSString, NSArray;

@interface FBLinkShareParams : FBDialogsParams {

	BOOL _dataFailuresFatal;
	NSURL* _link;
	NSString* _name;
	NSString* _caption;
	NSString* _linkDescription;
	NSURL* _picture;
	NSArray* _friends;
	id _place;
	NSString* _ref;

}

@property (nonatomic,copy) NSURL * link;                            //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * caption;                      //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString * linkDescription;              //@synthesize linkDescription=_linkDescription - In the implementation block
@property (nonatomic,copy) NSURL * picture;                         //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSArray * friends;                       //@synthesize friends=_friends - In the implementation block
@property (nonatomic,copy) id place;                                //@synthesize place=_place - In the implementation block
@property (nonatomic,copy) NSString * ref;                          //@synthesize ref=_ref - In the implementation block
@property (assign,nonatomic) BOOL dataFailuresFatal;                //@synthesize dataFailuresFatal=_dataFailuresFatal - In the implementation block
+(id)methodName;
-(NSString *)linkDescription;
-(void)setLinkDescription:(NSString *)arg1 ;
-(id)initWithLink:(id)arg1 name:(id)arg2 caption:(id)arg3 description:(id)arg4 picture:(id)arg5 ;
-(id)dictionaryMethodArgs;
-(BOOL)dataFailuresFatal;
-(void)setDataFailuresFatal:(BOOL)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)validate;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(id)place;
-(void)setPlace:(id)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
-(void)setFriends:(NSArray *)arg1 ;
-(NSURL *)picture;
-(void)setPicture:(NSURL *)arg1 ;
-(NSArray *)friends;
@end
