/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBLinkPublishInformation : FBValueObject <NSCopying, NSCoding> {

	BOOL _allowLinkScraperToDefineSharedLinkImage;
	BOOL _isFromOriginalStory;
	NSString* _caption;
	NSString* _imageUrl;
	NSString* _linkDescription;
	NSString* _name;
	NSString* _url;
	NSString* _quote;

}

@property (nonatomic,copy,readonly) NSString * caption;                                   //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageUrl;                                  //@synthesize imageUrl=_imageUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * linkDescription;                           //@synthesize linkDescription=_linkDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * quote;                                     //@synthesize quote=_quote - In the implementation block
@property (nonatomic,readonly) BOOL allowLinkScraperToDefineSharedLinkImage;              //@synthesize allowLinkScraperToDefineSharedLinkImage=_allowLinkScraperToDefineSharedLinkImage - In the implementation block
@property (nonatomic,readonly) BOOL isFromOriginalStory;                                  //@synthesize isFromOriginalStory=_isFromOriginalStory - In the implementation block
-(NSString *)imageUrl;
-(id)initWithCaption:(id)arg1 imageUrl:(id)arg2 linkDescription:(id)arg3 name:(id)arg4 url:(id)arg5 quote:(id)arg6 allowLinkScraperToDefineSharedLinkImage:(BOOL)arg7 isFromOriginalStory:(BOOL)arg8 ;
-(NSString *)linkDescription;
-(BOOL)allowLinkScraperToDefineSharedLinkImage;
-(BOOL)isFromOriginalStory;
-(NSString *)name;
-(NSString *)url;
-(NSString *)caption;
-(NSString *)quote;
@end

